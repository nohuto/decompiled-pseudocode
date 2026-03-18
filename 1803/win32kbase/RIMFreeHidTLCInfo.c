/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C00F14D0
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00F7A6C (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C010593C (rimObsStartStopDeviceRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00DEF5C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00DEF94 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6, (struct _KTHREAD **)&gTLCInfoLock);
  if ( *(_DWORD *)(a1 + 20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( *(_DWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( *(_DWORD *)(a1 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v5 = *(_QWORD **)(a1 + 8), *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  if ( !*(_DWORD *)(a1 + 44) )
    Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6);
}
