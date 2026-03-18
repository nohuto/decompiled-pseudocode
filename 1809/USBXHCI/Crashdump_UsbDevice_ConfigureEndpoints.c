/*
 * XREFs of Crashdump_UsbDevice_ConfigureEndpoints @ 0x1C003E3B0
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x1C003E0F0 (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Crashdump_Command_SendCommand @ 0x1C003D034 (Crashdump_Command_SendCommand.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpoints(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r11
  __int64 *v4; // rsi
  unsigned int v5; // r9d
  unsigned int i; // r10d
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned int *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // edi
  int v19; // r8d
  __int64 v21; // [rsp+30h] [rbp-18h] BYREF
  __int64 v22; // [rsp+38h] [rbp-10h]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 472), 0, *(unsigned int *)(*a1 + 480));
  v3 = *(_QWORD *)(v2 + 472);
  v4 = a1 + 16;
  *(_DWORD *)(v3 + 4) |= 1u;
  v5 = 0;
  for ( i = 2; i < 0x20; ++i )
  {
    if ( ((1 << i) & 0xFFFFFFFC) != 0 )
    {
      v7 = *v4;
      if ( *v4 )
      {
        v8 = i - 1 + 2LL;
        if ( (*(_DWORD *)(*(_QWORD *)a1[1] + 100LL) & 4) != 0 )
          v9 = v8 << 6;
        else
          v9 = 32 * v8;
        v10 = (unsigned int *)(v3 + v9);
        v10[1] ^= (*(_DWORD *)(v7 + 52) ^ v10[1]) & 0x38;
        *((_WORD *)v10 + 3) = *(_WORD *)(v7 + 54);
        v10[1] ^= (*(_DWORD *)(v7 + 52) ^ v10[1]) & 6;
        *((_BYTE *)v10 + 5) = BYTE1(*(_DWORD *)(v7 + 52));
        *((_WORD *)v10 + 8) = *(_WORD *)(v7 + 64);
        if ( *(_BYTE *)(v7 + 128) )
          v11 = *(_QWORD *)(v7 + 136);
        else
          v11 = *(_QWORD *)(v7 + 24LL * *(unsigned int *)(v7 + 160) + 80);
        v12 = *v10;
        *((_QWORD *)v10 + 1) = v11;
        if ( (*(_DWORD *)(v7 + 48) & 0x7C00) != 0 )
        {
          v13 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
          v14 = v12 & 0xFFFF03FF | 0x8400;
        }
        else
        {
          v13 = v11 | 1;
          v14 = v12 & 0xFFFF03FF;
        }
        *v10 = v14;
        v5 = i;
        *((_QWORD *)v10 + 1) = v13;
        *(_DWORD *)(v3 + 4) |= 1 << i;
      }
    }
    ++v4;
  }
  v15 = v3 + 32 + ((*(_DWORD *)(*(_QWORD *)a1[1] + 100LL) & 4) != 0 ? 0x20 : 0);
  v16 = (v5 << 27) | *(_DWORD *)v15 & 0x7FFFFFF;
  *(_DWORD *)v15 = v16;
  *(_DWORD *)v15 = v16 ^ (v16 ^ *((_DWORD *)a1 + 20)) & 0x4000000;
  *(_BYTE *)(v15 + 7) = *((_BYTE *)a1 + 87);
  v17 = a1[2];
  v22 = 0LL;
  HIDWORD(v22) = (*((unsigned __int8 *)a1 + 56) << 24) | 0x3000;
  v21 = *(_QWORD *)(v2 + 464);
  v18 = Crashdump_Command_SendCommand(v17, (__int64)&v21, 0LL);
  if ( v18 >= 0 )
  {
    v19 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v19 != 3 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After reset device command, slot state is not configured, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v19);
      v18 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Configure Endpoint command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: end 0x%X\n", v18);
  return (unsigned int)v18;
}
