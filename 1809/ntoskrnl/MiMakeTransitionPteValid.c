/*
 * XREFs of MiMakeTransitionPteValid @ 0x14002CF4C
 * Callers:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x14002E010 (MiFinishHardFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoCombine @ 0x14007BF64 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x1402B17AC (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiMakeTransitionPteValid(__int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // r9
  unsigned __int64 v3; // rdx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = v1;
  if ( qword_14043B180 )
  {
    if ( (v1 & 0x10) != 0 )
      v3 = v1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v1 & ~qword_14043B180;
  }
  return MiMakeValidPte(v2, (v3 >> 12) & 0xFFFFFFFFFLL, (v1 >> 5) & 0x1F);
}
