/*
 * XREFs of NtMapCMFModule @ 0x140707A40
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExConvertExclusiveToSharedLite @ 0x140121020 (ExConvertExclusiveToSharedLite.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MmMapViewInSystemSpace @ 0x1405A33A0 (MmMapViewInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x1405E0390 (MmUnmapViewInSystemSpace.c)
 *     MiUnmapViewOfSection @ 0x1406181B0 (MiUnmapViewOfSection.c)
 *     PsCreateSystemThreadEx @ 0x14066BC80 (PsCreateSystemThreadEx.c)
 *     MmMapViewOfSection @ 0x140679D20 (MmMapViewOfSection.c)
 *     MUIInitializeResourceLock @ 0x1407106FC (MUIInitializeResourceLock.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     CMFRegisterEventTime @ 0x1408DA548 (CMFRegisterEventTime.c)
 *     CMFUnmapModules @ 0x1408DADB4 (CMFUnmapModules.c)
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
  char PreviousMode; // r13
  NTSTATUS v11; // edx
  ULONG v13; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // eax
  _DWORD *v18; // rcx
  struct _KTHREAD *v19; // rax
  __int64 v20; // r8
  ULONG v21; // ebx
  unsigned int v22; // r12d
  int v23; // ebx
  unsigned int v24; // r15d
  int v25; // edx
  bool v26; // r13
  PVOID *v27; // rsi
  PVOID PoolWithTag; // rax
  signed __int64 v29; // rbx
  PVOID v30; // rax
  int v31; // r12d
  NTSTATUS v32; // eax
  signed __int64 v33; // rsi
  signed __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  NTSTATUS v39; // [rsp+50h] [rbp-118h]
  bool v40; // [rsp+54h] [rbp-114h]
  char v41; // [rsp+55h] [rbp-113h]
  int v42; // [rsp+58h] [rbp-110h]
  PVOID MappedBase; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-100h]
  int v45; // [rsp+6Ch] [rbp-FCh]
  ULONG_PTR ViewSize; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v47; // [rsp+78h] [rbp-F0h]
  __int64 v48; // [rsp+80h] [rbp-E8h] BYREF
  __int64 *v49; // [rsp+88h] [rbp-E0h]
  unsigned int v50; // [rsp+90h] [rbp-D8h]
  HANDLE Handle; // [rsp+98h] [rbp-D0h] BYREF
  _DWORD v52[3]; // [rsp+A0h] [rbp-C8h] BYREF
  bool v53; // [rsp+ACh] [rbp-BCh]
  struct _KEVENT *p_Event; // [rsp+B0h] [rbp-B8h]
  unsigned int v55; // [rsp+B8h] [rbp-B0h]
  ULONG v56; // [rsp+BCh] [rbp-ACh]
  int v57; // [rsp+C0h] [rbp-A8h]
  NTSTATUS v58; // [rsp+C4h] [rbp-A4h]
  PVOID *v59; // [rsp+C8h] [rbp-A0h]
  int v60; // [rsp+D0h] [rbp-98h]
  struct _KEVENT Event; // [rsp+E0h] [rbp-88h] BYREF
  __int128 v63; // [rsp+F8h] [rbp-70h] BYREF
  __int64 v64; // [rsp+108h] [rbp-60h]
  int v65; // [rsp+110h] [rbp-58h]
  __int128 v66; // [rsp+118h] [rbp-50h]
  int v68; // [rsp+170h] [rbp+8h]

  v6 = CacheFlagsOut;
  v7 = CacheIndexOut;
  v8 = Index;
  MappedBase = 0LL;
  ViewSize = 0LL;
  v42 = 0;
  v44 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v41 = PreviousMode;
  if ( !PreviousMode || InitSafeBootMode )
  {
    v11 = -1073741823;
    goto LABEL_9;
  }
  if ( (What & 0xFFE0FE81) != 0 )
  {
LABEL_8:
    v11 = -1073741811;
LABEL_9:
    v39 = v11;
    goto LABEL_10;
  }
  v11 = MUIInitializeResourceLock(&CMFLock);
  v39 = v11;
  if ( (v11 & 0xC0000000) == 0xC0000000 )
    goto LABEL_10;
  if ( (What & 0x20000) != 0 )
  {
    if ( (What & 0x180000) != 0 && (What & 0x40000) != 0 || (What & 0x180000) == 0x180000 )
      goto LABEL_8;
    v13 = What & 0x1C0000;
    if ( v13 != (CMFFlagsCache & 0x1C0000) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(CMFLock, 1u);
      if ( v13 != (CMFFlagsCache & 0x1C0000) )
      {
        if ( CMFDirectorySectionPointer )
        {
          if ( !v13 )
          {
            v39 = -1073741637;
            goto LABEL_33;
          }
          if ( CMFDirectorySectionPointer )
          {
            v17 = 0x80000000;
            v50 = 0x80000000;
            if ( (CMFFlagsCache & 0x1C0000) != 0 )
              v17 = -1073741824;
            v50 = v17;
            LOBYTE(v15) = PreviousMode;
            v39 = CMFCheckAccess(CMFDirectorySectionPointer, v17, v15);
            if ( (v39 & 0xC0000000) == 0xC0000000 )
              goto LABEL_33;
          }
        }
        v16 = v13 | CMFFlagsCache & 0xFFE3FFFF;
        CMFFlagsCache = v16;
        if ( CMFDirectorySectionPointer && ((v16 & 0x80000) != 0 || (v16 & 0x100000) != 0) )
        {
          MappedBase = 0LL;
          ViewSize = 104LL;
          if ( MmMapViewInSystemSpace(CMFDirectorySectionPointer, &MappedBase, &ViewSize) >= 0 )
          {
            v18 = MappedBase;
            if ( MappedBase )
            {
              if ( ViewSize >= 0x68 )
              {
                *((_DWORD *)MappedBase + 12) &= 0xFFE3FFFF;
                v18[12] |= (CMFFlagsCache & 0x80000) != 0 ? 0x80000 : 0x100000;
              }
              MmUnmapViewInSystemSpace(v18);
              MappedBase = 0LL;
            }
          }
          CMFUnmapModules((CMFFlagsCache & 0x100000) != 0 ? 304 : 32);
          CMFRegisterEventTime(4LL);
        }
      }
      v39 = 0;
LABEL_33:
      ExReleaseResourceLite(CMFLock);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v11 = v39;
      goto LABEL_10;
    }
LABEL_35:
    v11 = 0;
    goto LABEL_9;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  ExAcquireResourceSharedLite(CMFLock, 1u);
  if ( !CMFFlagsCache )
  {
    v21 = What | 1;
LABEL_53:
    v22 = v21 & 0xFFFFFECF;
    v44 = v22;
    v23 = v21 & 0x130;
    v68 = v23;
    v45 = (v22 & 0x40) != 0 ? 4 : 2;
    v24 = (v22 & 0x40) != 0 ? -1073741824 : 0x80000000;
    v47 = v24;
    v42 = 10000;
    switch ( v23 )
    {
      case 16:
        if ( (unsigned int)CMFCacheIndex < 0x2710 )
        {
          v42 = CMFCacheIndex;
LABEL_65:
          v26 = (v22 & 2) != 0;
          v27 = &CMFDirectorySectionPointer;
LABEL_76:
          v49 = (__int64 *)v27;
          v30 = *v27;
          goto LABEL_80;
        }
        if ( v8 < 0x2710 )
        {
          v42 = v8;
          goto LABEL_65;
        }
        if ( CMFFirstAccess )
        {
          CMFRegisterEventTime(1LL);
          CMFFirstAccess = 0;
        }
        break;
      case 32:
        if ( v8 < 0x1E && CMFCacheIndex != 10000 )
        {
          v42 = CMFCacheIndex;
          if ( !CMFSegmentSectionPointer )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x636D6650u);
            v29 = (signed __int64)PoolWithTag;
            MappedBase = PoolWithTag;
            if ( !PoolWithTag )
            {
              v39 = -1073741801;
              goto LABEL_62;
            }
            memset(PoolWithTag, 0, 0xF0uLL);
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSegmentSectionPointer, v29, 0LL) )
              ExFreePoolWithTag(MappedBase, 0);
            MappedBase = 0LL;
            v23 = v68;
            v22 = v44;
          }
          v26 = (v22 & 4) != 0;
          v27 = (PVOID *)((char *)CMFSegmentSectionPointer + 8 * v8);
          goto LABEL_76;
        }
        break;
      case 256:
        v42 = CMFCacheIndex;
        v40 = (v22 & 8) != 0;
        v27 = &CMFHitsSectionPointer;
        v49 = (__int64 *)&CMFHitsSectionPointer;
        if ( CMFHitsSectionPointer )
          goto LABEL_93;
        CMFHitsLastFlushTime = MEMORY[0xFFFFF78000000014];
        v30 = 0LL;
        v22 = v44;
        v26 = v40;
        v27 = (PVOID *)v49;
LABEL_80:
        if ( !v30 )
        {
          ExReleaseResourceLite(CMFLock);
          ExAcquireResourceExclusiveLite(CMFLock, 1u);
          if ( ((v22 ^ CMFFlagsCache) & 0x1C0000) == 0 || (CMFFlagsCache & 0x180000) == 0 )
          {
            v24 = v47;
            if ( *v27 )
            {
              v31 = v45;
LABEL_92:
              ExConvertExclusiveToSharedLite(CMFLock);
LABEL_94:
              MappedBase = 0LL;
              ViewSize = 0LL;
              v48 = 0LL;
              if ( BaseAddress )
              {
                if ( v23 == 256
                  || (LOBYTE(v20) = v41, v39 = CMFCheckAccess(*v27, v24, v20), (v39 & 0xC0000000) != 0xC0000000) )
                {
                  v39 = MmMapViewOfSection(
                          *v49,
                          (__int64)KeGetCurrentThread()->ApcState.Process,
                          (__int64 *)&MappedBase,
                          0LL,
                          0LL,
                          &v48,
                          (__int64 *)&ViewSize,
                          1,
                          0x400000,
                          v31);
                  if ( (v39 & 0xC0000000) == 0xC0000000 )
                  {
                    MappedBase = 0LL;
                  }
                  else if ( v68 == 256 )
                  {
                    v33 = CMFHitsLastFlushTime;
                    v34 = MEMORY[0xFFFFF78000000014];
                    if ( MEMORY[0xFFFFF78000000014] > CMFHitsLastFlushTime + 36000000000LL
                      && v33 == _InterlockedCompareExchange64(
                                  &CMFHitsLastFlushTime,
                                  MEMORY[0xFFFFF78000000014],
                                  CMFHitsLastFlushTime)
                      && (int)CMFFlushHitsFile(MappedBase, ViewSize) < 0 )
                    {
                      _InterlockedCompareExchange64(&CMFHitsLastFlushTime, v33, v34);
                    }
                  }
                }
              }
              goto LABEL_62;
            }
            v52[0] = 0x8000000;
            v52[1] = v42;
            v52[2] = v47;
            v53 = v26;
            v55 = v22;
            v56 = Index;
            v31 = v45;
            v57 = v45;
            v59 = v27;
            v60 = v23;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            p_Event = &Event;
            LODWORD(v63) = 48;
            *((_QWORD *)&v63 + 1) = 0LL;
            v65 = 512;
            v64 = 0LL;
            v66 = 0LL;
            v39 = PsCreateSystemThreadEx(
                    (__int64)&Handle,
                    0x1FFFFF,
                    &v63,
                    0LL,
                    0LL,
                    (__int64)CMFSystemThreadRoutine,
                    (__int64)v52,
                    0LL,
                    0LL);
            if ( (v39 & 0xC0000000) != 0xC0000000 )
            {
              ZwClose(Handle);
              v32 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              v39 = v32;
              if ( v32 )
              {
                if ( v32 >= 0 )
                  v39 = -1073741823;
                goto LABEL_62;
              }
              v44 = v55;
              v39 = v58;
              if ( (v58 & 0xC0000000) != 0xC0000000 )
              {
                if ( v23 == 16 )
                  CMFRegisterEventTime(2LL);
                goto LABEL_92;
              }
            }
LABEL_62:
            v7 = CacheIndexOut;
            goto LABEL_63;
          }
          v25 = -1073741823;
LABEL_61:
          v39 = v25;
          goto LABEL_62;
        }
LABEL_93:
        v31 = v45;
        goto LABEL_94;
    }
    v25 = -1073741811;
    goto LABEL_61;
  }
  if ( (CMFFlagsCache & 0xF) != 0 )
    v21 = CMFFlagsCache & 0xF | What & 0xFFFFFFF0;
  else
    v21 = What | 1;
  if ( (CMFFlagsCache & 0x100000) != 0 )
  {
    if ( (v21 & 0x10000) == 0 )
    {
      v39 = -1073741672;
      goto LABEL_104;
    }
    v21 |= 0x100000u;
    goto LABEL_51;
  }
  if ( (CMFFlagsCache & 0x80000) == 0 )
  {
    if ( (CMFFlagsCache & 0x40000) != 0 )
      v21 |= 0x40000u;
    goto LABEL_51;
  }
  if ( (v21 & 0x130) != 0x20 || (v21 & 0x10000) != 0 )
  {
    v21 |= 0x80000u;
LABEL_51:
    v8 = Index;
    goto LABEL_53;
  }
  v39 = -1073741672;
LABEL_63:
  v6 = CacheFlagsOut;
LABEL_104:
  ExReleaseResourceLite(CMFLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v11 = v39;
  if ( (v39 & 0xC0000000) != 0xC0000000 )
  {
    v35 = 0x7FFFFFFF0000LL;
    if ( BaseAddress )
    {
      v36 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)BaseAddress < 0x7FFFFFFF0000LL )
        v36 = (__int64)BaseAddress;
      *(_QWORD *)v36 = *(_QWORD *)v36;
      *BaseAddress = MappedBase;
      MappedBase = 0LL;
    }
    if ( ViewSizeOut )
    {
      v37 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ViewSizeOut < 0x7FFFFFFF0000LL )
        v37 = (__int64)ViewSizeOut;
      *(_DWORD *)v37 = *(_DWORD *)v37;
      *ViewSizeOut = ViewSize;
    }
    if ( v7 )
    {
      v38 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v7 < 0x7FFFFFFF0000LL )
        v38 = (__int64)v7;
      *(_DWORD *)v38 = *(_DWORD *)v38;
      *v7 = v42;
    }
    if ( v6 )
    {
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        v35 = (__int64)v6;
      *(_DWORD *)v35 = *(_DWORD *)v35;
      *v6 = v44;
    }
    goto LABEL_35;
  }
LABEL_10:
  if ( MappedBase )
  {
    MiUnmapViewOfSection((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, (unsigned __int64)MappedBase, 0, 0);
    return v39;
  }
  return v11;
}
