/*
 * XREFs of ?GetInteresting@TwoFingerDragRecognizer@@UEAA?AW4GestureType@@XZ @ 0x18010D700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TwoFingerDragRecognizer::GetInteresting(__int64 a1)
{
  __int16 v1; // dx
  int result; // eax

  v1 = *(_WORD *)(a1 + 16);
  result = ((v1 & 1) << 13) | 0x400;
  if ( (v1 & 4) == 0 )
    return (v1 & 1) << 13;
  return result;
}
