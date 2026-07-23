/*
 * XREFs of WRITE_REGISTER_USHORT @ 0x14013E800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_REGISTER_USHORT(volatile USHORT *Register, USHORT Value)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *Register = Value;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
