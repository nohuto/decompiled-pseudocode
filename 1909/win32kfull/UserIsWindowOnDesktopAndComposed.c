/*
 * XREFs of UserIsWindowOnDesktopAndComposed @ 0x1C015F274
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C015F770 (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowOnDesktopAndComposed(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rax

  v3 = a2;
  v4 = 0;
  LOBYTE(a2) = 1;
  v5 = HMValidateHandleNoSecure(a1, a2, a3);
  if ( v5 && v3 == ***(_QWORD ***)(*(_QWORD *)(v5 + 24) + 8LL) )
    return (unsigned int)IsWindowDesktopComposed(v5) != 0;
  return v4;
}
