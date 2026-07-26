/*
 * XREFs of ndisQueryWakeUpPatternList @ 0x1C0075D38
 * Callers:
 *     ndisOidPrePMWOLPatternList @ 0x1C0074890 (ndisOidPrePMWOLPatternList.c)
 *     ndisOidPreWakeUpPatternList @ 0x1C0074C40 (ndisOidPreWakeUpPatternList.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisQueryWakeUpPatternList(__int64 a1, KSPIN_LOCK *a2, __int64 a3)
{
  unsigned int v3; // ebx
  KSPIN_LOCK *v5; // rdi
  KSPIN_LOCK *v7; // r12
  KIRQL v8; // al
  KSPIN_LOCK v9; // rsi
  KSPIN_LOCK i; // r10
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r15d
  char *v15; // r13
  int v16; // r12d
  __int64 v17; // rcx
  __int64 v18; // rbx
  int v19; // edx
  char v21; // [rsp+28h] [rbp-60h]
  KIRQL NewIrql; // [rsp+90h] [rbp+8h]
  int v23; // [rsp+98h] [rbp+10h]

  v3 = 0;
  v23 = 0;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      44,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v21,
      a1,
      a3);
  }
  if ( !v5 )
    v5 = *(KSPIN_LOCK **)(a1 + 16);
  v7 = v5 + 12;
  v8 = KeAcquireSpinLockRaiseToDpc(v5 + 12);
  v5[65] = (KSPIN_LOCK)KeGetCurrentThread();
  NewIrql = v8;
  if ( a1 )
    v9 = *(_QWORD *)(a1 + 496);
  else
    v9 = v5[120];
  for ( i = v9; i; v3 += v13 )
  {
    v11 = *(unsigned int *)(i + 56);
    v12 = *(_DWORD *)(i + 60) + *(_DWORD *)(i + 64);
    i = *(_QWORD *)i;
    v13 = v11 + 24;
    if ( v11 + 24 <= (unsigned __int64)v12 )
      v13 = v12;
  }
  v14 = 0;
  if ( *(_DWORD *)(a3 + 48) >= v3 )
  {
    v15 = *(char **)(a3 + 40);
    if ( v9 )
    {
      v16 = 0;
      do
      {
        v17 = *(unsigned int *)(v9 + 56);
        v18 = (unsigned int)(v17 + 24);
        if ( v17 + 24 <= (unsigned __int64)(unsigned int)(*(_DWORD *)(v9 + 60) + *(_DWORD *)(v9 + 64)) )
          v18 = (unsigned int)(*(_DWORD *)(v9 + 60) + *(_DWORD *)(v9 + 64));
        memmove(v15, (const void *)(v9 + 48), (unsigned int)v18);
        v9 = *(_QWORD *)v9;
        v15 += v18;
        v16 += v18;
      }
      while ( v9 );
      v23 = v16;
      v7 = v5 + 12;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 56) = v3;
    v14 = -1073676268;
  }
  *(_DWORD *)(a3 + 52) = v23;
  v5[65] = 0LL;
  KeReleaseSpinLock(v7, NewIrql);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      0xBu,
      0x2Du,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)v5,
      a1,
      a3,
      v14);
  return v14;
}
