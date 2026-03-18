/*
 * XREFs of ViMapDoubleBuffer @ 0x14096C9A8
 * Callers:
 *     VfBuildScatterGatherList @ 0x140968B50 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140969BD0 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x14096A320 (VfMapTransfer.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KeFlushIoBuffers @ 0x14011CE50 (KeFlushIoBuffers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x14096B210 (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, PMDL MemoryDescriptorList, ULONG_PTR a3, unsigned int a4, char a5)
{
  unsigned int v5; // esi
  PMDL v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  KIRQL v13; // r14
  PVOID MappedSystemVa; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v16; // rbx
  ULONG_PTR v17; // rbx
  ULONG_PTR v18; // rdx
  __int64 v19; // rax
  char *v20; // r9
  PMDL v21; // r15
  unsigned int v22; // r14d
  struct _MDL *Next; // rax
  __int64 v24; // rbx
  const char *v25; // rdx
  CHAR *v26; // rbp
  unsigned int v27; // ebp
  bool v28; // cf
  ULONG ByteCount; // ecx
  PVOID v30; // rbx
  KIRQL v31; // al
  struct _KPRCB *v32; // rcx
  ULONG_PTR v33; // rcx
  PMDL BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v36; // [rsp+30h] [rbp-58h]
  ULONG v37; // [rsp+34h] [rbp-54h] BYREF
  void *Src; // [rsp+38h] [rbp-50h]
  void *v39; // [rsp+40h] [rbp-48h]
  char *v40; // [rsp+48h] [rbp-40h]
  unsigned __int64 v41; // [rsp+50h] [rbp-38h]
  KIRQL v42; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_14042B8F0, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_14042B8F0;
    v9 = 0LL;
    BugCheckOnFailure = 0LL;
    v10 = a1;
    v11 = 33LL;
LABEL_3:
    VfReportIssueWithOptions(0xE6u, v11, v10, (ULONG_PTR)v9, (ULONG_PTR)BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( (PVOID)a3 < (char *)MemoryDescriptorList->StartVa + MemoryDescriptorList->ByteOffset )
  {
    ViHalPreprocessOptions(
      &dword_14042B8F4,
      "Virtual address %p is before the first MDL %p.",
      268435487LL,
      1LL,
      a3,
      (__int64)MemoryDescriptorList);
    Priority = (CHAR *)&dword_14042B8F4;
    v9 = (PMDL)a3;
    BugCheckOnFailure = MemoryDescriptorList;
    v10 = 1LL;
LABEL_10:
    v11 = 31LL;
    goto LABEL_3;
  }
  if ( (unsigned int)(a3 - MemoryDescriptorList->ByteOffset - LODWORD(MemoryDescriptorList->StartVa)) >= MemoryDescriptorList->ByteCount )
  {
    ViHalPreprocessOptions(
      &dword_14042B8E8,
      "Virtual address %p is after the first MDL %p.",
      268435487LL,
      2LL,
      a3,
      (__int64)MemoryDescriptorList);
    VfReportIssueWithOptions(0xE6u, 0x1FuLL, 2uLL, a3, (ULONG_PTR)MemoryDescriptorList, &dword_14042B8E8);
    return 0LL;
  }
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v13);
  if ( !MappedSystemVa )
    return 0LL;
  v16 = a3 - MemoryDescriptorList->ByteOffset - (unsigned __int64)MemoryDescriptorList->StartVa;
  v36 = 1;
  v41 = MemoryDescriptorList->ByteCount - v16;
  v17 = (ULONG_PTR)MappedSystemVa + v16;
  Src = (void *)v17;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v17, v5, a5, &v37) )
    return 0LL;
  v18 = (v37 << 12) + (v17 & 0xFFF);
  v19 = *(_QWORD *)(a1 + 72);
  v20 = (char *)(v18 + *(_QWORD *)(a1 + 64));
  v40 = v20;
  if ( !v19 )
    return 0LL;
  v21 = MemoryDescriptorList;
  v39 = (void *)(v18 + v19);
  v22 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v21 )
        return 0LL;
      Next = v21->Next;
      if ( v36 )
      {
        v36 = 0;
        if ( !Next && v22 > v41 )
        {
          v24 = v5;
          if ( (((v5 - 1) ^ (v41 + v5 - (unsigned __int64)v22)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v25 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v26 = (CHAR *)&unk_14042B8EC;
LABEL_31:
            ViHalPreprocessOptions(v26, v25, 268435487LL, 3LL, (__int64)MemoryDescriptorList, v24);
            Priority = v26;
            v9 = MemoryDescriptorList;
            BugCheckOnFailure = (PMDL)v24;
            v10 = 3LL;
            goto LABEL_10;
          }
LABEL_36:
          v27 = v22;
          goto LABEL_40;
        }
        v27 = v41;
        v28 = v22 < (unsigned int)v41;
      }
      else
      {
        if ( !Next )
        {
          ByteCount = v21->ByteCount;
          if ( v22 > ByteCount )
          {
            if ( (((v5 - 1) ^ (v5 + ByteCount - v22)) & 0xFFFFF000) != 0 )
            {
              v24 = v5;
              v25 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v26 = (CHAR *)&unk_14042B8E4;
              goto LABEL_31;
            }
            goto LABEL_36;
          }
        }
        v27 = v21->ByteCount;
        v28 = v22 < v27;
      }
      if ( v28 )
        v27 = v22;
LABEL_40:
      memmove(v20, Src, v27);
      v40 += v27;
      memmove(v39, Src, v27);
      v39 = (char *)v39 + v27;
      v21 = v21->Next;
      if ( v21 )
      {
        v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
        if ( (v21->MdlFlags & 5) != 0 )
          v30 = v21->MappedSystemVa;
        else
          v30 = MmMapLockedPagesSpecifyCache(v21, 0, MmCached, 0LL, 0, 0x40000010u);
        Src = v30;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
        v31 = v42;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v42 < 2u )
        {
          v32 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v32->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v32);
          v31 = v42;
        }
        __writecr8(v31);
        if ( !v30 )
          return 0LL;
      }
      v22 -= v27;
      if ( !v22 )
        break;
      v20 = v40;
    }
  }
  v33 = *(_QWORD *)(a1 + 56);
  if ( v33 )
    KeFlushIoBuffers(v33, a5 == 0, 1);
  return v5;
}
