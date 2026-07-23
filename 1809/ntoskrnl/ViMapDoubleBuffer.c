/*
 * XREFs of ViMapDoubleBuffer @ 0x14092F13C
 * Callers:
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x14092CAB0 (VfMapTransfer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeFlushIoBuffers @ 0x14011CBB0 (KeFlushIoBuffers.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x14092D9A0 (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, PMDL MemoryDescriptorList, ULONG_PTR a3, unsigned int a4, char a5)
{
  unsigned int v5; // esi
  PMDL v9; // r9
  ULONG_PTR v10; // r8
  ULONG_PTR v11; // rdx
  __int64 ByteOffset; // rcx
  PVOID StartVa; // rdx
  KIRQL v15; // r14
  PVOID MappedSystemVa; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v18; // rbx
  ULONG_PTR v19; // rbx
  ULONG_PTR v20; // rdx
  __int64 v21; // rax
  char *v22; // r9
  PMDL v23; // r15
  unsigned int v24; // r14d
  struct _MDL *Next; // rax
  __int64 v26; // rbx
  const char *v27; // rdx
  CHAR *v28; // rbp
  unsigned int v29; // ebp
  bool v30; // cf
  ULONG ByteCount; // ecx
  PVOID v32; // rbx
  KIRQL v33; // al
  struct _KPRCB *v34; // rcx
  ULONG_PTR v35; // rcx
  PMDL BugCheckOnFailure; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v38; // [rsp+30h] [rbp-58h]
  ULONG v39; // [rsp+34h] [rbp-54h] BYREF
  void *Src; // [rsp+38h] [rbp-50h]
  void *v41; // [rsp+40h] [rbp-48h]
  char *v42; // [rsp+48h] [rbp-40h]
  unsigned __int64 v43; // [rsp+50h] [rbp-38h]
  KIRQL v44; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  if ( !a4 )
  {
    ViHalPreprocessOptions(byte_1404064D0, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = byte_1404064D0;
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
  ByteOffset = MemoryDescriptorList->ByteOffset;
  StartVa = MemoryDescriptorList->StartVa;
  if ( a3 < (unsigned __int64)StartVa + ByteOffset )
  {
    ViHalPreprocessOptions(
      &dword_1404064D4,
      "Virtual address %p is before the first MDL %p.",
      268435487LL,
      1LL,
      a3,
      (__int64)MemoryDescriptorList);
    Priority = (CHAR *)&dword_1404064D4;
    v9 = (PMDL)a3;
    BugCheckOnFailure = MemoryDescriptorList;
    v10 = 1LL;
LABEL_10:
    v11 = 31LL;
    goto LABEL_3;
  }
  if ( (unsigned int)(a3 - ByteOffset - (_DWORD)StartVa) >= MemoryDescriptorList->ByteCount )
  {
    ViHalPreprocessOptions(
      &dword_1404064C8,
      "Virtual address %p is after the first MDL %p.",
      268435487LL,
      2LL,
      a3,
      (__int64)MemoryDescriptorList);
    VfReportIssueWithOptions(0xE6u, 0x1FuLL, 2uLL, a3, (ULONG_PTR)MemoryDescriptorList, &dword_1404064C8);
    return 0LL;
  }
  v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
    MappedSystemVa = MemoryDescriptorList->MappedSystemVa;
  else
    MappedSystemVa = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000010u);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v15);
  if ( !MappedSystemVa )
    return 0LL;
  v18 = a3 - MemoryDescriptorList->ByteOffset - (unsigned __int64)MemoryDescriptorList->StartVa;
  v38 = 1;
  v43 = MemoryDescriptorList->ByteCount - v18;
  v19 = (ULONG_PTR)MappedSystemVa + v18;
  Src = (void *)v19;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v19, v5, a5, &v39) )
    return 0LL;
  v20 = (v39 << 12) + (v19 & 0xFFF);
  v21 = *(_QWORD *)(a1 + 72);
  v22 = (char *)(v20 + *(_QWORD *)(a1 + 64));
  v42 = v22;
  if ( !v21 )
    return 0LL;
  v23 = MemoryDescriptorList;
  v41 = (void *)(v20 + v21);
  v24 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v23 )
        return 0LL;
      Next = v23->Next;
      if ( v38 )
      {
        v38 = 0;
        if ( !Next && v24 > v43 )
        {
          v26 = v5;
          if ( (((v5 - 1) ^ (v43 + v5 - (unsigned __int64)v24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v27 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v28 = (CHAR *)&unk_1404064CC;
LABEL_31:
            ViHalPreprocessOptions(v28, v27, 268435487LL, 3LL, (__int64)MemoryDescriptorList, v26);
            Priority = v28;
            v9 = MemoryDescriptorList;
            BugCheckOnFailure = (PMDL)v26;
            v10 = 3LL;
            goto LABEL_10;
          }
LABEL_36:
          v29 = v24;
          goto LABEL_40;
        }
        v29 = v43;
        v30 = v24 < (unsigned int)v43;
      }
      else
      {
        if ( !Next )
        {
          ByteCount = v23->ByteCount;
          if ( v24 > ByteCount )
          {
            if ( (((v5 - 1) ^ (v5 + ByteCount - v24)) & 0xFFFFF000) != 0 )
            {
              v26 = v5;
              v27 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v28 = (CHAR *)&unk_1404064C4;
              goto LABEL_31;
            }
            goto LABEL_36;
          }
        }
        v29 = v23->ByteCount;
        v30 = v24 < v29;
      }
      if ( v30 )
        v29 = v24;
LABEL_40:
      memmove(v22, Src, v29);
      v42 += v29;
      memmove(v41, Src, v29);
      v41 = (char *)v41 + v29;
      v23 = v23->Next;
      if ( v23 )
      {
        v44 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
        if ( (v23->MdlFlags & 5) != 0 )
          v32 = v23->MappedSystemVa;
        else
          v32 = MmMapLockedPagesSpecifyCache(v23, 0, MmCached, 0LL, 0, 0x40000010u);
        Src = v32;
        KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 80));
        v33 = v44;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v44 < 2u )
        {
          v34 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v34->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v34);
          v33 = v44;
        }
        __writecr8(v33);
        if ( !v32 )
          return 0LL;
      }
      v24 -= v29;
      if ( !v24 )
        break;
      v22 = v42;
    }
  }
  v35 = *(_QWORD *)(a1 + 56);
  if ( v35 )
    KeFlushIoBuffers(v35, a5 == 0, 1, (__int64)v22);
  return v5;
}
