/*
 * XREFs of ?GetProcessId@CProcess@@UEAAKXZ @ 0x18001B150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetProcessId(CProcess *this)
{
  return *((unsigned int *)this + 44);
}
