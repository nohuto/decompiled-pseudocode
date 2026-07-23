/*
 * XREFs of NtMapCMFModule @ 0x140916F00
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExConvertExclusiveToSharedLite @ 0x1400EECC0 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MmUnmapViewOfSection @ 0x14064A8C0 (MmUnmapViewOfSection.c)
 *     MmUnmapViewInSystemSpace @ 0x14066EBA0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewOfSection @ 0x14067A6E0 (MmMapViewOfSection.c)
 *     MmMapViewInSystemSpace @ 0x1406AD0D0 (MmMapViewInSystemSpace.c)
 *     PsCreateSystemThread @ 0x1406B3FB0 (PsCreateSystemThread.c)
 *     MUIInitializeResourceLock @ 0x14078694C (MUIInitializeResourceLock.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 *     CMFRegisterEventTime @ 0x140916564 (CMFRegisterEventTime.c)
 *     CMFUnmapModules @ 0x140916E24 (CMFUnmapModules.c)
 */

NTSTATUS __cdecl NtMapCMFModule(
        ULONG What,
        ULONG Index,
        PULONG CacheIndexOut,
        PULONG CacheFlagsOut,
        PULONG ViewSizeOut,
        PVOID *BaseAddress)
{
  PULONG v6; // r15
  PULONG v7; // r12
  ULONG v8; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  ULONG v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  ACCESS_MASK v12; // eax
  unsigned int v13; // eax
  _DWORD *v14; // rdi
  struct _KTHREAD *v15; // rax
  ULONG v16; // edi
  unsigned int v17; // r12d
  int v18; // edi
  ACCESS_MASK v19; // r15d
  bool v20; // r13
  PVOID *v21; // rsi
  __int64 v22; // rax
  int v23; // r12d
  NTSTATUS v24; // eax
  signed __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  NTSTATUS v31; // [rsp+50h] [rbp-128h]
  bool v32; // [rsp+54h] [rbp-124h]
  PVOID MappedBase; // [rsp+58h] [rbp-120h] BYREF
  KPROCESSOR_MODE v34; // [rsp+60h] [rbp-118h]
  int v35; // [rsp+64h] [rbp-114h]
  unsigned int v36; // [rsp+68h] [rbp-110h]
  int v37; // [rsp+6Ch] [rbp-10Ch]
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-108h] BYREF
  ACCESS_MASK v39; // [rsp+78h] [rbp-100h]
  __int64 v40; // [rsp+80h] [rbp-F8h] BYREF
  __int64 *v41; // [rsp+88h] [rbp-F0h]
  unsigned int v42; // [rsp+90h] [rbp-E8h]
  signed __int64 v43; // [rsp+98h] [rbp-E0h]
  _QWORD StartContext[8]; // [rsp+A0h] [rbp-D8h] BYREF
  HANDLE ThreadHandle; // [rsp+E0h] [rbp-98h] BYREF
  struct _KEVENT Event; // [rsp+E8h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp-78h] BYREF
  struct _KTHREAD *v49; // [rsp+138h] [rbp-40h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v8 = Index;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v40 = 0LL;
  memset(&Event, 0, sizeof(Event));
  memset(StartContext, 0, 0x38uLL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v35 = 0;
  v36 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v31 = -1073741823;
    goto LABEL_117;
  }
  if ( (What & 0xFFE0FE81) != 0 )
    goto LABEL_5;
  v31 = MUIInitializeResourceLock((volatile signed __int64 *)&CMFLock);
  if ( (v31 & 0xC0000000) == 0xC0000000 )
    goto LABEL_117;
  if ( (What & 0x20000) != 0 )
  {
    if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
    {
LABEL_5:
      v31 = -1073741811;
      goto LABEL_117;
    }
    v10 = What & 0x1C0000;
    if ( (What & 0x1C0000) == (CMFFlagsCache & 0x1C0000) )
      goto LABEL_11;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(CMFLock, 1u);
    if ( v10 != (CMFFlagsCache & 0x1C0000) )
    {
      if ( CMFDirectorySectionPointer )
      {
        if ( !v10 )
        {
          v31 = -1073741637;
LABEL_30:
          ExReleaseResourceLite(CMFLock);
          KeLeaveCriticalRegion();
          goto LABEL_117;
        }
        if ( CMFDirectorySectionPointer )
        {
          v12 = 0x80000000;
          v42 = 0x80000000;
          if ( (CMFFlagsCache & 0x1C0000) != 0 )
            v12 = -1073741824;
          v42 = v12;
          v31 = CMFCheckAccess((__int64)CMFDirectorySectionPointer, v12, PreviousMode);
          if ( (v31 & 0xC0000000) == 0xC0000000 )
            goto LABEL_30;
        }
      }
      v13 = v10 | CMFFlagsCache & 0xFFE3FFFF;
      CMFFlagsCache = v13;
      if ( CMFDirectorySectionPointer && ((v13 & 0x80000) != 0 || (v13 & 0x100000) != 0) )
      {
        MappedBase = 0LL;
        ViewSize = 104LL;
        if ( MmMapViewInSystemSpace(CMFDirectorySectionPointer, &MappedBase, &ViewSize) >= 0 )
        {
          v14 = MappedBase;
          if ( MappedBase )
          {
            if ( ViewSize >= 0x68 )
            {
              *((_DWORD *)MappedBase + 12) &= 0xFFE3FFFF;
              v14[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
            }
            MmUnmapViewInSystemSpace(MappedBase);
            MappedBase = 0LL;
          }
        }
        CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
        CMFRegisterEventTime(4);
      }
    }
    v31 = 0;
    goto LABEL_30;
  }
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  ExAcquireResourceSharedLite(CMFLock, 1u);
  if ( CMFFlagsCache )
  {
    if ( (CMFFlagsCache & 0xF) != 0 )
      v16 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
    else
      v16 = What | 1;
    if ( (CMFFlagsCache & 0x100000) != 0 )
    {
      if ( (v16 & 0x10000) == 0 )
      {
        v31 = -1073741672;
        goto LABEL_99;
      }
      v16 |= 0x100000u;
    }
    else if ( (CMFFlagsCache & 0x80000) != 0 )
    {
      if ( (v16 & 0x130) == 0x20 && (v16 & 0x10000) == 0 )
      {
        v31 = -1073741672;
LABEL_98:
        v6 = CacheFlagsOut;
        goto LABEL_99;
      }
      v16 |= 0x80000u;
    }
    else if ( (CMFFlagsCache & 0x40000) != 0 )
    {
      v16 |= 0x40000u;
    }
    v8 = Index;
  }
  else
  {
    v16 = What | 1;
  }
  v17 = v16 & 0xFFFFFECF;
  v36 = v17;
  v18 = v16 & 0x130;
  v37 = (v17 & 0x40) != 0 ? 4 : 2;
  v19 = (v17 & 0x40) != 0 ? -1073741824 : 0x80000000;
  v39 = v19;
  v35 = 10000;
  if ( v18 == 16 )
  {
    if ( (unsigned int)CMFCacheIndex < 0x2710 )
    {
      v35 = CMFCacheIndex;
LABEL_56:
      v20 = (v17 & 2) != 0;
      v21 = &CMFDirectorySectionPointer;
LABEL_67:
      v41 = (__int64 *)v21;
      v22 = (__int64)*v21;
      goto LABEL_71;
    }
    if ( v8 < 0x2710 )
    {
      v35 = v8;
      goto LABEL_56;
    }
    if ( CMFFirstAccess )
    {
      CMFRegisterEventTime(1);
      CMFFirstAccess = 0;
    }
    goto LABEL_54;
  }
  if ( v18 == 32 )
  {
    if ( v8 < 0x1E && CMFCacheIndex != 10000 )
    {
      v35 = CMFCacheIndex;
      if ( !CMFSegmentSectionPointer )
      {
        MappedBase = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
        if ( !MappedBase )
        {
          v31 = -1073741801;
          goto LABEL_97;
        }
        memset(MappedBase, 0, 0xF0uLL);
        if ( _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CMFSegmentSectionPointer,
               (signed __int64)MappedBase,
               0LL) )
        {
          ExFreePoolWithTag(MappedBase, 0);
        }
        MappedBase = 0LL;
        v17 = v36;
      }
      v20 = (v17 & 4) != 0;
      v21 = (PVOID *)((char *)CMFSegmentSectionPointer + 8 * v8);
      goto LABEL_67;
    }
LABEL_54:
    v31 = -1073741811;
LABEL_97:
    v7 = CacheIndexOut;
    goto LABEL_98;
  }
  if ( v18 != 256 )
    goto LABEL_54;
  v35 = CMFCacheIndex;
  v32 = (v17 & 8) != 0;
  v21 = &CMFHitsSectionPointer;
  v41 = (__int64 *)&CMFHitsSectionPointer;
  if ( CMFHitsSectionPointer )
  {
LABEL_86:
    v23 = v37;
    goto LABEL_87;
  }
  StartContext[7] = MEMORY[0xFFFFF78000000014];
  CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
  v22 = 0LL;
  v17 = v36;
  v20 = v32;
  v21 = (PVOID *)v41;
