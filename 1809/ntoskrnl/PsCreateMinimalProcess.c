/*
 * XREFs of PsCreateMinimalProcess @ 0x14075752C
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3E88 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     CmpInitializeRegistryProcess @ 0x1407572CC (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x14075DE10 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x14088C1A0 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x14088D2E8 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x1408AFFA0 (VmCreateMemoryProcess.c)
 *     PspInitPhase1 @ 0x1409AB320 (PspInitPhase1.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiDeleteProcessShadow @ 0x1400686D0 (MiDeleteProcessShadow.c)
 *     KeKvaShadowingActive @ 0x140136B44 (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     SeReleaseSubjectContext @ 0x1405E1240 (SeReleaseSubjectContext.c)
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 *     PsAssignProcessToJobObject @ 0x140605DB0 (PsAssignProcessToJobObject.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 *     PspGetMemoryPartitionContext @ 0x14060D560 (PspGetMemoryPartitionContext.c)
 *     PspCreateObjectHandle @ 0x140621C88 (PspCreateObjectHandle.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     PsTerminateProcess @ 0x1406C98D4 (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x140757818 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x140757870 (PspSetMinimalProcessName.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        struct _KPROCESS *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PVOID Object,
        int a6,
        char a7,
        __int64 a8,
        PVOID a9,
        _QWORD *a10)
{
  ULONG_PTR v10; // rsi
  PVOID v12; // r15
  PACCESS_TOKEN v14; // r13
  char v15; // bl
  signed int MemoryPartitionContext; // r14d
  char v17; // r9
  struct _KPROCESS *v18; // rdi
  signed __int8 v19; // cf
  char v20; // al
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-80h] BYREF
  PVOID v23; // [rsp+88h] [rbp-78h] BYREF
  PVOID v24; // [rsp+90h] [rbp-70h] BYREF
  struct _KPROCESS *v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  int v27; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-50h]
  _QWORD *v29; // [rsp+B8h] [rbp-48h]
  _BYTE v30[400]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v31[48]; // [rsp+250h] [rbp+150h] BYREF
  int v32; // [rsp+308h] [rbp+208h]

  v10 = 0LL;
  v24 = 0LL;
  v12 = a9;
  v14 = Object;
  v28 = a3;
  v26 = a2;
  v25 = a1;
  v23 = a9;
  v29 = a10;
  BugCheckParameter1 = 0LL;
  if ( !Object )
    v14 = PsReferencePrimaryToken(a1);
  v15 = Object != 0LL;
  v32 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext((__int64)a1, v32, (__int64)&v23, a9 != 0LL, &v24);
  if ( MemoryPartitionContext >= 0 )
  {
    v17 = a4;
    v18 = v25;
    MemoryPartitionContext = PspAllocateProcess(
                               (__int64)v25,
                               0,
                               0LL,
                               v17,
                               0,
                               0,
                               0LL,
                               v14,
                               v32,
                               a7,
                               0LL,
                               Object != 0LL,
                               v24,
                               (__int64)&v27,
                               &BugCheckParameter1);
    if ( MemoryPartitionContext >= 0 )
    {
      v10 = BugCheckParameter1;
      if ( a8 )
        *(_QWORD *)(BugCheckParameter1 + 1808) = a8;
      if ( (*(_DWORD *)(v10 + 1740) & 1) != 0 && !*(_QWORD *)(v10 + 1808) && (unsigned int)KeKvaShadowingActive() )
      {
        *(_BYTE *)(v10 + 640) = 1;
        v19 = _interlockedbittestandset((volatile signed __int32 *)(v10 + 1740), 0xEu);
        v10 = BugCheckParameter1;
        if ( !v19 )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v31);
          if ( (PEPROCESS)v10 != PsInitialSystemProcess )
            MiDeleteProcessShadow(v10, 1);
          KiUnstackDetachProcess((__int64)v31, 0LL);
        }
        v12 = v23;
      }
      if ( v26 )
        PspSetMinimalProcessName(v10, v26);
      memset(v30, 0, sizeof(v30));
      v20 = 1;
      v30[388] = 0;
      if ( v27 )
        v20 = 3;
      MemoryPartitionContext = PspInsertProcess((char *)v10, v18, 0x2000000, v32, 0LL, v20, v28, (PACCESS_STATE)v30);
      if ( MemoryPartitionContext < 0 )
      {
        PspRundownSingleProcess(v10, 0);
      }
      else
      {
        v15 |= 4u;
        if ( !v12 || (MemoryPartitionContext = PsAssignProcessToJobObject(v12, v10, 0LL), MemoryPartitionContext >= 0) )
        {
          DbgkCreateMinimalProcess((PVOID)v10);
          *(_DWORD *)&v30[384] |= 0x200u;
          v15 |= 2u;
          MemoryPartitionContext = PspCreateObjectHandle(
                                     (void *)v10,
                                     (__int64)v30,
                                     (struct _OBJECT_TYPE *)PsProcessType);
          if ( MemoryPartitionContext >= 0 )
          {
            v15 &= ~4u;
            *v29 = *(_QWORD *)&v30[392];
          }
        }
      }
    }
  }
  if ( (v15 & 2) != 0 )
  {
    SepDeleteAccessState((__int64)v30);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v30[32]);
  }
  if ( v10 )
  {
    if ( (v15 & 4) != 0 )
      PsTerminateProcess(v10, MemoryPartitionContext);
    ObfDereferenceObjectWithTag((PVOID)v10, 0x72437350u);
  }
  if ( v24 )
    ObfDereferenceObjectWithTag(v24, 0x624A7350u);
  if ( (v15 & 1) == 0 )
    ObfDereferenceObject(v14);
  return (unsigned int)MemoryPartitionContext;
}
