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
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpLogExceptionHandler @ 0x1800FD6DC (RtlpLogExceptionHandler.c)
 */

char __fastcall RtlpCallVectoredHandlers(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _PEB *v3; // r13
  __int64 v4; // rax
  char v5; // si
  unsigned __int64 *v6; // r8
  __int64 v7; // r12
  void **v8; // rbx
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  char *v14; // r14
  _QWORD *v15; // r15
  _DWORD *v16; // rbp
  unsigned int v17; // edx
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(_QWORD *); // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r8
  __int64 v23; // r9
  int v24; // r13d
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // r8
  __int64 v28; // r9
  int v30; // ebx
  int v31; // ecx
  int v32; // ebx
  int v33; // ecx
  NTSTATUS v34; // eax
  unsigned __int64 v35; // rdx
  unsigned __int64 *v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rcx
  _QWORD *v39; // rax
  int v40; // ebx
  unsigned __int64 v41; // rbx
  void *ProcessHeap; // rcx
  unsigned __int64 v43; // rdx
  unsigned __int64 *v44; // r8
  __int64 v45; // r9
  int v46; // edx
  unsigned int v47; // [rsp+30h] [rbp-68h]
  struct _PEB *v48; // [rsp+38h] [rbp-60h]
  _QWORD v49[11]; // [rsp+40h] [rbp-58h] BYREF
  int ProcessInformation; // [rsp+B8h] [rbp+20h] BYREF

  v3 = NtCurrentPeb();
  v4 = a3;
  v5 = 0;
  v48 = v3;
  v6 = (unsigned __int64 *)(a3 + 2);
  v47 = (unsigned int)v6;
  v7 = 3 * v4;
  LODWORD(v4) = v3->CrossProcessFlags;
  v8 = (void **)(&LdrpVectorHandlerList + v7 + 1);
  if ( _bittest((const int *)&v4, (unsigned int)v6) )
  {
    v49[0] = a1;
    v9 = 0LL;
    v10 = (unsigned __int64)*(&LdrpVectorHandlerList + v7);
    v49[1] = a2;
    RtlAcquireSRWLockExclusive(v10, a2, v6, (__int64)&LdrpVectorHandlerList);
    v14 = (char *)*v8;
    if ( *v8 != v8 )
    {
      while ( 1 )
      {
        v15 = v14;
        if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v30 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
          if ( v30 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v30 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        v16 = v14 + 16;
        ++*((_DWORD *)v14 + 4);
        if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v31 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v31 - 1;
          if ( v31 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v7));
        v17 = `RtlpGetCookieValue'::`2'::CookieValue;
        v18 = *((_QWORD *)v14 + 3);
        if ( !`RtlpGetCookieValue'::`2'::CookieValue )
        {
          v34 = NtQueryInformationProcess(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  (PROCESSINFOCLASS)36,
                  &ProcessInformation,
                  4u,
                  0LL);
          if ( v34 < 0 )
            RtlRaiseStatus((unsigned int)v34);
          v17 = ProcessInformation;
          `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
        }
        v19 = 0LL;
        v20 = (__int64 (__fastcall *)(_QWORD *))(v17 ^ __ROR8__(v18, 64 - (v17 & 0x3F)));
        if ( (v3->NtGlobalFlag & 0x800000) != 0 )
          v19 = RtlpLogExceptionHandler(a1, a2, 0LL, v20);
        v24 = v20(v49);
        if ( v19 )
          *(_DWORD *)(v19 + 1396) = v24 != -1;
        RtlAcquireSRWLockExclusive((unsigned __int64)*(&LdrpVectorHandlerList + v7), v21, v22, v23);
        v14 = *(char **)v14;
        if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v32 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
          if ( v32 == -1 )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v32 + 1;
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( (*v16)-- == 1 )
        {
          LdrProtectMrdata(0, v11, v12, v13);
          v38 = (_QWORD *)*v15;
          v39 = (_QWORD *)v15[1];
          if ( *(_QWORD **)(*v15 + 8LL) != v15 || (_QWORD *)*v39 != v15 )
            __fastfail(3u);
          *v39 = v38;
          v38[1] = v39;
          if ( v39 == v38 )
            _interlockedbittestandreset((volatile signed __int32 *)&v48->80, v47);
          LdrProtectMrdata(1, v35, v36, v37);
          *v15 = v9;
          v9 = v15;
        }
        if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v11, v12, v13);
          v33 = *(_DWORD *)LdrpMrdataHeapUnprotected;
          if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          {
            RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
            __fastfail(0xEu);
          }
          *(_DWORD *)LdrpMrdataHeapUnprotected = v33 - 1;
          if ( v33 == 1 )
            RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        }
        if ( v24 == -1 )
          break;
        if ( v14 == (char *)(&LdrpVectorHandlerList + v7 + 1) )
        {
          v5 = 0;
          goto LABEL_16;
        }
        v3 = v48;
      }
      v5 = 1;
    }
LABEL_16:
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v7));
    if ( v9 )
    {
      if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v26, v27, v28);
        v40 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
        if ( v40 == -1 )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v40 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      do
      {
        v41 = (unsigned __int64)v9;
        v9 = (_QWORD *)*v9;
        if ( (unsigned int)LdrControlFlowGuardEnforced() )
          ProcessHeap = (void *)LdrpMrdataHeap;
        else
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)ProcessHeap, 0, v41);
      }
      while ( v9 );
      if ( qword_1801783A0 && (byte_18017838C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpMrdataLock, v43, v44, v45);
        v46 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
          __fastfail(0xEu);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v46 - 1;
        if ( v46 == 1 )
          RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
    }
  }
  return v5;
}
