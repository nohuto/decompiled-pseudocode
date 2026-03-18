/*
 * XREFs of ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C016CF00
 * Callers:
 *     NtUserGetPointerType @ 0x1C0118BB0 (NtUserGetPointerType.c)
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0169A60 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C016AC20 (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C016ACEC (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C016B394 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C016B434 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C016B870 (-GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C016BDA4 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C016C6C0 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C01715B4 (-ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z.c)
 * Callees:
 *     ApiSetEditionGetThreadPointerHookData @ 0x1C019C514 (ApiSetEditionGetThreadPointerHookData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall CTouchProcessor::GetThreadPointerData(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3,
        unsigned int *a4,
        int *a5,
        HWND *a6)
{
  __int64 v9; // rdx
  __int64 ThreadPointerHookData; // rbx
  __int64 v11; // r8
  struct tagTHREADINPUTPOINTERLIST *v12; // rax
  __int64 v13; // rcx

  ThreadPointerHookData = ApiSetEditionGetThreadPointerHookData(a2, a3);
  if ( !ThreadPointerHookData )
  {
    v12 = *(struct tagTHREADINPUTPOINTERLIST **)a2;
    if ( *(struct tagTHREADINPUTPOINTERLIST **)a2 == a2 )
      return 0LL;
    do
    {
      v13 = *((unsigned __int16 *)v12 + 8);
      ThreadPointerHookData = (__int64)v12;
      if ( (_WORD)v13 == a3 )
        break;
      v12 = *(struct tagTHREADINPUTPOINTERLIST **)v12;
    }
    while ( v12 != a2 );
    if ( v12 == a2 )
      return 0LL;
    if ( (_WORD)v13 != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, v11);
  }
  if ( (*(_DWORD *)(ThreadPointerHookData + 48) & 8) != 0 )
    return 0LL;
  if ( a4 )
    *a4 = *(_DWORD *)(ThreadPointerHookData + 20);
  if ( a5 )
    *a5 = -(*(_DWORD *)(ThreadPointerHookData + 48) & 1);
  if ( a6 )
    *a6 = *(HWND *)(ThreadPointerHookData + 40);
  return *(_QWORD *)(ThreadPointerHookData + 24);
}