LABEL_71:
  if ( v22 )
    goto LABEL_86;
  ExReleaseResourceLite(CMFLock);
  ExAcquireResourceExclusiveLite(CMFLock, 1u);
  if ( ((v17 ^ CMFFlagsCache) & 0x1C0000) != 0 && (CMFFlagsCache & 0x180000) != 0 )
  {
    v31 = -1073741823;
    goto LABEL_97;
  }
  v19 = v39;
  if ( *v21 )
  {
    v23 = v37;
  }
  else
  {
    LODWORD(StartContext[0]) = 0x8000000;
    HIDWORD(StartContext[0]) = v35;
    LODWORD(StartContext[1]) = v39;
    BYTE4(StartContext[1]) = v20;
    StartContext[2] = 0LL;
    StartContext[3] = __PAIR64__(Index, v17);
    v23 = v37;
    LODWORD(StartContext[4]) = v37;
    StartContext[5] = v21;
    LODWORD(StartContext[6]) = v18;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    StartContext[2] = &Event;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v31 = PsCreateSystemThread(
            &ThreadHandle,
            0x1FFFFFu,
            &ObjectAttributes,
            0LL,
            0LL,
            (PKSTART_ROUTINE)CMFSystemThreadRoutine,
            StartContext);
    if ( (v31 & 0xC0000000) == 0xC0000000 )
      goto LABEL_80;
    ZwClose(ThreadHandle);
    v24 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v31 = v24;
    if ( v24 )
    {
      if ( v24 >= 0 )
        v31 = -1073741823;
      goto LABEL_80;
    }
    v36 = StartContext[3];
    v31 = HIDWORD(StartContext[4]);
    if ( (HIDWORD(StartContext[4]) & 0xC0000000) == 0xC0000000 )
    {
LABEL_80:
      v6 = CacheFlagsOut;
      v7 = CacheIndexOut;
      goto LABEL_99;
    }
    if ( v18 == 16 )
      CMFRegisterEventTime(2);
  }
  ExConvertExclusiveToSharedLite(CMFLock);
