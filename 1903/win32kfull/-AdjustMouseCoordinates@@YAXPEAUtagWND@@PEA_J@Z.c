/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C0220154
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E72A0 (PhysicalToLogicalInPlacePointWithParent.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)a1 + 27) )
  {
    v6 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
    LOBYTE(v6) = v6 & 0xF;
    if ( (_BYTE)v6 == 1
      && (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, v6, a4) & 0xF) == 2
      && *(_DWORD *)(gptiCurrent + 756LL) == *(_DWORD *)(gptiCurrent + 768LL)
      && *(_DWORD *)(gptiCurrent + 760LL) == *(_DWORD *)(gptiCurrent + 772LL) )
    {
      v7 = *(__int16 *)a2;
      v8 = *((__int16 *)a2 + 1);
      PhysicalToLogicalInPlacePointWithParent(a1, &v7, 0LL);
      *a2 = ((unsigned __int16)v8 << 16) | (unsigned __int16)v7;
    }
  }
}
