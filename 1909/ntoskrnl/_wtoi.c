/*
 * XREFs of _wtoi @ 0x1401A0B70
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140713800 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140735640 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x1401A0B90 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
