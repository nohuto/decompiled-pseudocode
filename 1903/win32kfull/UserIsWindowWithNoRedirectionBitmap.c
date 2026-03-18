/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C012285C
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C012258C (GreGetDxSharedSurface.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v5 )
    return (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 26LL) & 0x20) != 0;
  return v4;
}
