/*
 * XREFs of CleanInputMessage @ 0x1C0105424
 * Callers:
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C00FC040 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01DF520 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0213F30 (_FreeGestureInfo.c)
 */

__int64 __fastcall CleanInputMessage(int a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(a1 - 576);
  if ( a1 == 576 )
    result = FreeTouchInputInfo(*(_QWORD *)(a2 + 40), 1LL);
  if ( a1 == 281 )
    return FreeGestureInfo(*(_QWORD *)(a2 + 40), 1LL);
  return result;
}
