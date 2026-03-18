/*
 * XREFs of MiMakeTransitionPteValid @ 0x140120AD0
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoCombine @ 0x140141F74 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002AC60 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // r9
  unsigned __int64 v3; // rdx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = v1;
  if ( qword_140465B00 )
  {
    if ( (v1 & 0x10) != 0 )
      v3 = v1 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v1 & ~qword_140465B00;
  }
  return MiMakeValidPte(v2, (v3 >> 12) & 0xFFFFFFFFFLL, (v1 >> 5) & 0x1F);
}
