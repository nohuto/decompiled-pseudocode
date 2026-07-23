/*
 * XREFs of sub_180078AA0 @ 0x180078AA0
 * Callers:
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800FA8BC @ 0x1800FA8BC (sub_1800FA8BC.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

char __fastcall sub_180078AA0(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // r13
  char v4; // bp
  __int64 v5; // r12
  ULONG CrossProcessFlags; // eax
  ULONG_PTR *v7; // rbx
  _QWORD *v9; // rdi
  _RTL_SRWLOCK *v10; // rcx
  ULONG_PTR v11; // rsi
  _QWORD *v12; // r14
  int v13; // eax
  int v14; // ebx
  _DWORD *v15; // r15
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // rbp
  __int64 (__fastcall *v21)(_QWORD *); // rbx
  int v22; // r13d
  int v23; // eax
  int v24; // ebx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  int v31; // eax
  int v32; // ebx
  void *v33; // rbx
  int v34; // eax
  PVOID ProcessHeap; // rcx
  int v36; // eax
  int v37; // edx
  unsigned int v38; // [rsp+30h] [rbp-68h]
  struct _PEB *v39; // [rsp+38h] [rbp-60h]
  _QWORD v40[11]; // [rsp+40h] [rbp-58h] BYREF
  int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v39 = v3;
  v38 = a3 + 2;
  v5 = 3LL * a3;
  CrossProcessFlags = v3->CrossProcessFlags;
  v7 = &LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * a3;
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v40[0] = a1;
    v9 = 0LL;
    v10 = (_RTL_SRWLOCK *)*(&LdrSystemDllInitBlock.ScpCfgCheckFunction + 3 * a3);
    v40[1] = a2;
    RtlAcquireSRWLockExclusive(v10);
    v11 = *v7;
    if ( (ULONG_PTR *)*v7 != v7 )
    {
      while ( 1 )
      {
        v12 = (_QWORD *)v11;
        LOBYTE(v13) = LdrControlFlowGuardEnforced();
        if ( v13 )
        {
          RtlAcquireSRWLockExclusive(&stru_180165010);
          v14 = *(_DWORD *)qword_18017A288;
          if ( !*(_DWORD *)qword_18017A288 )
            RtlProtectHeap(qword_18017A278, 0);
          if ( v14 == -1 )
            goto LABEL_61;
          *(_DWORD *)qword_18017A288 = v14 + 1;
          RtlReleaseSRWLockExclusive(&stru_180165010);
        }
        v15 = (_DWORD *)(v11 + 16);
        ++*(_DWORD *)(v11 + 16);
        LOBYTE(v16) = LdrControlFlowGuardEnforced();
        if ( v16 )
        {
          RtlAcquireSRWLockExclusive(&stru_180165010);
          v17 = *(_DWORD *)qword_18017A288;
          if ( !*(_DWORD *)qword_18017A288 )
            goto LABEL_61;
          *(_DWORD *)qword_18017A288 = v17 - 1;
          if ( v17 == 1 )
            RtlProtectHeap(qword_18017A278, 1u);
          RtlReleaseSRWLockExclusive(&stru_180165010);
        }
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + v5));
        v18 = dword_180166018;
        v19 = *(_QWORD *)(v11 + 24);
        if ( !dword_180166018 )
        {
          v28 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
          if ( v28 < 0 )
            RtlRaiseStatus(v28);
          v18 = ProcessInformation;
          dword_180166018 = ProcessInformation;
        }
        v20 = 0LL;
        v21 = (__int64 (__fastcall *)(_QWORD *))(v18 ^ __ROR8__(v19, 64 - (v18 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v20 = sub_1800FA8BC(a1, a2, 0LL, v21);
        v22 = v21(v40);
        if ( v20 )
          *(_DWORD *)(v20 + 1396) = v22 != -1;
        RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + v5));
        v11 = *(_QWORD *)v11;
        LOBYTE(v23) = LdrControlFlowGuardEnforced();
        if ( v23 )
        {
          RtlAcquireSRWLockExclusive(&stru_180165010);
          v24 = *(_DWORD *)qword_18017A288;
          if ( !*(_DWORD *)qword_18017A288 )
            RtlProtectHeap(qword_18017A278, 0);
          if ( v24 == -1 )
            goto LABEL_61;
          *(_DWORD *)qword_18017A288 = v24 + 1;
          RtlReleaseSRWLockExclusive(&stru_180165010);
        }
        if ( (*v15)-- == 1 )
        {
          sub_180035F18(0);
          v29 = (_QWORD *)*v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v30 = (_QWORD *)v12[1], (_QWORD *)*v30 != v12) )
            __fastfail(3u);
          *v30 = v29;
          v29[1] = v30;
          if ( v30 == v29 )
            _interlockedbittestandreset((volatile signed __int32 *)&v39->CrossProcessFlags, v38);
          sub_180035F18(1);
          *v12 = v9;
          v9 = v12;
        }
        LOBYTE(v26) = LdrControlFlowGuardEnforced();
        if ( v26 )
        {
          RtlAcquireSRWLockExclusive(&stru_180165010);
          v27 = *(_DWORD *)qword_18017A288;
          if ( !*(_DWORD *)qword_18017A288 )
            goto LABEL_61;
          *(_DWORD *)qword_18017A288 = v27 - 1;
          if ( v27 == 1 )
            RtlProtectHeap(qword_18017A278, 1u);
          RtlReleaseSRWLockExclusive(&stru_180165010);
        }
        if ( v22 == -1 )
          break;
        if ( (ULONG_PTR *)v11 == &LdrSystemDllInitBlock.ScpCfgCheckESFunction + v5 )
        {
          v4 = 0;
          goto LABEL_33;
        }
        v3 = v39;
      }
      v4 = 1;
    }
LABEL_33:
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckFunction + v5));
    if ( v9 )
    {
      LOBYTE(v31) = LdrControlFlowGuardEnforced();
      if ( v31 )
      {
        RtlAcquireSRWLockExclusive(&stru_180165010);
        v32 = *(_DWORD *)qword_18017A288;
        if ( !*(_DWORD *)qword_18017A288 )
          RtlProtectHeap(qword_18017A278, 0);
        if ( v32 == -1 )
          goto LABEL_61;
        *(_DWORD *)qword_18017A288 = v32 + 1;
        RtlReleaseSRWLockExclusive(&stru_180165010);
      }
      do
      {
        v33 = v9;
        v9 = (_QWORD *)*v9;
        LOBYTE(v34) = LdrControlFlowGuardEnforced();
        if ( v34 )
          ProcessHeap = qword_18017A278;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0, v33);
      }
      while ( v9 );
      LOBYTE(v36) = LdrControlFlowGuardEnforced();
      if ( v36 )
      {
        RtlAcquireSRWLockExclusive(&stru_180165010);
        v37 = *(_DWORD *)qword_18017A288;
        if ( *(_DWORD *)qword_18017A288 )
        {
          *(_DWORD *)qword_18017A288 = v37 - 1;
          if ( v37 == 1 )
            RtlProtectHeap(qword_18017A278, 1u);
          RtlReleaseSRWLockExclusive(&stru_180165010);
          return v4;
        }
LABEL_61:
        RtlReleaseSRWLockExclusive(&stru_180165010);
        __fastfail(0xEu);
      }
    }
  }
  return v4;
}
