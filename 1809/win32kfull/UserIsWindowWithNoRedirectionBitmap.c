/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C011AACC
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00C83F0 (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00CC540 (GreTransferDwmStateToSpriteState.c)
 *     GreGetDxSharedSurface @ 0x1C011A7F8 (GreGetDxSharedSurface.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  if ( v3 )
    return (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 0x20) != 0;
  return v2;
}
