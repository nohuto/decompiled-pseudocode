/*
 * XREFs of RtlSetSystemBootStatus @ 0x180084790
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800847C0 @ 0x1800847C0 (sub_1800847C0.c)
 */

NTSTATUS __cdecl RtlSetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  RTL_BSD_ITEM_TYPE v5; // [rsp+20h] [rbp-28h] BYREF
  PVOID v6; // [rsp+28h] [rbp-20h]
  ULONG v7; // [rsp+30h] [rbp-18h]

  v7 = DataLength;
  v5 = BootStatusInformationClass;
  v6 = DataBuffer;
  return sub_1800847C0(32LL, &v5);
}
