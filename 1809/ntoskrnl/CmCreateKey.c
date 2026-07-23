/*
 * XREFs of CmCreateKey @ 0x1405B6A60
 * Callers:
 *     NtCreateKey @ 0x1405B69F0 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x140694E30 (NtCreateKeyTransacted.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     PsGetCurrentSilo @ 0x14004D350 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  HANDLE *v10; // rdi
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v12; // r12
  unsigned __int8 v13; // si
  size_t v14; // rax
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // rcx
  int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rax
  struct _PRIVILEGE_SET *v25; // rdi
  int v26; // ebx
  void *v27; // rcx
  POBJECT_TYPE *v28; // rbx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v31; // rcx
  unsigned int v32; // [rsp+44h] [rbp-244h]
  HANDLE Handle; // [rsp+48h] [rbp-240h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-238h]
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-230h]
  size_t Size; // [rsp+60h] [rbp-228h]
  __int128 v37; // [rsp+70h] [rbp-218h] BYREF
  __int128 v38; // [rsp+80h] [rbp-208h]
  __int64 v39; // [rsp+90h] [rbp-1F8h]
  __int128 v40; // [rsp+A0h] [rbp-1E8h]
  HANDLE *v41; // [rsp+B0h] [rbp-1D8h]
  ULONG_PTR v42; // [rsp+B8h] [rbp-1D0h]
  _DWORD *v43; // [rsp+C0h] [rbp-1C8h]
  PVOID Object; // [rsp+C8h] [rbp-1C0h] BYREF
  void *Src[2]; // [rsp+D0h] [rbp-1B8h]
  unsigned __int64 v46; // [rsp+E0h] [rbp-1A8h]
  _QWORD v47[38]; // [rsp+F0h] [rbp-198h] BYREF
  LARGE_INTEGER v48[4]; // [rsp+220h] [rbp-68h] BYREF

  v10 = a1;
  *(_QWORD *)&v40 = a1;
  v41 = a1;
  v42 = a3;
  Size = (size_t)a5;
  v43 = a7;
  Handle = 0LL;
  v37 = 0uLL;
  v38 = 0uLL;
  Privileges = 0LL;
  memset(v48, 0, sizeof(v48));
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v48, 0x20000u);
  memset(v47, 0, 0x128uLL);
  v47[19] = &v47[18];
  v47[18] = &v47[18];
  memset(&v47[27], 0, 0x50uLL);
  HIDWORD(v47[3]) = a2 & 0x300;
  v34 = a2 & 0xFFFFFCFF;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v12 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v26 = -1073741431;
    goto LABEL_63;
  }
  v13 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  if ( v13 == 1 )
  {
    if ( a5 )
    {
      v14 = Size;
      if ( Size >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      v15 = *(unsigned int *)v14;
      LODWORD(Src[0]) = v15;
      v16 = *(void **)(v14 + 8);
      Src[1] = v16;
      v38 = *(_OWORD *)Src;
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
        v32 = -1073741811;
        goto LABEL_45;
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
          v32 = -1073741670;
          goto LABEL_45;
        }
        v25 = TransientPoolWithQuotaTag;
        memmove(TransientPoolWithQuotaTag, Src[1], Size);
        *((_QWORD *)&v38 + 1) = v25;
        v10 = (HANDLE *)v40;
      }
    }
    v17 = (__int64)v10;
    if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
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
    v46 = v19;
    if ( v19 >= 0x7FFFFFFF0000LL )
      v19 = 0x7FFFFFFF0000LL;
    v20 = *(_DWORD *)v19;
    LODWORD(v40) = v20;
    v21 = *(_QWORD *)(v19 + 8);
    *((_QWORD *)&v40 + 1) = v21;
    v37 = v40;
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
      v32 = -1073741811;
      goto LABEL_45;
    }
    v27 = *(void **)(a3 + 8);
    Handle = v27;
  }
  else
  {
    if ( a5 )
      v38 = *a5;
    v37 = *(_OWORD *)*(_QWORD *)(a3 + 16);
    v27 = *(void **)(a3 + 8);
    Handle = v27;
  }
  if ( CmpTraceRoutine
    && v27
    && ObReferenceObjectByHandle(
         Handle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL) >= 0 )
  {
    v39 = *((_QWORD *)Object + 1);
    ObfDereferenceObject(Object);
  }
  if ( (a6 & 0x100001F) != a6 )
  {
    v26 = -1073741811;
LABEL_63:
    v32 = v26;
    goto LABEL_45;
  }
  LODWORD(v47[3]) = a6;
  LODWORD(v47[0]) = 1;
  v47[1] = *((_QWORD *)&v38 + 1);
  WORD2(v47[0]) = v38;
  v47[9] = a8;
  v28 = CmKeyObjectType;
  CurrentSilo = PsGetCurrentSilo();
  v26 = ObOpenObjectByNameEx(a3, v28, v13, 0LL, v34, v47, CurrentSilo, &Handle);
  v32 = v26;
  if ( v26 >= 0 )
  {
    *v10 = Handle;
    if ( a7 )
      *a7 = v47[4];
  }
LABEL_45:
  if ( CmpTraceRoutine )
  {
    v31 = v39;
    LOBYTE(v31) = 10;
    CmpTraceRoutine(v31, v48, (unsigned int)v26, 0LL, v39, &v37);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  CmpCleanupParseContext(v47, 0LL);
  if ( v12 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v32;
  }
  return (unsigned int)v26;
}
