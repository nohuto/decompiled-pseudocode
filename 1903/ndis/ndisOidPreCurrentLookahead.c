/*
 * XREFs of ndisOidPreCurrentLookahead @ 0x1C003C240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

char __fastcall ndisOidPreCurrentLookahead(__int64 *a1)
{
  __int64 v1; // rbx
  char v3; // di
  int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // r12
  __int64 v7; // r13
  KIRQL v8; // cl
  unsigned int v9; // r15d
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax
  int v17; // eax

  v1 = a1[4];
  v3 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      68,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      *a1,
      v1);
  v4 = *(_DWORD *)(v1 + 4);
  if ( (v4 & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676266;
      goto LABEL_15;
    }
    v16 = a1[3];
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 264);
    }
    else
    {
      if ( !*a1 )
        goto LABEL_15;
      v17 = *(_DWORD *)(*a1 + 596);
    }
    **(_DWORD **)(v1 + 40) = v17;
    *(_DWORD *)(v1 + 52) = 4;
    goto LABEL_15;
  }
  if ( v4 != 1 )
    goto LABEL_15;
  *((_DWORD *)a1 + 10) = 0;
  if ( *(_DWORD *)(v1 + 48) < 4u )
  {
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        11,
        69,
        (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
        0,
        v1,
        20);
  }
  else
  {
    v5 = **(_DWORD **)(v1 + 40);
    if ( a1[3] )
    {
      v6 = *(_QWORD *)(v1 + 104);
      v7 = *(_QWORD *)(v6 + 16);
      if ( v5 <= *(_DWORD *)(v7 + 596) )
      {
        v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 96));
        v9 = 0;
        v10 = *(_QWORD *)(v7 + 56);
        *(_QWORD *)(v7 + 520) = KeGetCurrentThread();
        while ( v10 )
        {
          v11 = v9;
          v9 = *(_DWORD *)(v10 + 264);
          v10 = *(_QWORD *)(v10 + 392);
          if ( v9 <= v11 )
            v9 = v11;
        }
        *(_QWORD *)(v7 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 96), v8);
        if ( v5 > v9 )
        {
          v3 = 0;
          *(_DWORD *)(v1 + 164) = v5;
          *(_QWORD *)(v1 + 152) = *(_QWORD *)(v1 + 40);
          *(_DWORD *)(v1 + 160) = *(_DWORD *)(v1 + 48);
          *(_QWORD *)(v1 + 40) = v1 + 164;
          *(_DWORD *)(v1 + 48) = 4;
          goto LABEL_15;
        }
        *(_DWORD *)(v6 + 264) = v5;
        goto LABEL_19;
      }
      goto LABEL_22;
    }
    v12 = *a1;
    if ( !*a1 )
      goto LABEL_15;
    v14 = *(_DWORD *)(v12 + 596);
    if ( v5 > v14 )
    {
LABEL_22:
      *(_DWORD *)(v1 + 52) = 0;
      *(_DWORD *)(v1 + 56) = 0;
      *((_DWORD *)a1 + 10) = -1073676268;
      goto LABEL_15;
    }
    v15 = *(_DWORD *)(v12 + 592);
    if ( v5 < v15 )
    {
      *(_DWORD *)(v1 + 52) = 4;
      *(_DWORD *)(v1 + 56) = 4;
LABEL_19:
      *((_DWORD *)a1 + 10) = 0;
      goto LABEL_15;
    }
    if ( v15 )
      v14 = **(_DWORD **)(v1 + 40);
    if ( v14 > v15 )
    {
      v3 = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 52) = 4;
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = 0;
    }
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      70,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      *a1,
      v1);
  return v3;
}
