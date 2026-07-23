/*
 * XREFs of RtlpCallVectoredHandlers @ 0x18006CC90
 * Callers:
 *     RtlDispatchException @ 0x1800048E0 (RtlDispatchException.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrProtectMrdata @ 0x180060510 (LdrProtectMrdata.c)
 *     RtlProtectHeap @ 0x1800606A0 (RtlProtectHeap.c)
 *     RtlRaiseStatus @ 0x18009F6C0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     RtlpLogExceptionHandler @ 0x1800FD6DC (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // r13
  char v4; // si
  __int64 v5; // r12
  unsigned int CrossProcessFlags; // eax
  ULONG_PTR *v7; // rbx
  _QWORD *v8; // rdi
  _RTL_SRWLOCK *v9; // rcx
  ULONG_PTR v10; // r14
  _QWORD *v11; // r15
  _DWORD *v12; // rbp
  unsigned int v13; // edx
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(_QWORD *); // rbx
  int v17; // r13d
  int v20; // ebx
  int v21; // ecx
  int v22; // ebx
  int v23; // ecx
  int v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  int v27; // ebx
  void *v28; // rbx
  int v29; // eax
  PVOID ProcessHeap; // rcx
  int v31; // edx
  unsigned int v32; // [rsp+30h] [rbp-68h]
  struct _PEB *v33; // [rsp+38h] [rbp-60h]
  _QWORD v34[11]; // [rsp+40h] [rbp-58h] BYREF
  int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v33 = v3;
  v32 = a3 + 2;
  v5 = 3LL * a3;
  CrossProcessFlags = v3->CrossProcessFlags;
  v7 = &LdrSystemDllInitBlock.ScpCfgDispatchFunction + 3 * a3;
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v34[0] = a1;
    v8 = 0LL;
    v9 = (_RTL_SRWLOCK *)*(&LdrSystemDllInitBlock.ScpCfgCheckESFunction + 3 * a3);
    v34[1] = a2;
    RtlAcquireSRWLockExclusive(v9);
    v10 = *v7;
    if ( (ULONG_PTR *)*v7 != v7 )
    {
      while ( 1 )
      {
        v11 = (_QWORD *)v10;
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v20 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap(LdrpMrdataHeap, 0);
          if ( v20 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v20 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        v12 = (_DWORD *)(v10 + 16);
        ++*(_DWORD *)(v10 + 16);
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v21 - 1;
          if ( v21 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v5));
        v13 = `RtlpGetCookieValue'::`2'::CookieValue;
        v14 = *(_QWORD *)(v10 + 24);
        if ( !`RtlpGetCookieValue'::`2'::CookieValue )
        {
          v24 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
          if ( v24 < 0 )
            RtlRaiseStatus(v24);
          v13 = ProcessInformation;
          `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
        }
        v15 = 0LL;
        v16 = (__int64 (__fastcall *)(_QWORD *))(v13 ^ __ROR8__(v14, 64 - (v13 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v15 = RtlpLogExceptionHandler(a1, a2, 0LL, v16);
        v17 = v16(v34);
        if ( v15 )
          *(_DWORD *)(v15 + 1396) = v17 != -1;
        RtlAcquireSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v5));
        v10 = *(_QWORD *)v10;
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap(LdrpMrdataHeap, 0);
          if ( v22 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v22 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( (*v12)-- == 1 )
        {
          LdrProtectMrdata(0);
          v25 = (_QWORD *)*v11;
          v26 = (_QWORD *)v11[1];
          if ( *(_QWORD **)(*v11 + 8LL) != v11 || (_QWORD *)*v26 != v11 )
            __fastfail(3u);
          *v26 = v25;
          v25[1] = v26;
          if ( v26 == v25 )
            _interlockedbittestandreset((volatile signed __int32 *)&v33->80, v32);
          LdrProtectMrdata(1);
          *v11 = v8;
          v8 = v11;
        }
        if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
          if ( v23 == 1 )
            RtlProtectHeap(LdrpMrdataHeap, 1u);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( v17 == -1 )
          break;
        if ( (ULONG_PTR *)v10 == &LdrSystemDllInitBlock.ScpCfgDispatchFunction + v5 )
        {
          v4 = 0;
          goto LABEL_16;
        }
        v3 = v33;
      }
      v4 = 1;
    }
LABEL_16:
    RtlReleaseSRWLockExclusive(*((PRTL_SRWLOCK *)&LdrSystemDllInitBlock.ScpCfgCheckESFunction + v5));
    if ( v8 )
    {
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v27 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap(LdrpMrdataHeap, 0);
        if ( v27 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v27 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v28 = v8;
        v8 = (_QWORD *)*v8;
        LOBYTE(v29) = LdrControlFlowGuardEnforced();
        if ( v29 )
          ProcessHeap = LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(ProcessHeap, 0, v28);
      }
      while ( v8 );
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
        if ( v31 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
    }
  }
  return v4;
}
