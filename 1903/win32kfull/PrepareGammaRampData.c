/*
 * XREFs of PrepareGammaRampData @ 0x1C01275D0
 * Callers:
 *     xxxSwitchDesktopWithFade @ 0x1C012732C (xxxSwitchDesktopWithFade.c)
 * Callees:
 *     GreGetDeviceGammaRamp @ 0x1C01277D4 (GreGetDeviceGammaRamp.c)
 */

__int64 __fastcall PrepareGammaRampData(unsigned int *a1, unsigned int **a2, _DWORD *a3)
{
  int DeviceGammaRamp; // r14d
  unsigned int v7; // ebx
  __int64 DCEx; // rax
  __int64 v9; // rsi
  unsigned int DeviceCaps; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // rdi
  unsigned int v18; // ebp
  _QWORD *i; // rbx
  HDC DisplayDC; // rsi
  __int64 v21; // r15
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // eax

  DeviceGammaRamp = 0;
  v7 = 0;
  DCEx = _GetDCEx(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL), 0LL, 8388611LL);
  v9 = DCEx;
  if ( !DCEx )
    return 3221225495LL;
  DeviceCaps = GreGetDeviceCaps(DCEx, 116LL);
  *a1 = DeviceCaps;
  if ( DeviceCaps < 0x3C )
    *a1 = 60;
  _ReleaseDC(v9);
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v11, v12, v13);
  v14 = *(_QWORD *)(gpDispInfo + 104LL);
  while ( v14 )
  {
    v22 = *(_QWORD *)(v14 + 40);
    v14 = *(_QWORD *)(v14 + 56);
    v23 = *(_DWORD *)(v22 + 24);
    v24 = v7 + 1;
    if ( (v23 & 1) == 0 )
      v24 = v7;
    v7 = v24;
  }
  v15 = 1544LL * v7;
  if ( v15 > 0xFFFFFFFF || (unsigned int)v15 >= 0xFFFFF9F8 )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    return 3221225621LL;
  }
  v16 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(v15 + 1544), 1835231559LL);
  v17 = v16;
  if ( !v16 )
  {
    _ReleaseDC(v9);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    return 3221225495LL;
  }
  *v16 = v7;
  if ( !gProtocolType )
  {
    v18 = 0;
    for ( i = *(_QWORD **)(gpDispInfo + 104LL); i; i = (_QWORD *)i[7] )
    {
      if ( (*(_DWORD *)(i[5] + 24LL) & 1) != 0 )
      {
        DisplayDC = (HDC)GreCreateDisplayDC(i[29], 0LL, 2LL);
        if ( !DisplayDC )
          break;
        v21 = 386LL * v18;
        DeviceGammaRamp = GreGetDeviceGammaRamp(DisplayDC);
        if ( !DeviceGammaRamp )
        {
          GreDeleteDC(DisplayDC);
          break;
        }
        ++v18;
        *(_QWORD *)&v17[v21 + 386] = DisplayDC;
      }
    }
  }
  *a3 = DeviceGammaRamp;
  *a2 = v17;
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return 0LL;
}
