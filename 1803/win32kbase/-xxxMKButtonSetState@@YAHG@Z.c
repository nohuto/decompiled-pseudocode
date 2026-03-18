/*
 * XREFs of ?xxxMKButtonSetState@@YAHG@Z @ 0x1C010AD10
 * Callers:
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1C010ACB0 (-xxxMKButtonClick@@YAHG@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C010B410 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     MouseButtonAction @ 0x1C012E7B0 (MouseButtonAction.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013F790 (ApiSetEditionPostAccessibility.c)
 */

__int64 __fastcall xxxMKButtonSetState(__int16 a1)
{
  BOOL v1; // edi
  __int16 v2; // bx

  v1 = a1 != 0;
  if ( a1 )
    v2 = gwMKButtonState & ~gwMKCurrentButton;
  else
    v2 = gwMKButtonState | gwMKCurrentButton;
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)gwMKButtonState) & 1) != 0 )
    MouseButtonAction(1LL, a1 != 0);
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)gwMKButtonState) & 2) != 0 )
    MouseButtonAction(2LL, v1);
  gwMKButtonState = v2;
  ApiSetEditionPostAccessibility(3LL);
  return 0LL;
}
