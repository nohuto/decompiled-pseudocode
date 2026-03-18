/*
 * XREFs of CmCreateKey @ 0x14063E600
 * Callers:
 *     NtCreateKey @ 0x14063E5C0 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140640EA0 (NtCreateKeyTransacted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     PsGetCurrentSilo @ 0x140043C50 (PsGetCurrentSilo.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x1401094D0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x1405FF960 (CmpCleanupParseContext.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v13; // r12
  char PreviousMode; // r12
  __int64 v15; // rcx
  const void *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  struct _PRIVILEGE_SET *v25; // rsi
  int v26; // ebx
  void *v27; // rax
  ACCESS_MASK v28; // esi
  POBJECT_TYPE *v29; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v32; // rcx
  BOOLEAN v33; // [rsp+40h] [rbp-238h]
  unsigned int v34; // [rsp+44h] [rbp-234h]
  HANDLE Handle; // [rsp+50h] [rbp-228h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-220h]
  __int128 v37; // [rsp+60h] [rbp-218h] BYREF
  __int128 v38; // [rsp+70h] [rbp-208h]
  __int64 v39; // [rsp+80h] [rbp-1F8h]
  __int128 v40; // [rsp+90h] [rbp-1E8h]
  __int128 v41; // [rsp+A0h] [rbp-1D8h]
  size_t Size; // [rsp+B0h] [rbp-1C8h]
  HANDLE *v43; // [rsp+B8h] [rbp-1C0h]
  ULONG_PTR v44; // [rsp+C0h] [rbp-1B8h]
  _DWORD *v45; // [rsp+C8h] [rbp-1B0h]
  PVOID Object[2]; // [rsp+D0h] [rbp-1A8h] BYREF
  _QWORD v47[38]; // [rsp+E0h] [rbp-198h] BYREF
  LARGE_INTEGER v48[4]; // [rsp+210h] [rbp-68h] BYREF

  v43 = a1;
  v44 = a3;
  v11 = (__int64)a5;
  v45 = a7;
  Handle = 0LL;
  v37 = 0uLL;
  v38 = 0uLL;
  Privileges = 0LL;
  memset(v48, 0, sizeof(v48));
  v39 = 0LL;
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
    EtwGetKernelTraceTimestamp(v48, 0x20000u);
  memset(v47, 0, 0x128uLL);
  v47[19] = &v47[18];
  v47[18] = &v47[18];
  memset(&v47[27], 0, 0x50uLL);
  HIDWORD(v47[3]) = a2 & 0x300;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  v33 = v13;
  if ( v13 )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      if ( a5 )
      {
        v40 = 0uLL;
        if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
          v11 = 0x7FFFFFFF0000LL;
        v15 = *(unsigned int *)v11;
        LODWORD(v40) = v15;
        v16 = *(const void **)(v11 + 8);
        *((_QWORD *)&v40 + 1) = v16;
        v38 = v40;
        if ( (_WORD)v15 )
        {
          if ( ((unsigned __int8)v16 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v23 = (unsigned __int64)v16 + (unsigned __int16)v15;
          if ( v23 > 0x7FFFFFFF0000LL || v23 < (unsigned __int64)v16 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        if ( (v15 & 1) != 0 )
        {
          v26 = -1073741811;
          v34 = -1073741811;
          v13 = v33;
          goto LABEL_47;
        }
        if ( (_WORD)v15 )
        {
          Size = (unsigned __int16)v15;
          TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(
                                                                 v15,
                                                                 (unsigned __int16)v15,
                                                                 0x78634D43u);
          Privileges = TransientPoolWithQuotaTag;
          if ( !TransientPoolWithQuotaTag )
          {
            v26 = -1073741670;
            v34 = -1073741670;
            v13 = v33;
            goto LABEL_47;
          }
          v25 = TransientPoolWithQuotaTag;
          memmove(TransientPoolWithQuotaTag, v16, Size);
          *((_QWORD *)&v38 + 1) = v25;
        }
        PreviousMode = 1;
      }
      v17 = (__int64)a1;
      if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v17 = 0LL;
      if ( a7 )
      {
        v18 = (__int64)a7;
        if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
          v18 = 0x7FFFFFFF0000LL;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = *(_QWORD *)(a3 + 16);
      Object[1] = (PVOID)v19;
      v41 = 0uLL;
      if ( v19 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v20 = *(_DWORD *)v19;
      LODWORD(v41) = v20;
      v21 = *(_QWORD *)(v19 + 8);
      *((_QWORD *)&v41 + 1) = v21;
      v37 = v41;
      if ( (_WORD)v20 )
      {
        if ( (v21 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = v21 + (unsigned __int16)v20;
        if ( v22 > 0x7FFFFFFF0000LL || v22 < v21 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v37 & 1) != 0 )
      {
        v26 = -1073741811;
        v34 = -1073741811;
        v13 = v33;
        goto LABEL_47;
      }
      v27 = *(void **)(a3 + 8);
      Handle = v27;
      v28 = a2 & 0xFFFFFCFF;
    }
    else
    {
      if ( a5 )
        v38 = *a5;
      v37 = *(_OWORD *)*(_QWORD *)(a3 + 16);
      v27 = *(void **)(a3 + 8);
      Handle = v27;
      v28 = a2 & 0xFFFFFCFF;
    }
    if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7)
      && v27
      && ObReferenceObjectByHandle(
           Handle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           Object,
           0LL) >= 0 )
    {
      v39 = *((_QWORD *)Object[0] + 1);
      ObfDereferenceObject(Object[0]);
    }
    if ( (a6 & 0x100001F) == a6 )
    {
      LODWORD(v47[3]) = a6;
      LODWORD(v47[0]) = 1;
      v47[1] = *((_QWORD *)&v38 + 1);
      WORD2(v47[0]) = v38;
      v47[9] = a8;
      v29 = CmKeyObjectType;
      CurrentSilo = PsGetCurrentSilo();
      v26 = ObOpenObjectByNameEx(a3, (__int64)v29, PreviousMode, 0LL, v28, (__int64)v47, (__int64)CurrentSilo, &Handle);
      v34 = v26;
      if ( v26 >= 0 )
      {
        *a1 = Handle;
        if ( a7 )
          *a7 = v47[4];
      }
      v13 = v33;
    }
    else
    {
      v26 = -1073741811;
      v34 = -1073741811;
      v13 = v33;
    }
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v26 = -1073741431;
    v34 = -1073741431;
  }
LABEL_47:
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    v32 = v39;
    LOBYTE(v32) = 10;
    (*(void (__fastcall **)(__int64, LARGE_INTEGER *, _QWORD, _QWORD, __int64, __int128 *))((char *)&NlsMbCodePageTag + 7))(
      v32,
      v48,
      (unsigned int)v26,
      0LL,
      v39,
      &v37);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  CmpCleanupParseContext((__int64)v47, 0);
  if ( v13 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return v34;
  }
  return (unsigned int)v26;
}
