/*
 * XREFs of ?GetDpiScale@DWMCursor@@UEAAIXZ @ 0x18000FCE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursor::GetDpiScale(DWMCursor *this)
{
  return *((unsigned int *)this + 24);
}
