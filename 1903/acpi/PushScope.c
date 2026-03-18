/*
 * XREFs of PushScope @ 0x1C0011540
 * Callers:
 *     ParseLoad @ 0x1C0006D20 (ParseLoad.c)
 *     Device @ 0x1C000E9C0 (Device.c)
 *     Scope @ 0x1C002BEF0 (Scope.c)
 *     Processor @ 0x1C002E1F0 (Processor.c)
 *     PowerRes @ 0x1C002F010 (PowerRes.c)
 *     ThermalZone @ 0x1C0030E10 (ThermalZone.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 */

__int64 __fastcall PushScope(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v11; // edi
  __int64 v13; // rax
  _QWORD *v14; // rcx
  char v15; // al

  v11 = 0;
  v13 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x50u);
  v14 = (_QWORD *)v13;
  if ( v13 )
  {
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(a1 + 416);
    *(_QWORD *)(a1 + 416) = v13;
    *(_QWORD *)(v13 + 24) = ParseScope;
    *(_DWORD *)v13 = 1347371859;
    *(_QWORD *)(a1 + 120) = a2;
    *(_QWORD *)(v13 + 32) = a3;
    *(_QWORD *)(v13 + 40) = a4;
    *(_QWORD *)(v13 + 48) = *(_QWORD *)(a1 + 80);
    v15 = gdwfAMLI;
    *(_QWORD *)(a1 + 80) = a5;
    if ( (v15 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 112));
    v14[7] = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = a6;
    v14[8] = *(_QWORD *)(a1 + 320);
    *(_QWORD *)(a1 + 320) = a7;
    v14[9] = a8;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
    PrintDebugMessage(153, 0, 0, 0, 0LL);
    return (unsigned int)-1072431102;
  }
  return v11;
}
