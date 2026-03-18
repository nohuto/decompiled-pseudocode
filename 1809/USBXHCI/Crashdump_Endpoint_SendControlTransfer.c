/*
 * XREFs of Crashdump_Endpoint_SendControlTransfer @ 0x1C003D9C0
 * Callers:
 *     Crashdump_SendUrb @ 0x1C003B3A0 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x1C003B490 (Crashdump_SendUrbAsync.c)
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x1C003DF28 (Crashdump_UsbDevice_ChangePortFeature.c)
 *     Crashdump_UsbDevice_Configure @ 0x1C003E0F0 (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x1C003E6FC (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x1C003E890 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C003F58C (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x1C003DBC0 (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendControlTransfer(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int v8; // eax
  int v9; // r10d
  __int64 v10; // rdi
  unsigned int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: begin\n");
  v8 = *(_DWORD *)(a1 + 160);
  v9 = *(unsigned __int8 *)a2 >> 7;
  if ( v8 )
    v10 = *(_QWORD *)(a1 + 112);
  else
    v10 = *(_QWORD *)(a1 + 88);
  v11 = 1;
  *(_QWORD *)v10 = 0LL;
  v12 = -(__int64)(v8 != 0) & 0xFFFFFFFFFFFFFFE8uLL;
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)v10 = *a2;
  *(_DWORD *)(v10 + 8) = *(_DWORD *)(v10 + 8) & 0xFFFE0000 | 8;
  *(_DWORD *)(v10 + 12) = *(_DWORD *)(v10 + 12) & 0xFFFF03BF | 0x840;
  if ( a3 )
  {
    v11 = 2;
    *(_QWORD *)(v10 + 16) = 0LL;
    *(_QWORD *)(v10 + 24) = 0LL;
    v13 = *(_DWORD *)(v10 + 28) & 0xFFFE0FFF | (v9 << 16) | 0xC00;
    *(_DWORD *)(v10 + 28) = v13;
    *(_QWORD *)(v10 + 16) = *a4;
    v14 = *(_DWORD *)(v10 + 24) & 0xFFC00000;
    *(_DWORD *)(v10 + 28) = v13 | 1;
    *(_DWORD *)(v10 + 24) = a3 & 0x1FFFF | v14;
  }
  v15 = v10 + 16LL * v11;
  v16 = v11 + 1;
  *(_QWORD *)v15 = 0LL;
  v17 = v10 + 16LL * v16;
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_DWORD *)(v15 + 12) = *(_DWORD *)(v15 + 12) & 0xFFFE13FF | ((v9 ^ 1) << 16) | 0x1011;
  *(_QWORD *)v17 = 0LL;
  *(_QWORD *)(v17 + 8) = 0LL;
  LODWORD(v15) = *(_DWORD *)(v17 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v17 + 12) = v15;
  v18 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v17 + 8) &= 0x3FFFFFu;
  *(_QWORD *)v17 = v18;
  *(_DWORD *)(v17 + 12) = v15 | 0x21;
  v19 = v10 + 16LL * (v16 + 1);
  *(_QWORD *)v19 = 0LL;
  *(_QWORD *)(v19 + 8) = 0LL;
  LODWORD(v15) = *(_DWORD *)(v19 + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v19 + 12) = v15;
  *(_QWORD *)v19 = *(_QWORD *)(v12 + a1 + 104);
  *(_DWORD *)(v19 + 12) = v15 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a1 + 160) == 0;
  *(_BYTE *)(v10 + 12) ^= 1u;
  _InterlockedOr(v23, 0);
  v20 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
  *(_DWORD *)(v10 + 12) &= ~1u;
  v21 = v20;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: end 0x%X\n", v20);
  return v21;
}
