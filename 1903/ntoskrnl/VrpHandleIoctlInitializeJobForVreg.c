/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x1408425E8
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140841570 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsIsThreadInSilo @ 0x1400064B4 (PsIsThreadInSilo.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlUnicodeStringCopy @ 0x140092AB0 (RtlUnicodeStringCopy.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsGetJobSilo @ 0x140307C10 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F0AB0 (ObReferenceObjectByHandleWithTag.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077C23C (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x14077C368 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmSetCallbackObjectContext @ 0x140825930 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x14082F920 (CmGetRootKeyObjectForSilo.c)
 *     VrpIncrementSiloCount @ 0x140841490 (VrpIncrementSiloCount.c)
 *     VrpAllocateKeyContext @ 0x140841C28 (VrpAllocateKeyContext.c)
 *     VrpDereferenceJobContext @ 0x140841CEC (VrpDereferenceJobContext.c)
 *     VrpFreeKeyContext @ 0x140841D50 (VrpFreeKeyContext.c)
 *     VrpLockJobContextExclusive @ 0x140841D88 (VrpLockJobContextExclusive.c)
 *     VrpUnlockJobContextExclusive @ 0x140841E38 (VrpUnlockJobContextExclusive.c)
 *     VrpAddNamespaceNodeToList @ 0x1408433E4 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1408436FC (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x140843A54 (VrpDestroyNamespaceNode.c)
 *     VrpInitializeNamespaceNodeList @ 0x140843E98 (VrpInitializeNamespaceNodeList.c)
 *     PsInsertSiloContext @ 0x1408C4B20 (PsInsertSiloContext.c)
 *     PsMakeSiloContextPermanent @ 0x1408C4BD0 (PsMakeSiloContextPermanent.c)
 *     PsRemoveSiloContext @ 0x1408C4C70 (PsRemoveSiloContext.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        _OWORD *a5,
        PVOID Object)
{
  int v6; // r13d
  UNICODE_STRING *v7; // rsi
  PVOID RootKeyObjectForSilo; // r12
  int JobSilo; // ebx
  _QWORD *v10; // rdi
  int v11; // eax
  __int64 v12; // r15
  char IsThreadInSilo; // al
  PVOID v14; // rcx
  UNICODE_STRING *KeyContext; // rax
  UNICODE_STRING v16; // xmm0
  wchar_t *PoolWithTag; // rax
  __int64 v19; // [rsp+58h] [rbp-10h] BYREF
  char v21; // [rsp+B8h] [rbp+50h]
  __int64 v23; // [rsp+C8h] [rbp+60h] BYREF

  Object = 0LL;
  v6 = 0;
  a5 = 0LL;
  v7 = 0LL;
  RootKeyObjectForSilo = 0LL;
  v23 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObCreateObject(0, (_DWORD *)VrpJobContextType, 0, 1u, 0, 96, 0, 0, &a5);
  if ( JobSilo < 0 )
  {
    v10 = a5;
    goto LABEL_30;
  }
  v10 = a5;
  memset(a5, 0, 0x60uLL);
  v10[2] = 0LL;
  JobSilo = VrpInitializeNamespaceNodeList(v10);
  if ( JobSilo < 0 )
    goto LABEL_30;
  JobSilo = VrpIncrementSiloCount();
  if ( JobSilo < 0 )
    goto LABEL_30;
  *((_DWORD *)v10 + 22) = 1;
  VrpLockJobContextExclusive((__int64)v10);
  v21 = 1;
  v11 = VrpCreateNamespaceNode(v10, &CmRegistryContainersName, 0LL, &CmRegistryContainersName, 0, &v23);
  v12 = v23;
  JobSilo = v11;
  if ( v11 < 0 )
    goto LABEL_22;
  JobSilo = VrpAddNamespaceNodeToList(v10, v23);
  if ( JobSilo < 0 )
    goto LABEL_22;
  v23 = 0LL;
  VrpUnlockJobContextExclusive((__int64)v10);
  v21 = 0;
  JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo < 0 )
    goto LABEL_30;
  JobSilo = PsGetJobSilo((__int64)Object);
  if ( JobSilo < 0 )
    goto LABEL_30;
  IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL);
  v10 = a5;
  if ( !IsThreadInSilo )
  {
    v14 = a5;
    *a5 = MEMORY[0x4C8];
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(v14);
    v7 = KeyContext;
    if ( !KeyContext
      || (v16 = (UNICODE_STRING)MEMORY[0x4C8],
          v6 = 1,
          KeyContext[2].Length = 1,
          *KeyContext = v16,
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, CmRegistryRootName.Length, 0x67655256u),
          (v7[1].Buffer = PoolWithTag) == 0LL) )
    {
      JobSilo = -1073741670;
      goto LABEL_30;
    }
    v7[1].Length = 0;
    v7[1].MaximumLength = CmRegistryRootName.Length;
    RtlUnicodeStringCopy(v7 + 1, &CmRegistryRootName);
    JobSilo = CmpGetOrCreateContextForSiloNoRef(0LL, &v19);
    if ( JobSilo >= 0 )
    {
      JobSilo = CmpStartSiloRegistryNamespace(v19);
      if ( JobSilo >= 0 )
        JobSilo = 0;
    }
    if ( JobSilo < 0 )
      goto LABEL_30;
    JobSilo = PsInsertSiloContext(0LL, (unsigned int)VrpSiloContextSlot, v10);
    if ( JobSilo < 0 )
      goto LABEL_30;
    RootKeyObjectForSilo = CmGetRootKeyObjectForSilo(0LL);
    JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v7, 0LL);
    if ( JobSilo < 0 )
    {
LABEL_28:
      PsRemoveSiloContext(0LL, (unsigned int)VrpSiloContextSlot, 0LL);
      goto LABEL_30;
    }
    PsMakeSiloContextPermanent(0LL, (unsigned int)VrpSiloContextSlot);
    JobSilo = 0;
    v12 = v23;
LABEL_22:
    if ( v12 )
      VrpDestroyNamespaceNode(v10);
    if ( v21 )
      VrpUnlockJobContextExclusive((__int64)v10);
    v7 = 0LL;
    if ( JobSilo >= 0 || !v6 )
      goto LABEL_30;
    goto LABEL_28;
  }
  JobSilo = -1073741811;
LABEL_30:
  if ( v10 )
    VrpDereferenceJobContext(v10);
  if ( RootKeyObjectForSilo )
    ObfDereferenceObject(RootKeyObjectForSilo);
  if ( v7 )
    VrpFreeKeyContext(v7);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
