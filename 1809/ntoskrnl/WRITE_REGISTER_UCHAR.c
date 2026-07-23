/*
 * XREFs of WRITE_REGISTER_UCHAR @ 0x14013E7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_REGISTER_UCHAR(volatile UCHAR *Register, UCHAR Value)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *Register = Value;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
