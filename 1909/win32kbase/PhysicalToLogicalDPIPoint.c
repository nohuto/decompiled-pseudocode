/*
 * XREFs of PhysicalToLogicalDPIPoint @ 0x1C004D000
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x1C003056C (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C004C640 (TransformPointBetweenCoordinateSpaces.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C004CF30 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C004EDF0 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x1C0092DA4 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpiContext @ 0x1C004D248 (GetMonitorRectForDpiContext.c)
 *     EngMulDiv @ 0x1C004D390 (EngMulDiv.c)
 */

__int64 __fastcall PhysicalToLogicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  int v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rbp
  unsigned __int16 v11; // si
  __int128 *MonitorRectForDpiContext; // rax
  INT v13; // edi
  INT v14; // ecx
  INT v15; // eax
  int v16; // rbx^4
  __m128i v18; // [rsp+20h] [rbp-48h]
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( a4 )
      v9 = *a4;
    else
      v9 = 0LL;
    if ( !v9 )
      v9 = _MonitorFromPoint(*(_QWORD *)a2, 2LL, 18LL);
    if ( a4 )
      *a4 = v9;
    if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
    {
      v10 = *(_QWORD *)(v9 + 40);
      v11 = *(_WORD *)(v10 + 68);
    }
    else
    {
      v10 = *(_QWORD *)(v9 + 40);
      v11 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    }
    v18 = *(__m128i *)GetMonitorRectForDpiContext(&v19, v9, 18LL);
    MonitorRectForDpiContext = (__int128 *)GetMonitorRectForDpiContext(&v19, v9, CurrentThreadDpiAwarenessContext);
    v13 = *(unsigned __int16 *)(v10 + 64);
    v14 = *(_DWORD *)a2 - v18.m128i_i32[0];
    v19 = *MonitorRectForDpiContext;
    v15 = EngMulDiv(v14, v11, v13);
    v16 = DWORD1(v19);
    *(_DWORD *)a1 = v19 + v15;
    *(_DWORD *)(a1 + 4) = v16 + EngMulDiv(*(_DWORD *)(a2 + 4) - _mm_cvtsi128_si32(_mm_srli_si128(v18, 4)), v11, v13);
    return 1LL;
  }
}
