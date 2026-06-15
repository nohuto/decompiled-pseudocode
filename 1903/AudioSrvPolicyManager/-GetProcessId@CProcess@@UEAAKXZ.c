/*
 * XREFs of ?GetProcessId@CProcess@@UEAAKXZ @ 0x180017F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetProcessId(CProcess *this)
{
  return *((unsigned int *)this + 44);
}
