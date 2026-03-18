/*
 * XREFs of UserIsWindowOnDesktopAndComposed @ 0x1C015EDD8
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C013E734 (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015E650 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowOnDesktopAndComposed(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = a2;
  v5 = 0;
  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v6 && v4 == ***(_QWORD ***)(*(_QWORD *)(v6 + 24) + 8LL) )
    return (unsigned int)IsWindowDesktopComposed(v6) != 0;
  return v5;
}
