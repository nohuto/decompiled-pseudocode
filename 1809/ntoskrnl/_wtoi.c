/*
 * XREFs of _wtoi @ 0x140195C80
 * Callers:
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     WmipFindISinGEbyName @ 0x1407084F8 (WmipFindISinGEbyName.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 * Callees:
 *     _wtol @ 0x140195CA0 (_wtol.c)
 */

int __cdecl wtoi(const wchar_t *Str)
{
  return wtol(Str);
}
