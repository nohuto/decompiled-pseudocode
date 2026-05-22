/*
 * XREFs of ?GetLastHitTestedTarget@MPCInputProviderBase@@UEBAPEAUIMPCTarget@@XZ @ 0x1800F4D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCTarget *__fastcall MPCInputProviderBase::GetLastHitTestedTarget(MPCInputProviderBase *this)
{
  return (struct IMPCTarget *)*((_QWORD *)this + 464);
}
