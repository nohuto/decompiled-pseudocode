/*
 * XREFs of sub_1800066EC @ 0x1800066EC
 * Callers:
 *     sub_1800065D0 @ 0x1800065D0 (sub_1800065D0.c)
 *     sub_18008BDC0 @ 0x18008BDC0 (sub_18008BDC0.c)
 * Callees:
 *     sub_180006950 @ 0x180006950 (sub_180006950.c)
 *     sub_180006ECC @ 0x180006ECC (sub_180006ECC.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x18009E450 (ZwGetCompleteWnfStateSubscription.c)
 */

__int64 __fastcall sub_1800066EC(_WNF_STATE_NAME *BaseAddress, int a2)
{
  ULONG v4; // esi
  int v5; // r15d
  _QWORD *v6; // r8
  _QWORD *v7; // rbx
  int v8; // eax
  __int64 *v9; // r14
  __int64 *v10; // rax
  __int64 *v12; // rdx
  int v13; // ecx
  unsigned __int64 v14; // r8
  _RTL_SRWLOCK *v15; // rcx

  v4 = 0;
  v5 = 0;
  RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180166088 + 8));
  v6 = *(_QWORD **)(qword_180166088 + 16);
  if ( v6 == (_QWORD *)(qword_180166088 + 16) )
    goto LABEL_4;
  while ( 1 )
  {
    v7 = v6 - 4;
    if ( *(v6 - 2) == *(_QWORD *)&BaseAddress[1] && v7[1] == *BaseAddress )
      break;
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(qword_180166088 + 16) )
      goto LABEL_4;
  }
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  v8 = *((_DWORD *)v7 + 32);
  if ( v8 != 2 )
  {
    if ( v8 != 1 )
      goto LABEL_8;
    v15 = (_RTL_SRWLOCK *)(v7 + 7);
    if ( !a2 )
    {
      v7[15] = BaseAddress;
      RtlReleaseSRWLockExclusive(v15);
      v4 = 259;
      goto LABEL_4;
    }
LABEL_38:
    RtlReleaseSRWLockExclusive(v15);
    v4 = 128;
LABEL_4:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180166088 + 8));
    goto LABEL_22;
  }
  if ( a2 )
  {
    v15 = (_RTL_SRWLOCK *)(v7 + 7);
    goto LABEL_38;
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v7[15]);
  v7[15] = 0LL;
  *((_DWORD *)v7 + 32) = 0;
LABEL_8:
  _InterlockedIncrement((volatile signed __int32 *)v7 + 27);
  *((_DWORD *)v7 + 32) = 1;
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  RtlReleaseSRWLockShared((PRTL_SRWLOCK)(qword_180166088 + 8));
  v9 = v7 + 8;
  while ( 1 )
  {
    v4 = 0;
    if ( (unsigned int)sub_180006950(BaseAddress, v7, 0LL) == -1073741267 )
      v4 = -1073741267;
    if ( (unsigned int)sub_180006950(BaseAddress, v7, 1LL) == -1073741267 )
      v4 = -1073741267;
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
    v10 = (__int64 *)*v9;
    ++v5;
    while ( v10 != v9 )
    {
      *((_DWORD *)v10 + 38) = 0;
      v10 = (__int64 *)*v10;
    }
    if ( !v7[15] )
      break;
    BaseAddress = (_WNF_STATE_NAME *)v7[15];
    v7[15] = 0LL;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  }
  if ( v4 )
  {
    v12 = (__int64 *)*v9;
    v13 = 1;
    v7[15] = BaseAddress;
    v14 = 0LL;
    for ( *((_DWORD *)v7 + 32) = 2; v12 != v9; v12 = (__int64 *)*v12 )
    {
      if ( (*((_BYTE *)v12 + 52) & 4) != 0 && *((_DWORD *)v12 + 28) )
      {
        if ( !v14 || v14 > v12[15] )
          v14 = v12[15];
        if ( *((_DWORD *)v12 + 32) < *(_DWORD *)(qword_180166088 + 72) )
          v13 = 0;
      }
    }
    v7[17] = v14;
    *((_DWORD *)v7 + 36) = v13;
  }
  else
  {
    *((_DWORD *)v7 + 32) = 0;
    if ( !*((_DWORD *)v7 + 6) || (signed int)(BaseAddress[2].Data[0] - *((_DWORD *)v7 + 6)) > 0 )
      *((_DWORD *)v7 + 6) = BaseAddress[2].Data[0];
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)v7 + 7);
  sub_180006ECC(v7);
LABEL_22:
  if ( v5 > 1 )
  {
    ZwGetCompleteWnfStateSubscription(BaseAddress + 1, (ULONG64 *)BaseAddress, BaseAddress[3].Data[0], v4, 0LL, 0);
    if ( !v4 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 128;
  }
  return v4;
}