LABEL_87:
  MappedBase = 0LL;
  ViewSize = 0LL;
  v40 = 0LL;
  if ( !BaseAddress )
    goto LABEL_97;
  if ( v18 != 256 )
  {
    v31 = CMFCheckAccess((__int64)*v21, v19, v34);
    if ( (v31 & 0xC0000000) == 0xC0000000 )
      goto LABEL_80;
  }
  v49 = KeGetCurrentThread();
  v31 = MmMapViewOfSection(
          *v41,
          (__int64)v49->ApcState.Process,
          (__int64 *)&MappedBase,
          0LL,
          0LL,
          &v40,
          (__int64 *)&ViewSize,
          1,
          0x400000,
          v23);
  if ( (v31 & 0xC0000000) == 0xC0000000 )
  {
    MappedBase = 0LL;
    goto LABEL_80;
  }
  if ( v18 != 256 )
    goto LABEL_80;
  v25 = CMFHitsLastFlushTime;
  v43 = MEMORY[0xFFFFF78000000014];
  if ( MEMORY[0xFFFFF78000000014] <= CMFHitsLastFlushTime + 36000000000LL
    || v25 != _InterlockedCompareExchange64(&CMFHitsLastFlushTime, MEMORY[0xFFFFF78000000014], CMFHitsLastFlushTime) )
  {
    goto LABEL_80;
  }
  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  if ( (int)CMFFlushHitsFile(MappedBase, ViewSize) < 0 )
    _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v25, v43);
LABEL_99:
  ExReleaseResourceLite(CMFLock);
  KeLeaveCriticalRegion();
  if ( (v31 & 0xC0000000) != 0xC0000000 )
  {
    v26 = 0x7FFFFFFF0000LL;
    if ( BaseAddress )
    {
      v27 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
        v27 = (__int64)BaseAddress;
      *(_QWORD *)v27 = *(_QWORD *)v27;
      *BaseAddress = MappedBase;
      MappedBase = 0LL;
    }
    if ( ViewSizeOut )
    {
      v28 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ViewSizeOut < 0x7FFFFFFF0000LL )
        v28 = (__int64)ViewSizeOut;
      *(_DWORD *)v28 = *(_DWORD *)v28;
      *ViewSizeOut = ViewSize;
    }
    if ( v7 )
    {
      v29 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
        v29 = (__int64)v7;
      *(_DWORD *)v29 = *(_DWORD *)v29;
      *v7 = v35;
    }
    if ( v6 )
    {
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        v26 = (__int64)v6;
      *(_DWORD *)v26 = *(_DWORD *)v26;
      *v6 = v36;
    }
LABEL_11:
    v31 = 0;
  }
LABEL_117:
  if ( MappedBase )
    MmUnmapViewOfSection((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  return v31;
}
