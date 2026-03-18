/*
 * XREFs of ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C021FC14
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E7120 (PhysicalToLogicalInPlacePointWithParent.c)
 */

void __fastcall AdjustMouseCoordinates(struct tagWND *a1, __int64 *a2)
{
  __int64 v4; // r8
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)a1 + 27) )
  {
    v4 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL);
    LOBYTE(v4) = v4 & 0xF;
    if ( (_BYTE)v4 == 1
      && (W32GetCurrentThreadDpiAwarenessContext((__int64)a1, (__int64)a2, v4) & 0xF) == 2
      && *(_DWORD *)(gptiCurrent + 756LL) == *(_DWORD *)(gptiCurrent + 768LL)
      && *(_DWORD *)(gptiCurrent + 760LL) == *(_DWORD *)(gptiCurrent + 772LL) )
    {
      v5 = *(__int16 *)a2;
      v6 = *((__int16 *)a2 + 1);
      PhysicalToLogicalInPlacePointWithParent(a1, &v5, 0LL);
      *a2 = ((unsigned __int16)v6 << 16) | (unsigned __int16)v5;
    }
  }
}
