/*
 * XREFs of MiApplyImageHotPatch @ 0x14088DB44
 * Callers:
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14002FA50 (MmMapLockedPagesSpecifyCache.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     MiLockPagableImageSection @ 0x14005F120 (MiLockPagableImageSection.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     MmUnlockPagableImageSection @ 0x140129A60 (MmUnlockPagableImageSection.c)
 *     RtlApplyHotPatch @ 0x1405AE038 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatch(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  struct _MDL *v6; // rdi
  PVOID MappedSystemVa; // rsi
  int v8; // r15d
  int v9; // r14d
  void *v10; // r10
  struct _MDL *Mdl; // rax
  ULONG Priority; // [rsp+28h] [rbp-C0h]
  __int64 v14; // [rsp+30h] [rbp-B8h]
  _QWORD v15[4]; // [rsp+90h] [rbp-58h] BYREF
  PVOID v16; // [rsp+B0h] [rbp-38h]
  __int64 v17; // [rsp+B8h] [rbp-30h] BYREF

  v6 = 0LL;
  MappedSystemVa = 0LL;
  v8 = 0;
  v9 = 0;
  v15[0] = a1;
  v15[1] = a2;
  v15[2] = a4;
  v15[3] = a5;
  v17 = *(unsigned int *)(a3 + 32);
  v10 = *(void **)(a3 + 40);
  v16 = v10;
  if ( (*(_DWORD *)(a1 + 136) & 1) != 0 )
  {
    if ( v10 )
    {
      Mdl = IoAllocateMdl(v10, 6 * **(_DWORD **)(a1 + 40), 0, 0, 0LL);
      v6 = Mdl;
      if ( !Mdl
        || ((MmProbeAndLockPages(Mdl, 0, IoWriteAccess), v9 = 1, (v6->MdlFlags & 5) == 0)
          ? (MappedSystemVa = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, 0x40000020u))
          : (MappedSystemVa = v6->MappedSystemVa),
            !MappedSystemVa) )
      {
        HIDWORD(v17) = -1073741670;
        goto LABEL_15;
      }
      v16 = MappedSystemVa;
    }
    if ( (MiFlags & 4) == 0 )
      MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 1uLL);
    v8 = 1;
    KeGenericCallDpc((__int64)MiApplyImageHotPatchDpc, (__int64)v15);
  }
  else
  {
    HIDWORD(v17) = RtlApplyHotPatch(
                     *(_QWORD *)(a1 + 72),
                     *(_QWORD *)(a1 + 8),
                     *(_QWORD *)(a1 + 80),
                     *(_DWORD *)(a1 + 36),
                     &v17,
                     Priority,
                     v14,
                     *(_QWORD *)(a2 + 72),
                     *(_QWORD *)(a2 + 8),
                     0LL,
                     0,
                     0LL,
                     a4,
                     a5,
                     1,
                     *(PRTL_BITMAP *)(a1 + 40),
                     (__int64)v10);
  }
  *(_DWORD *)(a3 + 32) = v17;
LABEL_15:
  if ( MappedSystemVa )
    MmUnmapLockedPages(MappedSystemVa, v6);
  if ( v6 )
  {
    if ( v9 )
      MmUnlockPages(v6);
    IoFreeMdl(v6);
  }
  if ( v8 && (MiFlags & 4) == 0 )
    MmUnlockPagableImageSection(ExPageLockHandle);
  return HIDWORD(v17);
}
