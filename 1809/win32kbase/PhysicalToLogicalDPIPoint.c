/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C0039790
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C0030D18 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0038EF0 (TransformPointBetweenCoordinateSpaces.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C00396F0 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C007003C (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0073D88 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1C00399C0 (GetMonitorRectForDpi.c)
 *     EngMulDiv @ 0x1C0039AE0 (EngMulDiv.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v8; // rbx
  unsigned __int16 v9; // si
  __int128 *MonitorRectForDpi; // rax
  INT v11; // ecx
  __int128 v12; // xmm0
  __int64 v13; // rax
  INT v14; // edi
  INT v15; // eax
  int v16; // rbx^4
  __m128i v18; // [rsp+20h] [rbp-38h]
  __int128 v19; // [rsp+30h] [rbp-28h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
      v8 = *a4;
    else
      v8 = 0LL;
    if ( !v8 )
      v8 = _MonitorFromPoint(*(_QWORD *)a2, 2LL, 18LL);
    if ( a4 )
      *a4 = v8;
    v9 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v18 = *(__m128i *)GetMonitorRectForDpi(&v19, v8, 0LL);
    MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(&v19, v8, v9);
    v11 = *(_DWORD *)a2 - v18.m128i_i32[0];
    v12 = *MonitorRectForDpi;
    v13 = *(_QWORD *)(v8 + 40);
    v19 = v12;
    v14 = *(unsigned __int16 *)(v13 + 64);
    v15 = EngMulDiv(v11, v9, v14);
    v16 = DWORD1(v19);
    *(_DWORD *)a1 = v19 + v15;
    *(_DWORD *)(a1 + 4) = v16 + EngMulDiv(*(_DWORD *)(a2 + 4) - _mm_cvtsi128_si32(_mm_srli_si128(v18, 4)), v9, v14);
    return 1LL;
  }
}
