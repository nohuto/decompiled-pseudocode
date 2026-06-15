/*
 * XREFs of ?GetTsSessionId@CProcess@@UEAAKXZ @ 0x18001AC90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::GetTsSessionId(CProcess *this)
{
  return *((unsigned int *)this + 45);
}
