/*
 * XREFs of RIMFreeHidTLCInfo @ 0x1C0071A30
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C006EC88 (RIMFreeSpecificDevWorker.c)
 *     rimObsStartStopDeviceRead @ 0x1C015A600 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006CE74 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006CEB4 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMFreeHidTLCInfo(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  _QWORD *v6; // rcx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, (struct _KTHREAD **)&gTLCInfoLock);
  if ( *(_DWORD *)(a1 + 20) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *(_DWORD *)(a1 + 24) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *(_DWORD *)(a1 + 36) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( *(_DWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( !*(_DWORD *)(a1 + 44) )
    Win32FreePool(a1);
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7);
}
