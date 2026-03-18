/*
 * XREFs of _wtoi @ 0x140195C60
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140708518 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x140195C80 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
