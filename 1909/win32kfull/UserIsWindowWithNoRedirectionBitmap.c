/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C00FD85C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     GreGetDxSharedSurface @ 0x1C00FD58C (GreGetDxSharedSurface.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015F770 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  LOBYTE(a2) = 1;
  v4 = HMValidateHandleNoSecure(a1, a2, a3);
  if ( v4 )
    return (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 26LL) & 0x20) != 0;
  return v3;
}
