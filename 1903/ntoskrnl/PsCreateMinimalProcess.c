/*
 * XREFs of PsCreateMinimalProcess @ 0x140769434
 * Callers:
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140107C6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 *     PspCreateProcess @ 0x1407853D0 (PspCreateProcess.c)
 *     PspCreatePicoProcess @ 0x1408CA620 (PspCreatePicoProcess.c)
 *     PspCreatePartitionSystemProcess @ 0x1408CB878 (PspCreatePartitionSystemProcess.c)
 *     VmCreateMemoryProcess @ 0x1408ED160 (VmCreateMemoryProcess.c)
 *     PspInitPhase1 @ 0x1409FE9C4 (PspInitPhase1.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14003B0B0 (SepDeleteAccessState.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     KeKvaShadowingActive @ 0x140139768 (KeKvaShadowingActive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     PspCreateObjectHandle @ 0x1405E95CC (PspCreateObjectHandle.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     PspGetMemoryPartitionContext @ 0x1406183C0 (PspGetMemoryPartitionContext.c)
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 *     PsAssignProcessToJobObject @ 0x140696380 (PsAssignProcessToJobObject.c)
 *     PsTerminateProcess @ 0x1406E7FD0 (PsTerminateProcess.c)
 *     DbgkCreateMinimalProcess @ 0x140769730 (DbgkCreateMinimalProcess.c)
 *     PspSetMinimalProcessName @ 0x140769798 (PspSetMinimalProcessName.c)
 */

__int64 __fastcall PsCreateMinimalProcess(
        PEPROCESS Process,
        __int64 a2,
        __int64 a3,
        char a4,
        void *a5,
        int a6,
        char a7,
        __int64 a8,
        PVOID a9,
        _QWORD *a10)
{
  PVOID v11; // r15
  ULONG_PTR v13; // rsi
  char v14; // bl
  signed int MemoryPartitionContext; // r14d
  PVOID v16; // r13
  signed __int8 v17; // cf
  char v18; // al
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-80h] BYREF
  PVOID v21; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h]
  PVOID v23; // [rsp+98h] [rbp-68h] BYREF
  __int64 v24; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  _QWORD *v27; // [rsp+B8h] [rbp-48h]
  _BYTE AccessState[400]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v29[48]; // [rsp+250h] [rbp+150h] BYREF
  int v30; // [rsp+308h] [rbp+208h]

  v11 = a9;
  v24 = 0LL;
  v25 = a2;
  v26 = a3;
  Object = a5;
  v21 = a9;
  v27 = a10;
  memset(v29, 0, sizeof(v29));
  memset(AccessState, 0, sizeof(AccessState));
  v23 = 0LL;
  v13 = 0LL;
  BugCheckParameter1 = 0LL;
  if ( !a5 )
    Object = PsReferencePrimaryToken(Process);
  v14 = a5 != 0LL;
  v30 = a6 | 0x800;
  MemoryPartitionContext = PspGetMemoryPartitionContext((__int64)Process, v30, (__int64)&v21, a9 != 0LL, &v23);
  if ( MemoryPartitionContext < 0 )
  {
    v16 = Object;
  }
  else
  {
    v16 = Object;
    MemoryPartitionContext = PspAllocateProcess(
                               (__int64)Process,
                               0,
                               0LL,
                               a4,
                               0,
                               0,
                               0LL,
                               Object,
                               v30,
                               a7,
                               0LL,
                               a5 != 0LL,
                               v23,
                               (__int64)&v24,
                               (PVOID *)&BugCheckParameter1);
    if ( MemoryPartitionContext >= 0 )
    {
      v13 = BugCheckParameter1;
      if ( a8 )
        *(_QWORD *)(BugCheckParameter1 + 1856) = a8;
      if ( (*(_DWORD *)(v13 + 1788) & 1) != 0 && !*(_QWORD *)(v13 + 1856) && (unsigned int)KeKvaShadowingActive() )
      {
        *(_BYTE *)(v13 + 648) = 1;
        v17 = _interlockedbittestandset((volatile signed __int32 *)(v13 + 1788), 0xEu);
        v13 = BugCheckParameter1;
        if ( !v17 )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v29);
          if ( (PEPROCESS)v13 != PsInitialSystemProcess )
            MiDeleteProcessShadow(v13, 1);
          KiUnstackDetachProcess((struct _KTHREAD *)v29, 0);
        }
        v11 = v21;
      }
      if ( v25 )
        PspSetMinimalProcessName(v13, v25);
      v18 = 1;
      if ( (_DWORD)v24 )
        v18 = 3;
      MemoryPartitionContext = PspInsertProcess(
                                 (char *)v13,
                                 Process,
                                 0x2000000,
                                 v30,
                                 0LL,
                                 v18,
                                 v26,
                                 (PACCESS_STATE)AccessState);
      if ( MemoryPartitionContext < 0 )
      {
        PspRundownSingleProcess(v13, 0);
      }
      else
      {
        v14 |= 4u;
        if ( !v11 || (MemoryPartitionContext = PsAssignProcessToJobObject(v11, v13, 0LL), MemoryPartitionContext >= 0) )
        {
          DbgkCreateMinimalProcess(v13);
          *(_DWORD *)&AccessState[384] |= 0x200u;
          v14 |= 2u;
          MemoryPartitionContext = PspCreateObjectHandle(
                                     (void *)v13,
                                     (__int64)AccessState,
                                     (struct _OBJECT_TYPE *)PsProcessType);
          if ( MemoryPartitionContext >= 0 )
          {
            v14 &= ~4u;
            *v27 = *(_QWORD *)&AccessState[392];
          }
        }
      }
    }
  }
  if ( (v14 & 2) != 0 )
  {
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&AccessState[32]);
  }
  if ( v13 )
  {
    if ( (v14 & 4) != 0 )
      PsTerminateProcess(v13, MemoryPartitionContext);
    ObfDereferenceObjectWithTag((PVOID)v13, 0x72437350u);
  }
  if ( v23 )
    ObfDereferenceObjectWithTag(v23, 0x624A7350u);
  if ( (v14 & 1) == 0 )
    ObfDereferenceObject(v16);
  return (unsigned int)MemoryPartitionContext;
}
