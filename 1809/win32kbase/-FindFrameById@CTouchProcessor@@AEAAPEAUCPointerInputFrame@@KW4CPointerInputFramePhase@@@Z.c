/*
 * XREFs of ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00AD348
 * Callers:
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C0138404 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C013B4C0 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z @ 0x1C013B650 (-GetPointerDataArrivalTimes@CTouchProcessor@@QEAAH_KIPEA_K@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C013B8C0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C013BB40 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C013C100 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C013C750 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z.c)
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C013D3F0 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 *     ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C013F290 (-IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z.c)
 *     ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C0140F00 (-PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z.c)
 *     ?SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z @ 0x1C0144F1C (-SetPointerInfoNodeMessagePosted@CTouchProcessor@@IEAAH_KIH@Z.c)
 * Callees:
 *     ?CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ @ 0x1C01342D0 (-CTouchProcessorLocked@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_QWORD *__fastcall CTouchProcessor::FindFrameById(CTouchProcessor *a1, int a2)
{
  _QWORD **v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rcx

  v3 = (_QWORD **)((char *)a1 + 72);
  if ( !(unsigned int)CTouchProcessor::CTouchProcessorLocked(a1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = *v3;
  if ( *v3 == v3 )
    return 0LL;
  do
  {
    v8 = v7 - 1;
    v9 = *((unsigned int *)v7 + 8);
    if ( (_DWORD)v9 == a2 )
      break;
    v7 = (_QWORD *)*v7;
  }
  while ( v7 != v3 );
  if ( v7 == v3 )
    return 0LL;
  if ( v8 && (_DWORD)v9 != a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v4, v6);
  if ( *((_DWORD *)v8 + 22) != 4 )
    return 0LL;
  return v8;
}
