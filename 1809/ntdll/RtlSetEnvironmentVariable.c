/*
 * XREFs of RtlSetEnvironmentVariable @ 0x180057640
 * Callers:
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18005565C (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlpResetDriveEnvironment @ 0x18005822C (RtlpResetDriveEnvironment.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x180057690 (RtlSetEnvironmentVar.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentVariable(PVOID *Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  wchar_t *Buffer; // r9
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
