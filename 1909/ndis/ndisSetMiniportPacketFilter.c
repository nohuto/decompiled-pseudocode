/*
 * XREFs of ndisSetMiniportPacketFilter @ 0x1C0026684
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C0026530 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 */

char __fastcall ndisSetMiniportPacketFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rbx
  __int64 v6; // r13
  char v7; // si
  int v8; // ebp
  KIRQL v9; // dl
  unsigned int *v10; // r15
  int v11; // ecx
  char v12; // bp
  unsigned int v14; // ebp
  char v15; // [rsp+30h] [rbp-38h]

  v4 = a2;
  v6 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      82,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a1,
      v15);
  }
  *a3 = 0;
  v7 = 1;
  if ( *(_DWORD *)(v4 + 48) >= 4u )
  {
    v8 = **(_DWORD **)(v4 + 40);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    if ( !*(_DWORD *)(a1 + 1836) )
      v6 = *(_QWORD *)(a1 + 400);
    v10 = (unsigned int *)(a1 + 160);
    *(_DWORD *)(a1 + 160) = v8;
    if ( v6 )
    {
      if ( (v8 & 0xFFFFFF7F) != (*(_DWORD *)(v6 + 312) & 0xFFFFFF7F) )
      {
        *v10 = v8 & 0xFFFFFF7F;
        v7 = 0;
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x20000) == 0 )
        goto LABEL_10;
      v14 = v8 & 0xFFFFFF5F;
      if ( v14 == (*(_DWORD *)(v6 + 312) & 0xFFFFFF5F) )
        goto LABEL_10;
      *v10 = v14;
    }
    v7 = 0;
LABEL_10:
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
    v11 = *(_DWORD *)(v4 + 88);
    v12 = 0;
    if ( (v11 & 0x80000) == 0 )
      v12 = v7;
    if ( v12 )
    {
      if ( !*a3 )
        *(_DWORD *)(v4 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(v4 + 88) = v11 | 0x800;
      *(_QWORD *)(a1 + 528) = *(_QWORD *)(v4 + 40);
      *(_WORD *)(a1 + 536) = *(_WORD *)(v4 + 48);
      *(_QWORD *)(v4 + 40) = v10;
      *(_DWORD *)(v4 + 48) = 4;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x54u,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        a1,
        v12,
        *a3);
    return v12;
  }
  *(_DWORD *)(v4 + 56) = 4;
  *a3 = -1073676268;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      83,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      20);
  }
  return 1;
}
