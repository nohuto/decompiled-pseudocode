/*
 * XREFs of RaInitializeDriver @ 0x1C006E660
 * Callers:
 *     StorPortInitialize @ 0x1C001E5F0 (StorPortInitialize.c)
 * Callees:
 *     RaidAddPortDriver @ 0x1C001E858 (RaidAddPortDriver.c)
 *     RaDuplicateUnicodeString @ 0x1C001E8C8 (RaDuplicateUnicodeString.c)
 *     McGenEventRegister @ 0x1C0020DA0 (McGenEventRegister.c)
 *     StorSqmInitialize @ 0x1C0020DE0 (StorSqmInitialize.c)
 *     StorpRegisterTraceLogging @ 0x1C006EBBC (StorpRegisterTraceLogging.c)
 */

__int64 __fastcall RaInitializeDriver(__int64 a1, _QWORD *a2, __int64 a3, const UNICODE_STRING *a4)
{
  ETWENABLECALLBACK *v9; // rdx
  const GUID *v10; // rcx
  void *v11; // r8
  ULONGLONG *v12; // r9

  if ( MEMORY[0xFFFFF780000003C6] )
    UseQPCTime = 1;
  if ( _InterlockedIncrement(&g_RaidSQMAndETWRefCount) == 1 )
  {
    if ( (int)StorSqmInitialize() >= 0 )
    {
      g_RaidSQMInitialized = 1;
      KeInitializeTimer(&g_RaidSQMTimer);
      KeInitializeDpc(&g_RaidSQMTimerDpc, (PKDEFERRED_ROUTINE)RaSqmTimerDpc, 0LL);
      KeSetCoalescableTimer(&g_RaidSQMTimer, (LARGE_INTEGER)-3000000000LL, 0, 0xEA60u, &g_RaidSQMTimerDpc);
    }
    McGenEventRegister(v10, v9, v11, v12);
    StorpRegisterTraceLogging();
  }
  a2[14] = RaDriverCreateIrp;
  a2[16] = RaDriverCloseIrp;
  a2[28] = RaDriverDeviceControlIrp;
  a2[29] = RaDriverScsiIrp;
  a2[41] = RaDriverPnpIrp;
  a2[36] = RaDriverPowerIrp;
  a2[37] = RaDriverSystemControlIrp;
  *(_QWORD *)(a2[6] + 8LL) = RaDriverAddDevice;
  a2[12] = 0LL;
  a2[13] = RaDriverUnload;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  RaDuplicateUnicodeString((PUNICODE_STRING)(a1 + 40), a4, a3, (__int64)a2);
  RaidAddPortDriver(a3, a1);
  return 0LL;
}
