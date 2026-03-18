/*
 * XREFs of Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C003E61C
 * Callers:
 *     Crashdump_Cleanup @ 0x1C003A2B0 (Crashdump_Cleanup.c)
 * Callees:
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_GetMaxPrimaryStreams @ 0x1C001619C (Endpoint_GetMaxPrimaryStreams.c)
 *     Crashdump_Command_SendCommand @ 0x1C003D034 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpointsForSaveState(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // r10
  __int64 DequeuePointer; // rax
  int v7; // edx
  __int64 v8; // r10
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v2 = -1073741823;
  v3 = 1;
  v4 = 176LL;
  do
  {
    v5 = *(_QWORD *)(v4 + *(_QWORD *)(a1 + 24));
    if ( *(_QWORD *)(v4 + a1 - 56) )
    {
      v11 = 0LL;
      DequeuePointer = Endpoint_GetDequeuePointer(v5, 1);
      v7 = *(unsigned __int8 *)(a1 + 56);
      v10 = DequeuePointer;
      HIDWORD(v11) = ((v3 & 0x1F | (v7 << 8)) << 16) | 0x4000;
      if ( (unsigned int)Endpoint_GetMaxPrimaryStreams(v8) )
        LODWORD(v11) = (unsigned __int16)v11 | 0x10000;
      v2 = Crashdump_Command_SendCommand(*(_QWORD *)(a1 + 16), (__int64)&v10, 0LL);
      if ( v2 < 0 )
        break;
    }
    ++v3;
    v4 += 8LL;
  }
  while ( v3 < 0x20 );
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpointsForSaveState: end 0x%X\n", v2);
  return (unsigned int)v2;
}
