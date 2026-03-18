/*
 * XREFs of ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0038250
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037E48 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00381D8 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?GetDpiAwarenessContext@CInputDest@@QEBAKXZ @ 0x1C0038300 (-GetDpiAwarenessContext@CInputDest@@QEBAKXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall QHelper::SetMouseMovePoint(
        QHelper *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3)
{
  __int64 Queue; // rbx
  unsigned int DpiAwarenessContext; // eax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax

  Queue = CInputDest::GetQueue(this, 0LL);
  if ( Queue )
  {
    DpiAwarenessContext = CInputDest::GetDpiAwarenessContext(this);
    v7 = *((unsigned int *)a2 + 2);
    v8 = DpiAwarenessContext >> 8;
    LOWORD(v8) = (*((_DWORD *)a2 + 2) >> 8) ^ v8;
    v9 = 511LL;
    if ( (v8 & 0x1FF) != 0 )
      goto LABEL_13;
    v8 = 1LL;
    v9 = (DpiAwarenessContext & 0xF) == 2 && (DpiAwarenessContext & 0x20000000) != 0;
    if ( (v7 & 0xF) != 2 || (v7 & 0x20000000) == 0 )
      v8 = 0LL;
    if ( (_DWORD)v9 != (_DWORD)v8 )
LABEL_13:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v7);
    v10 = *((_DWORD *)a2 + 2);
    *(_QWORD *)(Queue + 192) = *(_QWORD *)a2;
    *(_DWORD *)(Queue + 200) = v10;
  }
}
