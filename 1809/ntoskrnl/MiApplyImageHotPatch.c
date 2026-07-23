/*
 * XREFs of MiApplyImageHotPatch @ 0x1408558E8
 * Callers:
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPagableImageSection @ 0x140097E40 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x14009AAF0 (MiLockPagableImageSection.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlApplyHotPatch @ 0x14057F148 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _SINGLE_LIST_ENTRY *a4,
        struct _SINGLE_LIST_ENTRY *a5)
{
  struct _MDL *v7; // rdi
  struct _SINGLE_LIST_ENTRY *MappedSystemVa; // rsi
  int v9; // r15d
  int v10; // r14d
  struct _SINGLE_LIST_ENTRY *v11; // rcx
  struct _MDL *Mdl; // rax
  ULONG Priority; // [rsp+28h] [rbp-E0h]
  __int64 v15; // [rsp+30h] [rbp-D8h]
  struct _SINGLE_LIST_ENTRY v16[14]; // [rsp+98h] [rbp-70h] BYREF

  v7 = 0LL;
  MappedSystemVa = 0LL;
  v9 = 0;
  v10 = 0;
  memset(v16, 0, 0x30uLL);
  v16[0].Next = (struct _SINGLE_LIST_ENTRY *)a1;
  v16[1].Next = (struct _SINGLE_LIST_ENTRY *)a2;
  v16[2].Next = a4;
  v16[3].Next = a5;
  v16[5].Next = (struct _SINGLE_LIST_ENTRY *)*(unsigned int *)(a3 + 32);
  v11 = *(struct _SINGLE_LIST_ENTRY **)(a3 + 40);
  v16[4].Next = v11;
  if ( (*(_DWORD *)(a1 + 136) & 1) != 0 )
  {
    if ( v11 )
    {
      Mdl = IoAllocateMdl(v11, 6 * **(_DWORD **)(a1 + 40), 0, 0, 0LL);
      v7 = Mdl;
      if ( !Mdl
        || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v10 = 1, (v7->MdlFlags & 5) == 0)
          ? (MappedSystemVa = (struct _SINGLE_LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                                             v7,
                                                             0,
                                                             MmCached,
                                                             0LL,
                                                             0,
                                                             0x40000020u))
          : (MappedSystemVa = (struct _SINGLE_LIST_ENTRY *)v7->MappedSystemVa),
            !MappedSystemVa) )
      {
        HIDWORD(v16[5].Next) = -1073741670;
        goto LABEL_15;
      }
      v16[4].Next = MappedSystemVa;
    }
    if ( (MiFlags & 4) == 0 )
      MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
    v9 = 1;
    KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)MiApplyImageHotPatchDpc, v16);
  }
  else
  {
    HIDWORD(v16[5].Next) = RtlApplyHotPatch(
                             *(_QWORD *)(a1 + 72),
                             *(_QWORD *)(a1 + 8),
                             *(_QWORD *)(a1 + 80),
                             *(_DWORD *)(a1 + 36),
                             &v16[5],
                             Priority,
                             v15,
                             *(_QWORD *)(a2 + 72),
                             *(_QWORD *)(a2 + 8),
                             0LL,
                             0,
                             0LL,
                             a4,
                             (__int64)a5,
                             1,
                             *(PRTL_BITMAP *)(a1 + 40),
                             (__int64)v11);
  }
  *(_DWORD *)(a3 + 32) = v16[5].Next;
LABEL_15:
  if ( MappedSystemVa )
    MmUnmapLockedPages(MappedSystemVa, v7);
  if ( v7 )
  {
    if ( v10 )
      MmUnlockPages(v7);
    IoFreeMdl(v7);
  }
  if ( v9 && (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  return HIDWORD(v16[5].Next);
}
