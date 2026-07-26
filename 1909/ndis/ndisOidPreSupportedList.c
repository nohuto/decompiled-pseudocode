/*
 * XREFs of ndisOidPreSupportedList @ 0x1C0015250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

char __fastcall ndisOidPreSupportedList(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  __int64 v5; // rsi
  KSPIN_LOCK *v6; // r14
  KIRQL v7; // r12
  int v8; // eax
  unsigned int v9; // r15d
  __int64 v11; // rcx
  int v12; // eax

  v1 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      66,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    goto LABEL_13;
  }
  v3 = a1[3];
  v4 = 0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    goto LABEL_8;
  }
  if ( !a1[1] )
  {
    v5 = *a1;
    if ( !*a1 )
      v5 = *(_QWORD *)(a1[2] + 32);
LABEL_8:
    v6 = (KSPIN_LOCK *)(v5 + 96);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
    *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
    if ( *(_QWORD *)(v5 + 3088) )
    {
      v8 = 0;
      v9 = *(_DWORD *)(v5 + 3096) + *(_DWORD *)(v5 + 3408);
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < v9 )
      {
        v8 = -1073676268;
        *(_DWORD *)(v1 + 56) = v9;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      if ( v8 )
      {
LABEL_12:
        *(_QWORD *)(v5 + 520) = 0LL;
        KeReleaseSpinLock(v6, v7);
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      memmove(*(void **)(v1 + 40), *(const void **)(v5 + 3088), *(unsigned int *)(v5 + 3096));
      v11 = *(unsigned int *)(v5 + 3096);
LABEL_18:
      memmove((void *)(*(_QWORD *)(v1 + 40) + v11), *(const void **)(v5 + 3400), *(unsigned int *)(v5 + 3408));
      *(_QWORD *)(v5 + 520) = 0LL;
      KeReleaseSpinLock(v6, v7);
      *(_DWORD *)(a1[4] + 52) = v9;
      goto LABEL_13;
    }
    goto LABEL_27;
  }
  if ( a1[2] )
    goto LABEL_14;
  v5 = *a1;
  v6 = (KSPIN_LOCK *)(*a1 + 96);
  v7 = KeAcquireSpinLockRaiseToDpc(v6);
  *(_QWORD *)(v5 + 520) = KeGetCurrentThread();
  if ( *(_QWORD *)(v5 + 496) )
  {
    v12 = 0;
    v9 = *(_DWORD *)(v5 + 200) + *(_DWORD *)(v5 + 3408);
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < v9 )
    {
      v12 = -1073676268;
      *(_DWORD *)(v1 + 56) = v9;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    if ( v12 )
      goto LABEL_12;
    memmove(*(void **)(v1 + 40), *(const void **)(v5 + 496), *(unsigned int *)(v5 + 200));
    v11 = *(unsigned int *)(v5 + 200);
    goto LABEL_18;
  }
LABEL_27:
  *(_QWORD *)(v5 + 520) = 0LL;
  KeReleaseSpinLock(v6, v7);
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      67,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      v1);
  return v4;
}
