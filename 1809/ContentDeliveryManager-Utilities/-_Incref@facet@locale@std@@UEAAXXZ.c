/*
 * XREFs of ?_Incref@facet@locale@std@@UEAAXXZ @ 0x180024030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall std::locale::facet::_Incref(std::locale::facet *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
}
