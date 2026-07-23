/*
 * XREFs of PnprInitializeMappingReserve @ 0x140836230
 * Callers:
 *     PnprAllocateMappingReserves @ 0x140835898 (PnprAllocateMappingReserves.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     MmAllocateMappingAddress @ 0x1406FA580 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x1406FD750 (MmFreeMappingAddress.c)
 */

__int64 __fastcall PnprInitializeMappingReserve(__int16 a1, __int64 a2)
{
  unsigned int v4; // esi
  PVOID MappingAddress; // rax
  void *v6; // rdi
  int v7; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  PMDL Mdl; // rax

  v4 = 0;
  MappingAddress = MmAllocateMappingAddress(0x10000uLL, 0x51706E50u);
  v6 = MappingAddress;
  if ( MappingAddress )
  {
    Mdl = IoAllocateMdl(MappingAddress, 0x10000u, 0, 0, 0LL);
    if ( Mdl )
    {
      *(_QWORD *)a2 = Mdl;
      *(_QWORD *)(a2 + 8) = v6;
      *(_WORD *)(a2 + 16) = a1;
      return v4;
    }
    MmFreeMappingAddress(v6, 0x51706E50u);
    v7 = 3934;
  }
  else
  {
    v7 = 3919;
  }
  v8 = PnprContext;
  v4 = -1073741670;
  v9 = *(_DWORD *)(PnprContext + 20984);
  if ( !v9 )
    v9 = v7;
  *(_DWORD *)(PnprContext + 20984) = v9;
  v10 = *(_DWORD *)(v8 + 20988);
  if ( !v10 )
    v10 = 10;
  *(_DWORD *)(v8 + 20988) = v10;
  return v4;
}
