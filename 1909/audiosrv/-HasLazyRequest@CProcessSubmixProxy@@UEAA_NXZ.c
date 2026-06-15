/*
 * XREFs of ?HasLazyRequest@CProcessSubmixProxy@@UEAA_NXZ @ 0x1800EF6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CProcessSubmixProxy::HasLazyRequest(CProcessSubmixProxy *this)
{
  return *((_DWORD *)this + 24) != 0;
}
