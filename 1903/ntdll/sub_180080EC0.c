/*
 * XREFs of sub_180080EC0 @ 0x180080EC0
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x180080EB0 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1800D89C0 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 */

__int64 __fastcall sub_180080EC0(void **a1, unsigned int a2)
{
  __int64 v4; // rsi
  void **v5; // rdi
  void **i; // rbx
  int v7; // eax
  int v8; // edi
  void **v10; // rcx
  void **v11; // rax
  void **v12; // rdi
  int v13; // eax
  PVOID v14; // rcx
  int v15; // eax
  int v16; // edx
  int v18; // eax
  int v19; // ecx

  v4 = 3LL * a2;
  v5 = (void **)(&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * a2);
  RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + 3 * a2));
  for ( i = (void **)*v5; ; i = (void **)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  LOBYTE(v7) = LdrControlFlowGuardEnforced();
  if ( !v7 )
    goto LABEL_9;
  RtlAcquireSRWLockExclusive(&stru_180165010);
  v8 = *(_DWORD *)qword_18017A288;
  if ( !*(_DWORD *)qword_18017A288 )
    RtlProtectHeap(qword_18017A278, 0);
  if ( v8 == -1 )
    goto LABEL_33;
  *(_DWORD *)qword_18017A288 = v8 + 1;
  RtlReleaseSRWLockExclusive(&stru_180165010);
LABEL_9:
  if ( (*((_DWORD *)i + 4))-- != 1 )
  {
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( v18 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v19 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        goto LABEL_33;
      *(_DWORD *)qword_18017A288 = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap(qword_18017A278, 1u);
      RtlReleaseSRWLockExclusive(&stru_180165010);
    }
    v12 = 0LL;
    goto LABEL_15;
  }
  sub_180035F18(0);
  v10 = (void **)*i;
  v11 = (void **)i[1];
  if ( *((void ***)*i + 1) != i || *v11 != i )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = v11;
  if ( v11 == v10 )
    _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, a2 + 2);
  v12 = i;
LABEL_15:
  RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + v4));
  if ( v12 )
  {
    LOBYTE(v13) = LdrControlFlowGuardEnforced();
    v14 = v13 ? qword_18017A278 : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v14, 0, i);
    sub_180035F18(1);
    LOBYTE(v15) = LdrControlFlowGuardEnforced();
    if ( v15 )
    {
      RtlAcquireSRWLockExclusive(&stru_180165010);
      v16 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v16 - 1;
        if ( v16 == 1 )
          RtlProtectHeap(qword_18017A278, 1u);
        RtlReleaseSRWLockExclusive(&stru_180165010);
        return 1LL;
      }
LABEL_33:
      RtlReleaseSRWLockExclusive(&stru_180165010);
      __fastfail(0xEu);
    }
  }
  return 1LL;
}
