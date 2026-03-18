/*
 * XREFs of ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C0046FB0 (xxxResetDisplayDevice.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 * Callees:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F480 (SetOrCreateRectRgnIndirectPublic.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     InitLoadResources @ 0x1C003BB24 (InitLoadResources.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00412CC (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00420A8 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C00428C0 (EnforceColorDependentSettings.c)
 *     GreGetDeviceCaps @ 0x1C0045080 (GreGetDeviceCaps.c)
 *     ApiSetEditionUpdateCursorSizes @ 0x1C0045184 (ApiSetEditionUpdateCursorSizes.c)
 *     MonitorFromHdev @ 0x1C00452E8 (MonitorFromHdev.c)
 *     HdevFromMonitor @ 0x1C0045520 (HdevFromMonitor.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C004555C (W32SetCurrentThreadDpiAwarenessContext.c)
 *     DestroyMonitor @ 0x1C0063C60 (DestroyMonitor.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 UpdateUserScreen(void)
{
  unsigned int v0; // r15d
  __int64 v1; // r14
  struct tagMONITOR **v2; // rdi
  unsigned __int64 v3; // rbx
  char CurrentThreadDpiAwarenessContext; // al
  int v5; // esi
  void *v6; // rsi
  struct tagMONITOR **v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned __int16 v11; // r8
  __int64 v12; // rax
  int v13; // r15d
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r9
  signed int v16; // r11d
  signed int v17; // ebx
  signed int v18; // edi
  signed int v19; // r10d
  _QWORD *v20; // r8
  _DWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  CInputConfig *v29; // rcx
  struct CEResource *v30; // rdx
  __int64 v31; // rbx
  int v32; // r14d
  unsigned int v33; // esi
  HRGN *v34; // rdi
  __int64 v35; // r9
  __int64 i; // rdx
  unsigned __int8 DeviceCaps; // al
  __int16 v38; // r9
  __int64 j; // r8
  struct tagMONITOR *v41; // rax
  __int64 v42; // rdx
  __int128 v43; // [rsp+20h] [rbp-20h]

  v0 = 0;
  v1 = *(_QWORD *)(gpDispInfo + 16);
  v2 = (struct tagMONITOR **)(gpDispInfo + 104);
  v3 = *(_QWORD *)(gpDispInfo + 104);
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v5 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
    v0 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  InitLoadResources(1);
  if ( !v5 )
    W32SetCurrentThreadDpiAwarenessContext(v0);
  while ( v3 )
  {
    v6 = (void *)v3;
    v7 = (struct tagMONITOR **)(v3 + 56);
    v3 = *(_QWORD *)(v3 + 56);
    v8 = HdevFromMonitor(v6);
    if ( v8 == -1 )
    {
      DestroyMonitor(v6);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v6, v8);
      v2 = v7;
    }
  }
  if ( *(_DWORD *)(v1 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(v1 + 40 * v3 + 32)) )
      {
        v41 = SetMonitorData(0LL, v3);
        if ( v41 )
        {
          v42 = gpDispInfo;
          if ( *(_QWORD *)(gpDispInfo + 104) )
          {
            *((_QWORD *)*(v2 - 2) + 2) = *((_QWORD *)v41 + 6);
            *v2 = v41;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)gpDispInfo + 16LL) = *((_QWORD *)v41 + 6);
            *(_QWORD *)(v42 + 104) = v41;
          }
          v2 = (struct tagMONITOR **)((char *)v41 + 56);
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v1 + 20) );
  }
  v9 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v9 || !*(_QWORD *)(gpDispInfo + 96) )
    return 3221225495LL;
  v10 = *(_QWORD *)(gpDispInfo + 104);
  v11 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 64LL);
  do
  {
    v12 = *(_QWORD *)(v10 + 40);
    v10 = *(_QWORD *)(v10 + 56);
    if ( v11 >= *(_WORD *)(v12 + 64) )
      v11 = *(_WORD *)(v12 + 64);
  }
  while ( v10 );
  do
  {
    *(_WORD *)(*(_QWORD *)(v9 + 40) + 66LL) = v11;
    v9 = *(_QWORD *)(v9 + 56);
  }
  while ( v9 );
  ApiSetEditionUpdateCursorSizes();
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v1 + 16) & 1) == 0;
  v13 = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 38) & 0x100;
  *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFD | (v13 != 0 ? 2 : 0);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  **(_DWORD **)gpDispInfo = 0;
  v20 = *(_QWORD **)(gpDispInfo + 104);
  if ( v20 )
  {
    do
    {
      v21 = (_DWORD *)v20[5];
      if ( (v21[6] & 1) != 0 )
      {
        v22 = v21[7];
        if ( v18 < v22 )
          v22 = v18;
        v18 = v22;
        v23 = v21[8];
        if ( v17 < v23 )
          v23 = v17;
        v17 = v23;
        v24 = v21[9];
        if ( v16 > v24 )
          v24 = v16;
        v16 = v24;
        v25 = v21[10];
        if ( v19 > v25 )
          v25 = v19;
        v19 = v25;
        ++**(_DWORD **)gpDispInfo;
      }
      if ( *((_DWORD *)gpsi + 555) )
      {
        v26 = v20[5];
        if ( v13 )
          *(_DWORD *)(v26 + 24) |= 2u;
        else
          *(_DWORD *)(v26 + 24) &= ~2u;
      }
      else if ( (*(_DWORD *)(v20[29] + 2172LL) & 0x100) != 0 )
      {
        *(_DWORD *)(v20[5] + 24LL) |= 2u;
        *(_DWORD *)(gpDispInfo + 132) |= 2u;
      }
      v20 = (_QWORD *)v20[7];
    }
    while ( v20 );
    v15 = __PAIR64__(v19, v16);
    v14 = __PAIR64__(v17, v18);
  }
  v27 = gpDispInfo;
  v43 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v28 = v14 - v43;
  if ( !v28 )
    v28 = v15 - *((_QWORD *)&v43 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v18;
  *(_DWORD *)(*(_QWORD *)v27 + 28LL) = v17;
  *(_DWORD *)(*(_QWORD *)v27 + 32LL) = v16;
  *(_DWORD *)(*(_QWORD *)v27 + 36LL) = v19;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v28 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v29 = *(CInputConfig **)gpDispInfo;
  v30 = (struct CEResource *)**(unsigned int **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = (_DWORD)v30;
  CInputConfig::OnDisplayStateChange(v29, v30);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( (int)IsUpdateDesktopThresholdsSupported() >= 0 )
    UpdateDesktopThresholds();
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 120), (struct _RECTL *)&gZero);
  if ( *(_QWORD *)(gpDispInfo + 120) )
  {
    v31 = *(_QWORD *)(gpDispInfo + 104);
    v32 = 0;
    while ( v31 )
    {
      if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                           (HRGN *)(v31 + 72),
                           (struct _RECTL *)(*(_QWORD *)(v31 + 40) + 28LL))
        && (*(_DWORD *)(*(_QWORD *)(v31 + 40) + 24LL) & 1) != 0 )
      {
        v32 = GreCombineRgn(*(HRGN *)(gpDispInfo + 120), *(HRGN *)(gpDispInfo + 120), *(HRGN *)(v31 + 72), 2);
      }
      v33 = 0;
      v34 = (HRGN *)(v31 + 80);
      do
      {
        if ( *v34 )
        {
          GreDeleteObject(*v34);
          *v34 = 0LL;
        }
        ++v33;
        ++v34;
      }
      while ( v33 < 0x12 );
      v31 = *(_QWORD *)(v31 + 56);
    }
    *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFE | (v32 == 2);
  }
  if ( (*(_DWORD *)(gpDispInfo + 132) & 1) != 0 )
    v35 = 0LL;
  else
    v35 = *(_QWORD *)(gpDispInfo + 120);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 24LL) + 40LL) + 168LL) = v35;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 14);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v38 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v38;
  *(_WORD *)(gpDispInfo + 128) = v38;
  if ( v13 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  return 0LL;
}
