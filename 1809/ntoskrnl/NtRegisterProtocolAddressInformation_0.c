/*
 * XREFs of NtRegisterProtocolAddressInformation_0 @ 0x140194C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRegisterProtocolAddressInformation_0(
        HANDLE ResourceManager,
        PCRM_PROTOCOL_ID ProtocolId,
        ULONG ProtocolInformationSize,
        PVOID ProtocolInformation,
        ULONG CreateOptions)
{
  return NtRegisterProtocolAddressInformation(
           ResourceManager,
           ProtocolId,
           ProtocolInformationSize,
           ProtocolInformation,
           CreateOptions);
}
