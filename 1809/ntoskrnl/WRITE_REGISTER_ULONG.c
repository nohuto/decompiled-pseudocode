/*
 * XREFs of WRITE_REGISTER_ULONG @ 0x14013E7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall WRITE_REGISTER_ULONG(volatile ULONG *Register, ULONG Value)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *Register = Value;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
