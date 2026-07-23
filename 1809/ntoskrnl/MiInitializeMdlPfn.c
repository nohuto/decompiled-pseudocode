/*
 * XREFs of MiInitializeMdlPfn @ 0x1400113B8
 * Callers:
 *     MiInitializeMdlPages @ 0x140011258 (MiInitializeMdlPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x1402AA4FC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1402C303C (MmAllocateSecureKernelPages.c)
 *     MiCreateEnclaveRegions @ 0x1409BB34C (MiCreateEnclaveRegions.c)
 * Callees:
 *     MiAbortCombineScan @ 0x140082658 (MiAbortCombineScan.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  __int64 v2; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 24);
  if ( (a2 & 0x100) != 0 )
  {
    v7 = v2 & 0xC000000000000000uLL;
    *(_QWORD *)(a1 + 24) = v7;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v2 & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    v5 = 0LL;
    if ( (a2 & 0x80000200) == 0 )
      v5 = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 8) = v5;
    v6 = *(_QWORD *)(a1 + 24) & 0xBFFFFFFFFFFFFFFFuLL;
    if ( a2 >= 0 )
      v6 = *(_QWORD *)(a1 + 24) | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = v6;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
      if ( (a2 & 0x20000) == 0 )
        _InterlockedIncrement64(&qword_14043B240);
    }
    LOBYTE(v7) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v7;
    if ( a2 < 0 )
    {
      v7 = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      *(_QWORD *)(a1 + 40) = v7;
    }
  }
  *(_BYTE *)(a1 + 35) &= 0xF8u;
  *(_DWORD *)(a1 + 36) = 0;
  return v7;
}
