/*
 * XREFs of Crashdump_UsbDevice_SendResetDeviceCommand @ 0x1C003F40C
 * Callers:
 *     Crashdump_UsbDevice_ReConfigureOnPortReset @ 0x1C003EDE8 (Crashdump_UsbDevice_ReConfigureOnPortReset.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x1C003D034 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SendResetDeviceCommand(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edi
  int v4; // r8d
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendResetDeviceCommand: begin\n");
  v2 = *(_QWORD *)(a1 + 16);
  v7 = 0LL;
  v6 = 0LL;
  HIDWORD(v7) = (*(unsigned __int8 *)(a1 + 56) << 24) | 0x4400;
  v3 = Crashdump_Command_SendCommand(v2, (__int64)&v6, 0LL);
  if ( v3 >= 0 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL) >> 27;
    if ( v4 != 1 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After reset device command, slot state is not default, it is %u\n",
        *(unsigned __int8 *)(a1 + 56),
        v4);
      v3 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Reset device command failed\n", *(unsigned __int8 *)(a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendResetDeviceCommand: end 0x%X\n", v3);
  return (unsigned int)v3;
}
