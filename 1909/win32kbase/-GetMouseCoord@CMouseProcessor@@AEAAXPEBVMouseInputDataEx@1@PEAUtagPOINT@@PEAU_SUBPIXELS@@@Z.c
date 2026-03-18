/*
 * XREFs of ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00528AC
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0031458 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x1C0031188 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00523A8 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0052738 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::GetMouseCoord(
        CMouseProcessor *this,
        const struct CMouseProcessor::MouseInputDataEx *a2,
        struct tagPOINT *a3,
        struct _SUBPIXELS *a4)
{
  __int16 v6; // bp
  bool v9; // r10
  char v10; // di
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8

  *(_DWORD *)a4 = 0;
  *((_DWORD *)a4 + 1) = 0;
  v6 = *((_WORD *)a2 + 1);
  v9 = CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 16LL, (__int64)a3);
  v10 = v9 | 2;
  if ( (v6 & 0x80) == 0 )
    v10 = v9;
  if ( (v10 & 1) == 0 && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
  v11 = *((_QWORD *)a2 + 6);
  v12 = *((_DWORD *)a2 + 4);
  v13 = *((_DWORD *)a2 + 3);
  v14 = *((unsigned int *)a2 + 5);
  if ( (v6 & 1) != 0 )
    CMouseProcessor::GetMouseCoordinateAbsolute((__int64)this, v13, v12, v6, a3, a4, v11, v14, v10);
  else
    CMouseProcessor::GetMouseCoordinateRelative(this, v13, v12, a3, a4, v11, v14, v10);
}
