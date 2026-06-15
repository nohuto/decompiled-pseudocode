/*
 * XREFs of ?AceType@CAccessAce@CDacl@ATL@@UEBAEXZ @ 0x180034210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CDacl::CAccessAce::AceType(ATL::CDacl::CAccessAce *this)
{
  return *((_BYTE *)this + 144) == 0;
}
