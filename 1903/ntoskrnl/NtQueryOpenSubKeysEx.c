/*
 * XREFs of NtQueryOpenSubKeysEx @ 0x140824470
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008BCF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     CmpReleaseShutdownRundown @ 0x1405FDF00 (CmpReleaseShutdownRundown.c)
 *     CmpCleanupParseContext @ 0x1405FDF30 (CmpCleanupParseContext.c)
 *     CmpAcquireShutdownRundown @ 0x1405FE010 (CmpAcquireShutdownRundown.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     CmpSearchForOpenSubKeys @ 0x14069A650 (CmpSearchForOpenSubKeys.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 */

NTSTATUS __stdcall NtQueryOpenSubKeysEx(
        POBJECT_ATTRIBUTES TargetKey,
        ULONG BufferLength,
        PVOID Buffer,
        PULONG RequiredSize)
{
  SIZE_T v6; // rdi
  NTSTATUS v8; // ebx
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  size_t v13; // rsi
  PVOID TransientPoolWithQuotaTag; // rax
  _QWORD *v15; // rdi
  char *v16; // rdx
  signed __int64 v17; // r10
  unsigned int v18; // r9d
  char v20; // [rsp+40h] [rbp-1D8h]
  char v21; // [rsp+41h] [rbp-1D7h]
  PVOID Object; // [rsp+48h] [rbp-1D0h] BYREF
  size_t Size[6]; // [rsp+50h] [rbp-1C8h] BYREF
  _BYTE v24[48]; // [rsp+80h] [rbp-198h] BYREF
  _QWORD v25[38]; // [rsp+B0h] [rbp-168h] BYREF

  v6 = BufferLength;
  memset(v24, 0, sizeof(v24));
  Object = 0LL;
  memset(v25, 0, 0x128uLL);
  v25[19] = &v25[18];
  v25[18] = &v25[18];
  memset(&v25[27], 0, 0x50uLL);
  memset(Size, 0, sizeof(Size));
  v20 = 0;
  v21 = CmpAcquireShutdownRundown();
  if ( !v21 )
  {
    v8 = -1073741431;
    goto LABEL_22;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v8 = -1073741727;
    goto LABEL_22;
  }
  if ( (unsigned int)v6 < 8 )
  {
    v8 = -1073741789;
    goto LABEL_22;
  }
  if ( (v6 & 1) != 0 )
    goto LABEL_8;
  if ( PreviousMode == 1 )
  {
    v11 = (__int64)RequiredSize;
    if ( (unsigned __int64)RequiredSize >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    ProbeForWrite(Buffer, v6, 4u);
  }
  v8 = ObReferenceObjectByNameEx(
         (__int64)TargetKey,
         v10,
         0x20019u,
         (__int64)CmKeyObjectType,
         PreviousMode,
         (__int64)v25,
         &Object);
  if ( v8 >= 0 )
  {
    LODWORD(Size[0]) = v6;
    v13 = v6;
    TransientPoolWithQuotaTag = CmpAllocateTransientPoolWithQuotaTag(v12, v6, 0x31384D43u);
    Size[1] = (size_t)TransientPoolWithQuotaTag;
    if ( TransientPoolWithQuotaTag )
    {
      memset(TransientPoolWithQuotaTag, 0, LODWORD(Size[0]));
      CmpLockRegistryExclusive();
      v20 = 1;
      v15 = Object;
      v8 = CmpPerformKeyBodyDeletionCheck((__int64)Object, 0LL);
      if ( v8 >= 0 )
      {
        if ( (*(_DWORD *)(v15[1] + 184LL) & 0x40000) == 0 )
        {
LABEL_8:
          v8 = -1073741811;
          goto LABEL_22;
        }
        *(_DWORD *)Size[1] = 0;
        Size[2] = 8LL;
        LODWORD(Size[3]) = 8;
        Size[5] = v13 + Size[1];
        Size[4] = (size_t)v15;
        CmpAttachToRegistryProcess((__int64)v24);
        CmpSearchForOpenSubKeys(v15[1], 0, (__int64)Size);
        CmpDetachFromRegistryProcess((struct _KTHREAD *)v24);
        v8 = HIDWORD(Size[2]);
        CmpUnlockRegistry();
        v20 = 0;
        *RequiredSize = Size[2];
        v16 = (char *)Size[1];
        *(_DWORD *)Buffer = *(_DWORD *)Size[1];
        if ( v8 >= 0 )
        {
          v17 = v16 - (_BYTE *)Buffer;
          v18 = 0;
          if ( *(_DWORD *)v16 )
          {
            do
            {
              *(_QWORD *)&v16[24 * ++v18] -= v17;
              v16 = (char *)Size[1];
            }
            while ( v18 < *(_DWORD *)Size[1] );
          }
          memmove(Buffer, v16, v13);
          v8 = 0;
        }
      }
    }
    else
    {
      v8 = -1073741670;
    }
  }
LABEL_22:
  if ( v20 )
    CmpUnlockRegistry();
  CmpCleanupParseContext((__int64)v25, 0);
  if ( v21 )
    CmpReleaseShutdownRundown();
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Size[1] )
    CmSiFreeMemory((PPRIVILEGE_SET)Size[1]);
  return v8;
}
