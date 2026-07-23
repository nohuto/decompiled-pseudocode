/*
 * XREFs of NtLoadEnclaveData @ 0x1408956C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140050770 (MiObtainReferencedVadEx.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x140119480 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x140678CC0 (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiDereferenceEnclaveModule @ 0x1408940FC (MiDereferenceEnclaveModule.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408943C0 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 */

NTSTATUS __cdecl NtLoadEnclaveData(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        ULONG Protect,
        PVOID PageInformation,
        ULONG PageInformationLength,
        PSIZE_T NumberOfBytesWritten,
        PULONG EnclaveError)
{
  __int64 v9; // r9
  struct _MDL *v10; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  NTSTATUS DataIntoVsmEnclave; // edi
  SIZE_T v15; // rax
  struct _MDL *PoolWithTag; // rax
  struct _KPROCESS *Process; // rbx
  PVOID v18; // r15
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rdi
  PACCESS_TOKEN v21; // rbx
  int v22; // r15d
  char *v23; // rcx
  __int64 v24; // rbx
  PSIZE_T v25; // r12
  ULONG_PTR v26; // rbx
  volatile signed __int32 *v27; // rbx
  __int64 Tag; // [rsp+20h] [rbp-178h]
  SIZE_T v30; // [rsp+28h] [rbp-170h]
  KPROCESSOR_MODE AccessMode; // [rsp+60h] [rbp-138h]
  NTSTATUS v32; // [rsp+64h] [rbp-134h] BYREF
  int v33; // [rsp+68h] [rbp-130h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-128h]
  PSIZE_T v35; // [rsp+78h] [rbp-120h]
  char *v36; // [rsp+80h] [rbp-118h]
  PVOID Object; // [rsp+88h] [rbp-110h] BYREF
  __int64 v38; // [rsp+90h] [rbp-108h] BYREF
  __int64 v39; // [rsp+98h] [rbp-100h]
  PMDL MemoryDescriptorList; // [rsp+A0h] [rbp-F8h]
  __int64 v41; // [rsp+A8h] [rbp-F0h]
  __int64 v42[5]; // [rsp+B0h] [rbp-E8h] BYREF
  void *Src; // [rsp+D8h] [rbp-C0h]
  _QWORD v44[5]; // [rsp+E0h] [rbp-B8h] BYREF
  _BYTE v45[48]; // [rsp+108h] [rbp-90h] BYREF
  _DWORD v46[8]; // [rsp+138h] [rbp-60h] BYREF

  v41 = BufferSize;
  Src = Buffer;
  v39 = (__int64)BaseAddress;
  BugCheckParameter1 = (ULONG_PTR)ProcessHandle;
  v42[3] = (__int64)ProcessHandle;
  v35 = NumberOfBytesWritten;
  v42[4] = (__int64)NumberOfBytesWritten;
  v42[1] = (__int64)EnclaveError;
  memset(v45, 0, sizeof(v45));
  v42[0] = 0LL;
  LODWORD(v38) = 0;
  Object = 0LL;
  v10 = 0LL;
  v44[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( EnclaveError )
    {
      v12 = (__int64)EnclaveError;
      if ( (unsigned __int64)EnclaveError >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
    if ( NumberOfBytesWritten )
    {
      v13 = (__int64)NumberOfBytesWritten;
      if ( (unsigned __int64)NumberOfBytesWritten >= 0x7FFFFFFF0000LL )
        v13 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v13 = *(_QWORD *)v13;
    }
  }
  if ( PageInformationLength )
  {
    if ( PageInformationLength > 0xFFFF )
    {
      DataIntoVsmEnclave = -1073741820;
LABEL_13:
      v32 = DataIntoVsmEnclave;
LABEL_45:
      v22 = 0;
      goto LABEL_46;
    }
    if ( PreviousMode == 1
      && ((unsigned __int64)PageInformation + PageInformationLength > 0x7FFFFFFF0000LL
       || (char *)PageInformation + PageInformationLength < PageInformation) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( PageInformationLength > 0x20 )
    {
      v15 = MmSizeOfMdl(PageInformation, PageInformationLength);
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x6C646D4Du);
      v10 = PoolWithTag;
      MemoryDescriptorList = PoolWithTag;
      if ( !PoolWithTag )
      {
        DataIntoVsmEnclave = -1073741670;
        goto LABEL_13;
      }
      PoolWithTag->Next = 0LL;
      PoolWithTag->Size = 8
                        * (((((unsigned __int16)PageInformation & 0xFFF) + (unsigned __int64)PageInformationLength
                                                                         + 4095) >> 12)
                         + 6);
      PoolWithTag->MdlFlags = 0;
      PoolWithTag->StartVa = (PVOID)((unsigned __int64)PageInformation & 0xFFFFFFFFFFFFF000uLL);
      PoolWithTag->ByteOffset = (unsigned __int16)PageInformation & 0xFFF;
      PoolWithTag->ByteCount = PageInformationLength;
      MmProbeAndLockPages(PoolWithTag, PreviousMode, IoReadAccess);
    }
    else
    {
      memmove(v46, PageInformation, PageInformationLength);
    }
  }
  if ( (v39 & 0xFFF) != 0 )
  {
    DataIntoVsmEnclave = -1073741584;
    goto LABEL_13;
  }
  if ( (v41 & 0xFFF) != 0 )
  {
    DataIntoVsmEnclave = -1073741582;
    goto LABEL_13;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( BugCheckParameter1 == -1LL )
  {
    Object = Process;
  }
  else
  {
    DataIntoVsmEnclave = ObpReferenceObjectByHandleWithTag(
                           BugCheckParameter1,
                           8,
                           (__int64)PsProcessType,
                           PreviousMode,
                           0x6D566D4Du,
                           &Object,
                           0LL,
                           0LL);
    v32 = DataIntoVsmEnclave;
    if ( DataIntoVsmEnclave < 0 )
      goto LABEL_45;
  }
  v18 = Object;
  KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v45);
  v33 = 1;
  v19 = MiObtainReferencedVadEx(v39, 0, &v32);
  v20 = v19;
  if ( !v19 || (*(_DWORD *)(v19 + 48) & 0x3100000) != 0x2100000 )
  {
    DataIntoVsmEnclave = -1073741800;
    v32 = -1073741800;
    goto LABEL_35;
  }
  v36 = (char *)v19;
  if ( (*(_DWORD *)(v19 + 64) & 1) != 0 )
  {
    if ( PageInformationLength )
    {
      DataIntoVsmEnclave = -1073741820;
    }
    else
    {
      v24 = v41;
      if ( v41 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v45, 0);
        v22 = 0;
        DataIntoVsmEnclave = MiCopyPagesIntoEnclave(
                               (_KPROCESS *)Object,
                               v20,
                               AccessMode,
                               v39,
                               Src,
                               v24,
                               Protect,
                               v42,
                               &v38);
        v32 = DataIntoVsmEnclave;
        v23 = v36;
        goto LABEL_47;
      }
      DataIntoVsmEnclave = -1073741582;
    }
    v32 = DataIntoVsmEnclave;
    v23 = (char *)v19;
LABEL_37:
    v22 = v33;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v19 + 72) + 76LL) )
  {
    DataIntoVsmEnclave = MiLoadDataIntoVsmEnclave(
                           (__int64)Object,
                           (ULONG_PTR)Process,
                           v19,
                           AccessMode,
                           v39,
                           PageInformationLength,
                           v46,
                           (unsigned __int64)Src,
                           v41,
                           Protect,
                           v42);
    v32 = DataIntoVsmEnclave;
    v23 = v36;
    goto LABEL_37;
  }
  v21 = PsReferencePrimaryToken(Process);
  LODWORD(v30) = PageInformationLength;
  DataIntoVsmEnclave = MiLoadSectionIntoVsmEnclave((__int64)v18, v20, AccessMode, (__int64)v21, v39, v30, v46, v10, v44);
  v32 = DataIntoVsmEnclave;
  ObfDereferenceObject(v21);
LABEL_35:
  v22 = v33;
LABEL_46:
  v23 = 0LL;
LABEL_47:
  v25 = v35;
  v26 = BugCheckParameter1;
  if ( v23 )
    MiUnlockAndDereferenceVad(v23);
  if ( v22 )
    KiUnstackDetachProcess((struct _KTHREAD *)v45, 0);
  if ( Object && v26 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( v10 )
  {
    if ( (v10->MdlFlags & 2) != 0 )
      MmUnlockPages(v10);
    ExFreePoolWithTag(v10, 0);
  }
  v27 = (volatile signed __int32 *)v44[0];
  if ( v44[0] )
  {
    DbgkMapViewOfSection(
      (_KPROCESS *)Object,
      0LL,
      *(void **)(v44[0] + 16LL),
      v9,
      Tag,
      *(_DWORD *)(v44[0] + 36LL),
      *(_DWORD *)(v44[0] + 40LL));
    MiDereferenceEnclaveModule(v27);
  }
  if ( v25 )
    *v25 = v42[0];
  if ( EnclaveError )
    *EnclaveError = v38;
  return DataIntoVsmEnclave;
}
