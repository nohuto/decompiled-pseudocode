/*
 * XREFs of _wtoi @ 0x1401A0450
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140711A20 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1407333E0 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1401A0470 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
