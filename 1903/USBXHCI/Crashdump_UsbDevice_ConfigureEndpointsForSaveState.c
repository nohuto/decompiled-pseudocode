/*
 * XREFs of Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C0043DB8
 * Callers:
 *     Crashdump_Cleanup @ 0x1C003FA30 (Crashdump_Cleanup.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C0018FFC (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C001903C (Endpoint_GetMaxPrimaryStreams.c)
 *     Crashdump_Command_SendCommand @ 0x1C00427CC (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpointsForSaveState(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdi
  unsigned int i; // esi
  __int64 v5; // r10
  __int64 DequeuePointer; // rax
  int v7; // edx
  __int64 v8; // r10
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v10 = 0LL;
  v2 = -1073741823;
  v11 = 0LL;
  v3 = 176LL;
  for ( i = 1; i < 0x20; ++i )
  {
    v5 = *(_QWORD *)(v3 + *(_QWORD *)(a1 + 24));
    if ( *(_QWORD *)(v3 + a1 - 56) )
    {
      LODWORD(v11) = 0;
      DequeuePointer = Endpoint_GetDequeuePointer(v5, 1);
      v7 = *(unsigned __int8 *)(a1 + 56);
      v10 = DequeuePointer;
      HIDWORD(v11) = ((i & 0x1F | (v7 << 8)) << 16) | 0x4000;
      if ( (unsigned int)Endpoint_GetMaxPrimaryStreams(v8) )
        LODWORD(v11) = 0x10000;
      v2 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v10, 0LL);
      if ( v2 < 0 )
        break;
    }
    v3 += 8LL;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpointsForSaveState: end 0x%X\n", v2);
  return (unsigned int)v2;
}
