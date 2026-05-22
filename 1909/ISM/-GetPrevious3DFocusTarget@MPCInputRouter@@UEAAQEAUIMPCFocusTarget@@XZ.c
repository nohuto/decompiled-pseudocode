/*
 * XREFs of ?GetPrevious3DFocusTarget@MPCInputRouter@@UEAAQEAUIMPCFocusTarget@@XZ @ 0x18000E0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IMPCFocusTarget *__fastcall MPCInputRouter::GetPrevious3DFocusTarget(MPCInputRouter *this)
{
  return (struct IMPCFocusTarget *)*((_QWORD *)this + 4);
}
