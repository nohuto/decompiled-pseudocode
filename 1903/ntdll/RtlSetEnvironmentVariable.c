/*
 * XREFs of RtlSetEnvironmentVariable @ 0x18005CD80
 * Callers:
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18005D8C0 @ 0x18005D8C0 (sub_18005D8C0.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x18005CDD0 (RtlSetEnvironmentVar.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVariable(PVOID *Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  const WCHAR *Buffer; // r9
  SIZE_T ValueLength; // rax

  Buffer = 0LL;
  if ( Value )
    ValueLength = (unsigned __int64)Value->Length >> 1;
  else
    ValueLength = 0LL;
  if ( Value )
    Buffer = Value->Buffer;
  return RtlSetEnvironmentVar(Environment, Name->Buffer, (unsigned __int64)Name->Length >> 1, Buffer, ValueLength);
}
