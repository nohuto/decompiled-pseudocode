/*
 * XREFs of ?GetCaptureTarget@MPCInputProviderBase@@UEBAPEAUIMPCTarget@@XZ @ 0x18000E710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCTarget *__fastcall MPCInputProviderBase::GetCaptureTarget(MPCInputProviderBase *this)
{
  return (struct IMPCTarget *)*((_QWORD *)this + 571);
}
