/*
 * XREFs of RaidRemapScatterGatherList @ 0x1C0078008
 * Callers:
 *     StorPortGetScatterGatherListVrfy @ 0x1C00782D0 (StorPortGetScatterGatherListVrfy.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RaidRemapScatterGatherList(unsigned int *VirtualAddress, __int64 a2)
{
  unsigned __int64 v4; // rax
  struct _MDL *Mdl; // rax
  struct _MDL *v6; // rdi
  PVOID v7; // rsi

  if ( *(_QWORD *)(a2 + 120) )
    return *(PVOID *)(a2 + 128);
  v4 = 24LL * *VirtualAddress;
  if ( v4 <= 0xFFFFFFFF && (int)v4 + 12 >= (unsigned int)v4 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, (int)v4 + 12, 0, 0, 0LL);
    v6 = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, IoModifyAccess);
      v7 = MmMapLockedPagesSpecifyCache(v6, 0, MmCached, 0LL, 0, 0x40000010u);
      if ( v7 )
      {
        MmProtectMdlSystemAddress(v6, 2u);
        *(_QWORD *)(a2 + 120) = v6;
        *(_QWORD *)(a2 + 128) = v7;
        return v7;
      }
      MmUnlockPages(v6);
      IoFreeMdl(v6);
    }
    *(_QWORD *)(a2 + 120) = 0LL;
  }
  return 0LL;
}
