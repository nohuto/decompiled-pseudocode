/*
 * XREFs of NtOpenThread @ 0x140678000
 * Callers:
 *     <none>
 * Callees:
 *     PsOpenThread @ 0x140678030 (PsOpenThread.c)
 */

NTSTATUS __stdcall NtOpenThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PCLIENT_ID ClientId)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenThread(
           (int)ThreadHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)ClientId,
           PreviousMode,
           PreviousMode);
}
