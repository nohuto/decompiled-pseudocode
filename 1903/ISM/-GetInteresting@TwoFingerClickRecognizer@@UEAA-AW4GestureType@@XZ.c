/*
 * XREFs of ?GetInteresting@TwoFingerClickRecognizer@@UEAA?AW4GestureType@@XZ @ 0x18010DB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TwoFingerClickRecognizer::GetInteresting(__int64 a1)
{
  __int16 v1; // r8
  int v2; // edx
  int result; // eax

  v1 = *(_WORD *)(a1 + 16);
  v2 = ((v1 & 8) << 7) | 0x800;
  if ( (v1 & 1) == 0 )
    v2 = (v1 & 8) << 7;
  result = v2 | 0x1000;
  if ( (v1 & 2) == 0 )
    return v2;
  return result;
}
