/*
 * XREFs of MiMakeTransitionPteValid @ 0x1400CBA2C
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MiResolveProtoCombine @ 0x1401424B4 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x1402D6EE4 (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rdx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = v1;
  if ( qword_140465800 )
  {
    if ( (v1 & 0x10) != 0 )
      v3 = v1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v1 & ~qword_140465800;
  }
  return MiMakeValidPte(v2, (v3 >> 12) & 0xFFFFFFFFFLL, (v1 >> 5) & 0x1F);
}
