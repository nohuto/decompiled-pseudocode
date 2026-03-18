/*
 * XREFs of ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01E59A0
 * Callers:
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E6780 (DetectNewMonitor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectAroundPoint @ 0x1C01E7554 (TransformRectAroundPoint.c)
 */

void __fastcall TransformRectAroundCursor(
        struct _MOVESIZEDATA *a1,
        const struct tagRECT *a2,
        unsigned __int16 a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        unsigned __int16 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  INT v13; // r8d
  INT v14; // edx
  int v15; // ecx

  TransformRectAroundPoint((_DWORD)a2, a3, (_DWORD)a4, (_DWORD)a5, a6, *(_QWORD *)((char *)a1 + 308));
  if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10, v12) & 0xF) == 2 )
  {
    if ( a4 )
    {
      v13 = a2->bottom - a2->top;
      v14 = a4->bottom - a4->top;
    }
    else
    {
      v13 = a3;
      v14 = a6;
    }
    v15 = *((_DWORD *)a1 + 43) - EngMulDiv(*((_DWORD *)a1 + 43), v14, v13);
    a5->bottom += v15;
    a5->top += v15;
  }
}
