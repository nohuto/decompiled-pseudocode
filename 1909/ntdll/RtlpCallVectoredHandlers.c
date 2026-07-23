/*
 * XREFs of RtlpCallVectoredHandlers @ 0x180078F20
 * Callers:
 *     RtlDispatchException @ 0x18006A8C0 (RtlDispatchException.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180035F18 (LdrProtectMrdata.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlProtectHeap @ 0x180048240 (RtlProtectHeap.c)
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpLogExceptionHandler @ 0x1800FA99C (RtlpLogExceptionHandler.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // r13
  char v4; // bp
  __int64 v5; // r12
  unsigned int CrossProcessFlags; // eax
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
  v7 = &LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * a3;
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v40[0] = a1;
    v9 = 0LL;
    v10 = (_RTL_SRWLOCK *)*(&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * a3);
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
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v14 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap(LdrpMrdataHeap, 0);
          if ( v14 == -1 )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v14 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        v15 = (_DWORD *)(v11 + 16);
        ++*(_DWORD *)(v11 + 16);
        LOBYTE(v16) = LdrControlFlowGuardEnforced();
        if ( v16 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
          if ( v17 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v5));
        v18 = `RtlpGetCookieValue'::`2'::CookieValue;
        v19 = *(_QWORD *)(v11 + 24);
        if ( !`RtlpGetCookieValue'::`2'::CookieValue )
        {
          v28 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
          if ( v28 < 0 )
            RtlRaiseStatus(v28);
          v18 = ProcessInformation;
          `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
        }
        v20 = 0LL;
        v21 = (__int64 (__fastcall *)(_QWORD *))(v18 ^ __ROR8__(v19, 64 - (v18 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v20 = RtlpLogExceptionHandler(a1, a2, 0LL, v21);
        v22 = v21(v40);
        if ( v20 )
          *(_DWORD *)(v20 + 1396) = v22 != -1;
        RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v5));
        v11 = *(_QWORD *)v11;
        LOBYTE(v23) = LdrControlFlowGuardEnforced();
        if ( v23 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v24 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap(LdrpMrdataHeap, 0);
          if ( v24 == -1 )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v24 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( (*v15)-- == 1 )
        {
          LdrProtectMrdata(0);
          v29 = (_QWORD *)*v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v30 = (_QWORD *)v12[1], (_QWORD *)*v30 != v12) )
            __fastfail(3u);
          *v30 = v29;
          v29[1] = v30;
          if ( v30 == v29 )
            _interlockedbittestandreset((volatile signed __int32 *)&v39->80, v38);
          LdrProtectMrdata(1);
          *v12 = v9;
          v9 = v12;
        }
        LOBYTE(v26) = LdrControlFlowGuardEnforced();
        if ( v26 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v27 - 1;
          if ( v27 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( v22 == -1 )
          break;
        if ( (ULONG_PTR *)v11 == &LdrSystemDllInitBlock.ScpCfgDispatchFunction + v5 )
        {
          v4 = 0;
          goto LABEL_33;
        }
        v3 = v39;
      }
      v4 = 1;
    }
LABEL_33:
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v5));
    if ( v9 )
    {
      LOBYTE(v31) = LdrControlFlowGuardEnforced();
      if ( v31 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v32 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap(LdrpMrdataHeap, 0);
        if ( v32 == -1 )
          goto LABEL_61;
        *(_DWORD *)LdrpMrdataHeapUnprotected = v32 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v33 = v9;
        v9 = (_QWORD *)*v9;
        LOBYTE(v34) = LdrControlFlowGuardEnforced();
        if ( v34 )
          ProcessHeap = LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0, v33);
      }
      while ( v9 );
      LOBYTE(v36) = LdrControlFlowGuardEnforced();
      if ( v36 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v37 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          *(_DWORD *)LdrpMrdataHeapUnprotected = v37 - 1;
          if ( v37 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          return v4;
        }
LABEL_61:
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        __fastfail(0xEu);
      }
    }
  }
  return v4;
}
