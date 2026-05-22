/*
 * XREFs of ?Get3DFocusTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x18000E0B0
 * Callers:
 *     ?GetInputSite@MPCFocusTarget@@WEI@EAAPEAVInputSite@@XZ @ 0x180037BA0 (-GetInputSite@MPCFocusTarget@@WEI@EAAPEAVInputSite@@XZ.c)
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::Get3DFocusTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 3);
}
