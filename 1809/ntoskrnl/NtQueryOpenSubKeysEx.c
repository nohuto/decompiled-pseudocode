/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x1407EAA10
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpCleanupParseContext @ 0x1405B6FC4 (CmpCleanupParseContext.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpSearchForOpenSubKeys @ 0x140692F60 (CmpSearchForOpenSubKeys.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN v9; // si
  NTSTATUS v10; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  size_t v14; // r14
  PVOID TransientPoolWithQuotaTag; // rax
  _QWORD *v16; // rdi
  char *v17; // rdx
  signed __int64 v18; // r10
  unsigned int v19; // r9d
  char v21; // [rsp+41h] [rbp-1F7h]
  PVOID Object; // [rsp+48h] [rbp-1F0h] BYREF
  size_t Size[6]; // [rsp+50h] [rbp-1E8h] BYREF
  PVOID v24[2]; // [rsp+80h] [rbp-1B8h] BYREF
  _BYTE v25[48]; // [rsp+90h] [rbp-1A8h] BYREF
  _QWORD v26[38]; // [rsp+C0h] [rbp-178h] BYREF

  v6 = BufferLength;
  Object = 0LL;
  memset(v26, 0, 0x128uLL);
  v26[19] = &v26[18];
  v26[18] = &v26[18];
  memset(&v26[27], 0, 0x50uLL);
  memset(Size, 0, sizeof(Size));
  v21 = 0;
  CmpInitializeThreadInfo(v24);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( !v9 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v10 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v10 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v10 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v12 = (__int64)RequiredSize;
    if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v10 = ObReferenceObjectByNameEx(
          (__int64)TargetKey,
          0LL,
          0x20019u,
          (__int64)CmKeyObjectType,
          PreviousMode,
          (__int64)v26,
          &Object);
  if ( v10 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v14 = v6;
    TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v13, v6, 0x31384D43u);
    Size[1] = (size_t)TransientPoolWithQuotaTag;
    if ( TransientPoolWithQuotaTag )
    {
      memset(TransientPoolWithQuotaTag, 0, LODWORD(Size[0]));
      CmpLockRegistryExclusive();
      v21 = 1;
      v16 = Object;
      v10 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
      if ( v10 >= 0 )
      {
        if ( (*(_DWORD *)(v16[1] + 176LL) & 0x40000) == 0 )
        {
LABEL_8:
          v10 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Size[1] = 0;
        Size[2] = 8LL;
        LODWORD(Size[3]) = 8;
        Size[5] = v14 + Size[1];
        Size[4] = (size_t)v16;
        CmpAttachToRegistryProcess((__int64)v25);
        CmpSearchForOpenSubKeys(v16[1], 0, (__int64)Size);
        KiUnstackDetachProcess((__int64)v25, 0LL);
        v10 = HIDWORD(Size[2]);
        CmpUnlockRegistry();
        v21 = 0;
        *RequiredSize = Size[2];
        v17 = (char *)Size[1];
        *(_DWORD *)Buffer = *(_DWORD *)Size[1];
        if ( v10 >= 0 )
        {
          v18 = v17 - (_BYTE *)Buffer;
          v19 = 0;
          if ( *(_DWORD *)v17 )
          {
            do
            {
              *(_QWORD *)&v17[24 * ++v19] -= v18;
              v17 = (char *)Size[1];
            }
            while ( v19 < *(_DWORD *)Size[1] );
          }
          memmove(Buffer, v17, v14);
          v10 = 0;
        }
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
LABEL_22:
  if ( v21 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v26, 0);
  if ( v9 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  CmCleanupThreadInfo(v24);
  return v10;
}
