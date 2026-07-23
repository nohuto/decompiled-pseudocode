/*
 * XREFs of RtlGetSystemBootStatus @ 0x1407598B0
 * Callers:
 *     PopProcessBootstat @ 0x1409FBBBC (PopProcessBootstat.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407599E8 (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __cdecl RtlGetSystemBootStatus(
        RTL_BSD_ITEM_TYPE BootStatusInformationClass,
        PVOID DataBuffer,
        ULONG DataLength,
        PULONG ReturnLength)
{
  _DWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  PVOID v6; // [rsp+28h] [rbp-20h]
  ULONG v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v5[1] = 0;
  v8 = 0;
  v7 = DataLength;
  v5[0] = BootStatusInformationClass;
  v6 = DataBuffer;
  return RtlpSystemBootStatusRequest(31LL, v5, 1LL, ReturnLength);
}
