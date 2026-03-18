/*
 * XREFs of ?MasterInputThreadDeactivated@CBaseProcessor@@UEAAXXZ @ 0x1C00AEAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBaseProcessor::MasterInputThreadDeactivated(CBaseProcessor *this)
{
  *((_DWORD *)this + 3) = 1;
}
