/*
 * XREFs of RtlGetExtendedContextLength @ 0x180020CE0
 * Callers:
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 * Callees:
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     sub_18001ED88 @ 0x18001ED88 (sub_18001ED88.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength(ULONG ContextFlags, PULONG ContextLength)
{
  NTSTATUS result; // eax
  ULONG v3; // r10d
  ULONG *v4; // r11
  ULONG64 v5; // r8
  int v6; // [rsp+40h] [rbp+18h] BYREF

  result = sub_18001ED88(ContextFlags, &v6);
  v5 = 0LL;
  if ( result >= 0 )
  {
    if ( (v6 & 2) != 0 )
      v5 = MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8];
    return RtlGetExtendedContextLength2(v3, v4, v5);
  }
  return result;
}
