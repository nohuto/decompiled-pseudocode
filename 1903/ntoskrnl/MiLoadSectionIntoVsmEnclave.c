/*
 * XREFs of MiLoadSectionIntoVsmEnclave @ 0x140894788
 * Callers:
 *     NtLoadEnclaveData @ 0x1408956C0 (NtLoadEnclaveData.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiVadDeleted @ 0x140053930 (MiVadDeleted.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x140119480 (MmSizeOfMdl.c)
 *     MiCountCommittedPages @ 0x1402D3AA0 (MiCountCommittedPages.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiDecommitRegion @ 0x140606890 (MiDecommitRegion.c)
 *     MiPrefetchControlArea @ 0x1406E6648 (MiPrefetchControlArea.c)
 *     VslLoadEnclaveModule @ 0x140852A38 (VslLoadEnclaveModule.c)
 *     MiMapImageForEnclaveUse @ 0x140894B78 (MiMapImageForEnclaveUse.c)
 *     MiUnmapImageForEnclaveUse @ 0x140894E94 (MiUnmapImageForEnclaveUse.c)
 */

__int64 __fastcall MiLoadSectionIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        SIZE_T Length,
        PVOID Base,
        PMDL MemoryDescriptorList,
        _QWORD *a9)
{
  HANDLE *MappedSystemVa; // rdi
  unsigned __int64 v11; // r12
  __int64 v12; // r15
  PMDL v13; // rsi
  unsigned int v14; // ebx
  _DWORD *v15; // r14
  int v16; // edi
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // r12
  SIZE_T v19; // rax
  struct _MDL *PoolWithTag; // rax
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // r15
  __int64 v24; // r12
  _QWORD *v25; // rdx
  int v27; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-70h]
  __int64 v29; // [rsp+60h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-60h]
  __int64 v31; // [rsp+70h] [rbp-58h] BYREF
  __int64 v32; // [rsp+78h] [rbp-50h]
  char v34; // [rsp+D8h] [rbp+10h] BYREF
  char v35; // [rsp+E0h] [rbp+18h]
  __int64 v36; // [rsp+E8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  MappedSystemVa = (HANDLE *)Base;
  v32 = *(_QWORD *)(a2 + 72);
  v11 = (unsigned __int64)Base;
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  v12 = (unsigned int)Length;
  v13 = MemoryDescriptorList;
  v14 = 0;
  v29 = 0LL;
  v15 = 0LL;
  if ( (unsigned int)Length < 0x10 )
  {
    v16 = -1073741820;
LABEL_3:
    v17 = a5;
LABEL_4:
    v18 = 0LL;
    goto LABEL_28;
  }
  if ( MemoryDescriptorList )
  {
    if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
      MappedSystemVa = (HANDLE *)MemoryDescriptorList->MappedSystemVa;
    else
      MappedSystemVa = (HANDLE *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x10u);
    if ( !MappedSystemVa )
      goto LABEL_7;
  }
  else
  {
    Base = 0LL;
    v19 = MmSizeOfMdl(MappedSystemVa, (unsigned int)Length);
    PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x6C646D4Du);
    v13 = PoolWithTag;
    if ( !v11 )
    {
LABEL_7:
      v16 = -1073741670;
      goto LABEL_3;
    }
    PoolWithTag->Next = 0LL;
    PoolWithTag->MdlFlags = 0;
    PoolWithTag->ByteCount = v12;
    PoolWithTag->StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
    PoolWithTag->ByteOffset = (unsigned __int16)MappedSystemVa & 0xFFF;
    PoolWithTag->Size = 8 * ((((unsigned __int64)((unsigned __int16)MappedSystemVa & 0xFFF) + v12 + 4095) >> 12) + 6);
    MmProbeAndLockPages(PoolWithTag, 0, IoReadAccess);
  }
  v15 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4D456D4Du);
  if ( !v15 )
    goto LABEL_7;
  v21 = MiMapImageForEnclaveUse(*MappedSystemVa, (__int64)&v31);
  v17 = a5;
  v16 = v21;
  if ( v21 < 0 )
    goto LABEL_4;
  v22 = v31;
  v18 = ((unsigned __int64)*(unsigned int *)(*(_QWORD *)v31 + 8LL) << 12) + a5 - 1;
  v28 = v18;
  MiLockVad((__int64)CurrentThread, a2);
  v14 = 1;
  if ( (unsigned int)MiVadDeleted(a2) || MiCountCommittedPages(v17, v18, a2, a1 + 1280) )
  {
    v16 = -1073741800;
  }
  else
  {
    v23 = v22 + 128;
    v27 = 0;
    v14 = 3;
    v24 = *(_QWORD *)(v22 + 136) << 9;
    do
    {
      v16 = MiCommitExistingVad(
              a2,
              a5 + (((*(_QWORD *)(v23 + 8) << 9) - v24) & 0xFFFFFFFFFFFFF000uLL),
              (unsigned __int64)*(unsigned int *)(v23 + 44) << 12,
              4u,
              0,
              0LL,
              0,
              0LL,
              &v27);
      if ( v16 < 0 )
      {
        v17 = a5;
        goto LABEL_27;
      }
      v23 = *(_QWORD *)(v23 + 16);
    }
    while ( v23 );
    MiPrefetchControlArea(v22, CLFS_LSN_NULL_EXT[0], 0LL, 1LL, 0, 0xFFFFFFFF);
    v17 = a5;
    v16 = VslLoadEnclaveModule(
            *(_QWORD *)(v32 + 24),
            a5,
            *(_QWORD *)(*(_QWORD *)(v22 + 96) + 56LL),
            v29,
            (__int64)v13,
            &v34,
            v15 + 9,
            v15 + 10);
    if ( v16 >= 0 )
    {
      v14 = 1;
      if ( v34 )
      {
        v15[8] = 2;
        *((_QWORD *)v15 + 2) = v17;
        v25 = *(_QWORD **)(a2 + 88);
        if ( *v25 != a2 + 80 )
          __fastfail(3u);
        *(_QWORD *)v15 = a2 + 80;
        *((_QWORD *)v15 + 1) = v25;
        *v25 = v15;
        *(_QWORD *)(a2 + 88) = v15;
        *a9 = v15;
        v15 = 0LL;
      }
    }
LABEL_27:
    v18 = v28;
  }
LABEL_28:
  if ( (v14 & 1) == 0 )
    MiLockVad((__int64)CurrentThread, a2);
  MiUnlockAndDereferenceVad((char *)a2);
  if ( v29 )
  {
    MiUnmapImageForEnclaveUse(v29);
    if ( v14 >= 2 )
      MiDecommitRegion(a2, v17, v18);
  }
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v13 && !Base )
  {
    if ( (v13->MdlFlags & 2) != 0 )
      MmUnlockPages(v13);
    ExFreePoolWithTag(v13, 0);
  }
  return (unsigned int)v16;
}
