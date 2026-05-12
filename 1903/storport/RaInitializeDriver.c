/*
 * XREFs of RaInitializeDriver @ 0x1C006BE40
 * Callers:
 *     StorPortInitialize @ 0x1C001A7A0 (StorPortInitialize.c)
 * Callees:
 *     RaidAddPortDriver @ 0x1C001AA08 (RaidAddPortDriver.c)
 *     RaDuplicateUnicodeString @ 0x1C001AA88 (RaDuplicateUnicodeString.c)
 *     McGenEventRegister @ 0x1C0023278 (McGenEventRegister.c)
 *     StorpRegisterTraceLogging @ 0x1C006E104 (StorpRegisterTraceLogging.c)
 */

__int64 __fastcall RaInitializeDriver(__int64 a1, __int64 a2, void *a3, ULONGLONG *a4)
{
  if ( MEMORY[0xFFFFF780000003C6] )
    UseQPCTime = 1;
  if ( _InterlockedIncrement(&g_RaidEtwRefCount) == 1 )
  {
    McGenEventRegister((LPCGUID)a1, (PETWENABLECALLBACK)a2, a3, a4);
    StorpRegisterTraceLogging();
  }
  *(_QWORD *)(a2 + 112) = RaDriverCreateIrp;
  *(_QWORD *)(a2 + 128) = RaDriverCloseIrp;
  *(_QWORD *)(a2 + 224) = RaDriverDeviceControlIrp;
  *(_QWORD *)(a2 + 232) = RaDriverScsiIrp;
  *(_QWORD *)(a2 + 328) = RaDriverPnpIrp;
  *(_QWORD *)(a2 + 288) = RaDriverPowerIrp;
  *(_QWORD *)(a2 + 296) = RaDriverSystemControlIrp;
  *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL) = RaDriverAddDevice;
  *(_QWORD *)(a2 + 96) = 0LL;
  *(_QWORD *)(a2 + 104) = RaDriverUnload;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  RaDuplicateUnicodeString((PUNICODE_STRING)(a1 + 40), (PCUNICODE_STRING)a4, (__int64)a3, a2);
  RaidAddPortDriver((__int64)a3, a1);
  return 0LL;
}
