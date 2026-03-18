/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C01036A0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00676D0 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _VisrgnFromWindow @ 0x1C01036E4 (_VisrgnFromWindow.c)
 */

__int64 __fastcall UserVisrgnFromHwnd(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 result; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = a3;
  result = HMValidateHandleNoSecure(v4, a2, a3);
  if ( result )
    return VisrgnFromWindow(result, v5, a1);
  return result;
}
