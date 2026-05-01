/*
 * XREFs of ?GetScrollIncrement@CSwitchItemGrid@@UEAAHXZ @ 0x180082D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwitchItemGrid::GetScrollIncrement(CSwitchItemGrid *this)
{
  return (unsigned int)(*((_DWORD *)this + 17) + *((_DWORD *)this + 134));
}
