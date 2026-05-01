/*
 * XREFs of ?ComputeAppVisualAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@0@Z @ 0x1803AC6D4
 * Callers:
 *     s_GetAlignedRectsForApp @ 0x18032A5BC (s_GetAlignedRectsForApp.c)
 *     ?SetRect@CDropFeedbackItem@@UEAAXPEBUtagRECT@@@Z @ 0x180377AF0 (-SetRect@CDropFeedbackItem@@UEAAXPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeAppVisualAlignment(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( a2[1] != a1[1] )
    return 2LL;
  if ( a2[3] != a1[3] )
    return 2LL;
  if ( a2[2] != a1[2] )
    return 2LL;
  result = 3LL;
  if ( *a2 >= *a1 )
    return 2LL;
  return result;
}
