/*
 * XREFs of PiProcessClearDeviceProblem @ 0x1408745A0
 * Callers:
 *     PnpDeviceActionWorker @ 0x14015DBE0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PiPnpRtlEndOperation @ 0x1405BB924 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405BD6D8 (PiPnpRtlBeginOperation.c)
 *     PipClearDevNodeProblem @ 0x1406FADBC (PipClearDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x140709274 (PipClearDevNodeFlags.c)
 *     PnpRestartDeviceNode @ 0x140861AE8 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x140862184 (PipIsProblemReadonly.c)
 */

__int64 __fastcall PiProcessClearDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  P = 0LL;
  v4 = *(_DWORD **)(*(_QWORD *)(v1 + 312) + 40LL);
  v5 = v4[75];
  if ( ((v5 - 769) & 0xFFFFFFEE) == 0 && v5 != 785 )
  {
    v6 = v4[99];
    if ( (v6 & 0x6000) == 0 )
      return v2;
    v7 = *(_DWORD *)(a1 + 24);
    switch ( v7 )
    {
      case 1:
        if ( (unsigned int)PipIsProblemReadonly((__int64)v4, v4[101]) )
          return (unsigned int)-1073741584;
        goto LABEL_15;
      case 3:
        if ( (v6 & 0x2000) == 0 )
          return (unsigned int)-1073741808;
        v8 = v4[101] == 47;
        break;
      case 25:
        if ( (v6 & 0x2000) == 0 )
          return (unsigned int)-1073741808;
        v8 = v4[101] == 55;
        break;
      default:
        goto LABEL_15;
    }
    if ( !v8 )
      return (unsigned int)-1073741808;
LABEL_15:
    PiPnpRtlBeginOperation(&P);
    PipClearDevNodeFlags((__int64)v4, 0x4000);
    PipClearDevNodeProblem((__int64)v4);
    if ( v4[75] != 769 )
      PnpRestartDeviceNode((__int64)v4);
    if ( P )
      PiPnpRtlEndOperation((PVOID **)P);
    return v2;
  }
  if ( (unsigned int)(v5 - 787) <= 1 )
    return (unsigned int)-1073741738;
  return v2;
}
