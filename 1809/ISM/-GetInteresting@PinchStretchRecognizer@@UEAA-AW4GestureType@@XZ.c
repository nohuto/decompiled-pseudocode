/*
 * XREFs of ?GetInteresting@PinchStretchRecognizer@@UEAA?AW4GestureType@@XZ @ 0x1800D6AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PinchStretchRecognizer::GetInteresting(__int64 a1)
{
  return (unsigned __int8)(*(_BYTE *)(a1 + 56) & 2) << 6;
}
