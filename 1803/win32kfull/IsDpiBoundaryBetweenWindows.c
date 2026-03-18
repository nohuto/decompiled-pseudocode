/*
 * XREFs of IsDpiBoundaryBetweenWindows @ 0x1C0074AA0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     OffsetChildren @ 0x1C0073D44 (OffsetChildren.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C01AE634 (BuildWindowListWithDpiBoundaryInfo.c)
 * Callees:
 *     ?GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z @ 0x1C00FAA00 (-GetWindowCoordinateSpaceDpi@@YAGPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsDpiBoundaryBetweenWindows(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int16 WindowCoordinateSpaceDpi; // bx

  v2 = 0;
  if ( (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a2 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) != 0 )
  {
    WindowCoordinateSpaceDpi = GetWindowCoordinateSpaceDpi((struct tagWND *)a1);
    return WindowCoordinateSpaceDpi != GetWindowCoordinateSpaceDpi((struct tagWND *)a2);
  }
  return v2;
}
