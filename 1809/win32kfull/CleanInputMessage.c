/*
 * XREFs of CleanInputMessage @ 0x1C00D5D60
 * Callers:
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     SuspendThreadQueue @ 0x1C01167E0 (SuspendThreadQueue.c)
 * Callees:
 *     _FreeTouchInputInfo @ 0x1C01CB7C0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01FCF30 (_FreeGestureInfo.c)
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
