/*
 * XREFs of ?GetPostProcessorTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x18000E050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::GetPostProcessorTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 5);
}
