/*
 * XREFs of Crashdump_Cleanup @ 0x1C003FA30
 * Callers:
 *     <none>
 * Callees:
 *     Crashdump_Register_SaveStateForHybridSleep @ 0x1C0041A98 (Crashdump_Register_SaveStateForHybridSleep.c)
 *     Crashdump_Register_StopController @ 0x1C0041C74 (Crashdump_Register_StopController.c)
 *     Crashdump_Command_Stop @ 0x1C004296C (Crashdump_Command_Stop.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C0043778 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C0043DB8 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C0044D44 (Crashdump_UsbDevice_SuspendPort.c)
 */

__int64 __fastcall Crashdump_Cleanup(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int i; // esi
  __int64 v4; // rdi
  int v5; // eax
  bool v6; // zf
  __int64 j; // rdi
  int v8; // eax
  unsigned int v9; // esi
  int *v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  int v13; // edi
  __int64 v14; // rcx
  int v15; // eax
  signed __int32 v17[14]; // [rsp+0h] [rbp-38h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: begin\n");
  v2 = *(_DWORD *)(a1 + 536);
  for ( i = 0; i < v2; ++i )
  {
    v4 = 376LL * i;
    v5 = Crashdump_UsbDevice_Cleanup(v4 + *(_QWORD *)(a1 + 568));
    if ( v5 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup failed with error 0x%X\n", v5);
    if ( *(_BYTE *)(a1 + 625) && (int)Crashdump_UsbDevice_ConfigureEndpointsForSaveState(v4 + *(_QWORD *)(a1 + 568)) < 0 )
      *(_BYTE *)(a1 + 625) = 0;
    v2 = *(_DWORD *)(a1 + 536);
  }
  LODWORD(j) = v2 - 1;
  v6 = (_DWORD)j == 0;
  for ( j = (unsigned int)j; ; v6 = (_DWORD)j == 0 )
  {
    v9 = *(_DWORD *)(a1 + 4 * j + 544);
    if ( v6 )
      break;
    j = (unsigned int)(j - 1);
    v8 = Crashdump_UsbDevice_SuspendPort(*(_QWORD *)(a1 + 568) + 376LL * (unsigned int)j, v9);
    if ( v8 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_SuspendPort failed with error 0x%X\n", v8);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: begin: port %u\n", v9);
  v10 = (int *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * (v9 - 1 + 64LL));
  *v10 = *v10 & 0xE00C200 | 0x60;
  _InterlockedOr(v17, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: end 0x%X\n", 0);
  LOBYTE(v11) = 1;
  v12 = Crashdump_Command_Stop(a1 + 328, v11);
  if ( v12 < 0 )
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Command_Stop failed with error 0x%X\n", v12);
  v13 = Crashdump_Register_StopController(a1);
  if ( v13 >= 0 && *(_BYTE *)(a1 + 625) )
  {
    v14 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 128LL) + 32LL);
    *(_QWORD *)(v14 + 136) = *(_QWORD *)(a1 + 272);
    *(_DWORD *)(v14 + 112) = *(_DWORD *)(a1 + 280);
    *(_DWORD *)(v14 + 116) = *(_DWORD *)(a1 + 284);
    *(_DWORD *)(v14 + 120) = *(_DWORD *)(a1 + 288);
    *(_DWORD *)(v14 + 124) = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(v14 + 128) = *(_DWORD *)(a1 + 296);
    *(_QWORD *)(v14 + 144) = *(_QWORD *)(a1 + 304);
    *(_OWORD *)(v14 + 160) = *(_OWORD *)(a1 + 312);
    v15 = Crashdump_Register_SaveStateForHybridSleep(a1);
    v13 = v15;
    if ( v15 >= 0 )
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep succeeded.\n");
    else
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep failed with error 0x%X\n", v15);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: end\n");
  return (unsigned int)v13;
}
