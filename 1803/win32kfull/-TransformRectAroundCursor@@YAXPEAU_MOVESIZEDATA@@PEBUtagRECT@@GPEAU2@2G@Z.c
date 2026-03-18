/*
 * XREFs of ?TransformRectAroundCursor@@YAXPEAU_MOVESIZEDATA@@PEBUtagRECT@@GPEAU2@2G@Z @ 0x1C01ADEFC
 * Callers:
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01AEDC4 (DetectNewMonitor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectAroundPoint @ 0x1C01AFCE4 (TransformRectAroundPoint.c)
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
  INT v12; // r8d
  INT v13; // edx
  int v14; // ecx

  TransformRectAroundPoint((_DWORD)a2, a3, (_DWORD)a4, (_DWORD)a5, a6, *(_QWORD *)((char *)a1 + 308));
  if ( (W32GetCurrentThreadDpiAwarenessContext(v11, v10) & 0xF) == 2 )
  {
    if ( a4 )
    {
      v12 = a2->bottom - a2->top;
      v13 = a4->bottom - a4->top;
    }
    else
    {
      v12 = a3;
      v13 = a6;
    }
    v14 = *((_DWORD *)a1 + 43) - EngMulDiv(*((_DWORD *)a1 + 43), v13, v12);
    a5->bottom += v14;
    a5->top += v14;
  }
}
