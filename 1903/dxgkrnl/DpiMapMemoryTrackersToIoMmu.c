/*
 * XREFs of DpiMapMemoryTrackersToIoMmu @ 0x1C0050910
 * Callers:
 *     ?EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z @ 0x1C01F515C (-EnableIoMmuIsolation@ADAPTER_RENDER@@QEAAJ_N0@Z.c)
 * Callees:
 *     DpiGetIoMmuContextFromDevice @ 0x1C0050648 (DpiGetIoMmuContextFromDevice.c)
 *     DpiMapMemoryTrackerToIoMmu @ 0x1C0050824 (DpiMapMemoryTrackerToIoMmu.c)
 */

__int64 __fastcall DpiMapMemoryTrackersToIoMmu(__int64 a1)
{
  __int64 v1; // rsi
  __int64 IoMmuContextFromDevice; // rbx
  KIRQL v3; // bp
  _QWORD *i; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  LODWORD(v1) = 0;
  IoMmuContextFromDevice = DpiGetIoMmuContextFromDevice(a1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)IoMmuContextFromDevice);
  for ( i = *(_QWORD **)(IoMmuContextFromDevice + 120); i != (_QWORD *)(IoMmuContextFromDevice + 120); i = (_QWORD *)*i )
  {
    v5 = DpiMapMemoryTrackerToIoMmu((KSPIN_LOCK *)IoMmuContextFromDevice, (__int64)i);
    v1 = v5;
    if ( v5 < 0 )
    {
      v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
      *(_QWORD *)(v9 + 24) = v1;
      WdLogEvent5_WdWarning(v9);
      break;
    }
  }
  *(_DWORD *)(IoMmuContextFromDevice + 136) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)IoMmuContextFromDevice, v3);
  return (unsigned int)v1;
}
