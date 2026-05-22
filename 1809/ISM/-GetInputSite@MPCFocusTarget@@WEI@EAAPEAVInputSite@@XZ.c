/*
 * XREFs of ?GetInputSite@MPCFocusTarget@@WEI@EAAPEAVInputSite@@XZ @ 0x18000B2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCFocusTarget::GetInputSite(__int64 a1)
{
  return MPCInputRouter::Get3DFocusTarget((MPCInputRouter *)(a1 - 72));
}
