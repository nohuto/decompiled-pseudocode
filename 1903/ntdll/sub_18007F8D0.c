/*
 * XREFs of sub_18007F8D0 @ 0x18007F8D0
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x18007F8C0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x1800D89A0 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlQueryProtectedPolicy @ 0x18007FAE0 (RtlQueryProtectedPolicy.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

_QWORD *__fastcall sub_18007F8D0(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  int v6; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  _QWORD *v9; // rbx
  unsigned int v10; // ecx
  _UNKNOWN **v11; // rdi
  _UNKNOWN ***v12; // rax
  int v13; // edx
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-28h]
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  if ( (int)sub_18007C0A8() >= 0 && ((int)RtlQueryProtectedPolicy(&unk_18011E0F8) < 0 || !v17) )
  {
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v6 = *(_DWORD *)qword_18017A288;
      if ( !*(_DWORD *)qword_18017A288 )
        RtlProtectHeap((_DWORD *)qword_18017A278, 0);
      if ( v6 == -1 )
        goto LABEL_34;
      *(_DWORD *)qword_18017A288 = v6 + 1;
      RtlReleaseSRWLockExclusive(&qword_180165010);
    }
    if ( (unsigned int)LdrControlFlowGuardEnforced() )
      ProcessHeap = (void *)qword_18017A278;
    else
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, 32LL);
    v9 = (_QWORD *)Heap;
    if ( !Heap )
    {
LABEL_18:
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return v9;
      RtlAcquireSRWLockExclusive(&qword_180165010);
      v13 = *(_DWORD *)qword_18017A288;
      if ( *(_DWORD *)qword_18017A288 )
      {
        *(_DWORD *)qword_18017A288 = v13 - 1;
        if ( v13 == 1 )
          RtlProtectHeap((_DWORD *)qword_18017A278, 1);
        RtlReleaseSRWLockExclusive(&qword_180165010);
        return v9;
      }
LABEL_34:
      RtlReleaseSRWLockExclusive(&qword_180165010);
      __fastfail(0xEu);
    }
    v10 = dword_180166018;
    *(_DWORD *)(Heap + 16) = 1;
    if ( !v10 )
    {
      v16 = ZwQueryInformationProcess(-1LL, 36LL, &v18);
      if ( v16 < 0 )
        RtlRaiseStatus((unsigned int)v16);
      v10 = v18;
      dword_180166018 = v18;
    }
    v9[3] = __ROR8__(a2 ^ v10, v10 & 0x3F);
    v11 = &off_18017A3C0 + 3 * v3 + 1;
    sub_180035F18(0);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&off_18017A3C0 + 3 * v3));
    if ( *v11 == (_UNKNOWN *)v11 )
      _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->CrossProcessFlags, v3 + 2);
    if ( a1 )
    {
      v12 = (_UNKNOWN ***)*v11;
      if ( *((_UNKNOWN ***)*v11 + 1) == v11 )
      {
        *v9 = v12;
        v9[1] = v11;
        v12[1] = (_UNKNOWN **)v9;
        *v11 = v9;
LABEL_17:
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&off_18017A3C0 + 3 * v3));
        sub_180035F18(1);
        goto LABEL_18;
      }
    }
    else
    {
      v15 = v11[1];
      if ( (_UNKNOWN **)*v15 == v11 )
      {
        *v9 = v11;
        v9[1] = v15;
        *v15 = v9;
        v11[1] = v9;
        goto LABEL_17;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}
