/*
 * XREFs of _wtoi @ 0x140195DC0
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x140709798 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x140195DE0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
