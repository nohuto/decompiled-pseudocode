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
  void **v7; // rbx
  _QWORD *v9; // rdi
  volatile signed __int64 *v10; // rcx
  char *v11; // rsi
  _QWORD *v12; // r14
  int v13; // ebx
  _DWORD *v14; // r15
  int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rbx
  __int64 v18; // rbp
  __int64 (__fastcall *v19)(_QWORD *); // rbx
  int v20; // r13d
  int v21; // ebx
  int v23; // ecx
  NTSTATUS v24; // eax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  int v28; // ebx
  __int64 v29; // rbx
  void *ProcessHeap; // rcx
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
  v7 = (void **)(&LdrpVectorHandlerList + 3 * a3 + 1);
  if ( _bittest((const int *)&CrossProcessFlags, a3 + 2) )
  {
    v34[0] = a1;
    v9 = 0LL;
    v10 = (volatile signed __int64 *)*(&LdrpVectorHandlerList + 3 * a3);
    v34[1] = a2;
    RtlAcquireSRWLockExclusive(v10);
    v11 = (char *)*v7;
    if ( *v7 != v7 )
    {
      while ( 1 )
      {
        v12 = v11;
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
          if ( v13 == -1 )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v13 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        v14 = v11 + 16;
        ++*((_DWORD *)v11 + 4);
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v15 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v15 - 1;
          if ( v15 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
        v16 = `RtlpGetCookieValue'::`2'::CookieValue;
        v17 = *((_QWORD *)v11 + 3);
        if ( !`RtlpGetCookieValue'::`2'::CookieValue )
        {
          v24 = NtQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PROCESSINFOCLASS)36,
                  &ProcessInformation,
                  4u,
                  0LL);
          if ( v24 < 0 )
            RtlRaiseStatus((unsigned int)v24);
          v16 = ProcessInformation;
          `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
        }
        v18 = 0LL;
        v19 = (__int64 (__fastcall *)(_QWORD *))(v16 ^ __ROR8__(v17, 64 - (v16 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v18 = RtlpLogExceptionHandler(a1, a2, 0LL, v19);
        v20 = v19(v34);
        if ( v18 )
          *(_DWORD *)(v18 + 1396) = v20 != -1;
        RtlAcquireSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
        v11 = *(char **)v11;
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v21 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
          if ( v21 == -1 )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v21 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( (*v14)-- == 1 )
        {
          LdrProtectMrdata(0);
          v25 = (_QWORD *)*v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v26 = (_QWORD *)v12[1], (_QWORD *)*v26 != v12) )
            __fastfail(3u);
          *v26 = v25;
          v25[1] = v26;
          if ( v26 == v25 )
            _interlockedbittestandreset((volatile signed __int32 *)&v33->80, v32);
          LdrProtectMrdata(1);
          *v12 = v9;
          v9 = v12;
        }
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
        {
          RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
          v23 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            goto LABEL_61;
          *(_DWORD *)LdrpMrdataHeapUnprotected = v23 - 1;
          if ( v23 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( v20 == -1 )
          break;
        if ( v11 == (char *)(&LdrpVectorHandlerList + v5 + 1) )
        {
          v4 = 0;
          goto LABEL_33;
        }
        v3 = v33;
      }
      v4 = 1;
    }
LABEL_33:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
    if ( v9 )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v28 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        if ( v28 == -1 )
          goto LABEL_61;
        *(_DWORD *)LdrpMrdataHeapUnprotected = v28 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v29 = (__int64)v9;
        v9 = (_QWORD *)*v9;
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)ProcessHeap, 0, v29);
      }
      while ( v9 );
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
          if ( v31 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
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
