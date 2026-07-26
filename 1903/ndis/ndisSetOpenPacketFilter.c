/*
 * XREFs of ndisSetOpenPacketFilter @ 0x1C0026A68
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C0026540 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqDL @ 0x1C0026C90 (WPP_RECORDER_SF_qqDL.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0026D54 (ndisUpdateLoopbackOpens.c)
 *     XFilterAdjust @ 0x1C0026D8C (XFilterAdjust.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E48 (ndisUpdateCheckForLoopbackFlag.c)
 */

char __fastcall ndisSetOpenPacketFilter(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbp
  int v7; // r14d
  int v8; // ebx
  unsigned int v9; // r13d
  KIRQL v10; // r11
  int v11; // ecx
  unsigned __int8 v12; // r14
  _DWORD *v13; // rbx
  __int64 v14; // rdx
  KIRQL v15; // al
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  KIRQL v19; // r9
  int v20; // r8d
  int v21; // r9d
  int v23; // [rsp+20h] [rbp-58h]
  char v24; // [rsp+30h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v24 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      76,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v24);
  }
  v7 = 0;
  if ( *(_DWORD *)(v5 + 48) >= 4u )
  {
    v8 = 259;
    v9 = **(_DWORD **)(v5 + 40);
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) != 0 )
      goto LABEL_8;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v11 = *(_DWORD *)(v3 + 464);
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    if ( v11 )
    {
      if ( v11 == 16 )
      {
        v7 = 259;
        *(_DWORD *)(a1 + 436) = *(_DWORD *)(a1 + 432);
        *(_DWORD *)(a1 + 432) = v9;
      }
    }
    else
    {
      v7 = XFilterAdjust(*(_QWORD *)(v3 + 400), a1, v9);
      v9 = *(_DWORD *)(*(_QWORD *)(v3 + 400) + 304LL);
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v10);
    if ( v7 == 259 )
    {
LABEL_8:
      v12 = 0;
    }
    else
    {
      *(_DWORD *)(v5 + 52) = 4;
      v12 = 1;
      v8 = 0;
    }
    *a3 = v8;
    v13 = *(_DWORD **)(v5 + 40);
    LOBYTE(v14) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
    if ( (*v13 & 0xA0) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
        goto LABEL_11;
      *(_DWORD *)(a1 + 224) |= 4u;
      ++*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 608) >= 6u )
        ++*(_DWORD *)(v3 + 2244);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) == 0 )
      {
LABEL_11:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v14);
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v3 + 520) = CurrentThread;
        LOBYTE(v17) = v15;
        ndisUpdateLoopbackOpens(v3, CurrentThread, v18, v17);
        *(_QWORD *)(v3 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v19);
        *(_DWORD *)(v5 + 164) = v9;
        *(_QWORD *)(v5 + 152) = *(_QWORD *)(v5 + 40);
        *(_DWORD *)(v5 + 160) = *(_DWORD *)(v5 + 48);
        *(_QWORD *)(v5 + 40) = v5 + 164;
        *(_DWORD *)(v5 + 48) = 4;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqDL(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, v20, v21, v23, a1, v5, v12, *a3);
        return v12;
      }
      *(_DWORD *)(a1 + 224) &= ~4u;
      --*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 608) >= 6u )
        --*(_DWORD *)(v3 + 2244);
    }
    ndisUpdateCheckForLoopbackFlag(v3, v14);
    goto LABEL_11;
  }
  *(_DWORD *)(v5 + 56) = 4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      77,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v5,
      20);
  }
  *a3 = -1073676268;
  return 1;
}
