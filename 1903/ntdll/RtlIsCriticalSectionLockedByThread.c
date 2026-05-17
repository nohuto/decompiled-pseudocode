/*
 * XREFs of RtlIsCriticalSectionLockedByThread @ 0x18002A4D0
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_180029EFC @ 0x180029EFC (sub_180029EFC.c)
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_18002AC94 @ 0x18002AC94 (sub_18002AC94.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     RtlSetEnvironmentVar @ 0x18005CDD0 (RtlSetEnvironmentVar.c)
 *     sub_180076EC8 @ 0x180076EC8 (sub_180076EC8.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlIsCriticalSectionLockedByThread(__int64 a1)
{
  return *(HANDLE *)(a1 + 16) == NtCurrentTeb()->ClientId.UniqueThread;
}
