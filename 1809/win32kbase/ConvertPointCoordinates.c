/*
 * XREFs of ConvertPointCoordinates @ 0x1C01561C4
 * Callers:
 *     SynthesizeMitTouchInput @ 0x1C0156248 (SynthesizeMitTouchInput.c)
 *     ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z @ 0x1C01596B4 (-SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z.c)
 * Callees:
 *     ?ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z @ 0x1C015606C (-ConvertCoordinatesWithRoundingNoBounding@@YAHJJJJJPEAJ@Z.c)
 */

__int64 __fastcall ConvertPointCoordinates(__int64 a1, int *a2, int *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v8; // esi
  int v9; // [rsp+54h] [rbp+Ch]
  __int64 plResult; // [rsp+58h] [rbp+10h] BYREF

  v9 = HIDWORD(a1);
  result = ConvertCoordinatesWithRoundingNoBounding(*a2, a2[2], *a3, a3[2], a1, (LONG *)&plResult);
  v8 = result;
  if ( (_DWORD)result )
  {
    ConvertCoordinatesWithRoundingNoBounding(a2[1], a2[3], a3[1], a3[3], v9, (LONG *)&plResult + 1);
    *a4 = plResult;
    return v8;
  }
  return result;
}
