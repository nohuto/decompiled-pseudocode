/*
 * XREFs of ExInitializeLeapSecondData @ 0x1407351B0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmSizeOfMdl @ 0x14011A7B0 (MmSizeOfMdl.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MmMapViewInSystemSpace @ 0x1405A33A0 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 */

__int64 ExInitializeLeapSecondData()
{
  NTSTATUS v0; // ebx
  PVOID v1; // r12
  size_t v2; // r15
  SIZE_T v3; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v5; // rbx
  __int16 v6; // dx
  PVOID v7; // rsi
  PVOID Section; // [rsp+40h] [rbp-38h] BYREF
  PVOID MappedBase; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+10h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp+18h] BYREF
  LARGE_INTEGER v13; // [rsp+98h] [rbp+20h] BYREF

  v13.QuadPart = 4096LL;
  v0 = ZwCreateSection(&Handle, 6u, 0LL, &v13, 4u, 0x8000000u, 0LL);
  if ( v0 >= 0 )
  {
    v0 = ObReferenceObjectByHandle(Handle, 6u, MmSectionObjectType, 0, &Section, 0LL);
    if ( v0 >= 0 )
    {
      MappedBase = 0LL;
      ViewSize = 0LL;
      v1 = Section;
      v0 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
      if ( v0 >= 0 )
      {
        v2 = ViewSize;
        v3 = MmSizeOfMdl(MappedBase, ViewSize);
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x6453704Cu);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_11;
        PoolWithTag->Next = 0LL;
        v6 = (__int16)MappedBase;
        PoolWithTag->Size = 8 * (((((unsigned __int16)MappedBase & 0xFFF) + v2 + 4095) >> 12) + 6);
        PoolWithTag->MdlFlags = 0;
        PoolWithTag->StartVa = (PVOID)((unsigned __int64)MappedBase & 0xFFFFFFFFFFFFF000uLL);
        PoolWithTag->ByteOffset = v6 & 0xFFF;
        PoolWithTag->ByteCount = v2;
        MmProbeAndLockPages(PoolWithTag, 0, IoWriteAccess);
        v7 = MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v7 )
        {
          v0 = MmUnmapViewInSystemSpace(MappedBase);
          if ( v0 >= 0 )
          {
            ExpLeapSecondDataLock = 0LL;
            ExLeapSecondDataSectionPointer = (__int64)v1;
            memset(v7, 0, v2);
            ExpReadLeapSecondData(v7, 0LL);
            ExLeapSecondData = v7;
          }
        }
        else
        {
LABEL_11:
          v0 = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
