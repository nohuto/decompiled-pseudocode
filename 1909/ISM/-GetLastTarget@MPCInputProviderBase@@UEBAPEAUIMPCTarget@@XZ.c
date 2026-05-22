/*
 * XREFs of ?GetLastTarget@MPCInputProviderBase@@UEBAPEAUIMPCTarget@@XZ @ 0x18000E7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCTarget *__fastcall MPCInputProviderBase::GetLastTarget(MPCInputProviderBase *this)
{
  return (struct IMPCTarget *)*((_QWORD *)this + 572);
}
