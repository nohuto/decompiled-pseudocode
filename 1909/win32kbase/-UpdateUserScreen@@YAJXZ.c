/*
 * XREFs of ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44
 * Callers:
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 *     xxxResetDisplayDevice @ 0x1C0062FC0 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreDeleteObject @ 0x1C0018180 (GreDeleteObject.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00275A0 (SetOrCreateRectRgnIndirectPublic.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     MonitorFromHdev @ 0x1C003A4A8 (MonitorFromHdev.c)
 *     InitLoadResources @ 0x1C004F0B0 (InitLoadResources.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C004F6BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     EnforceColorDependentSettings @ 0x1C00504D0 (EnforceColorDependentSettings.c)
 *     GreGetDeviceCaps @ 0x1C00511A0 (GreGetDeviceCaps.c)
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00512B4 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     HdevFromMonitor @ 0x1C0063510 (HdevFromMonitor.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00A44A8 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ApiSetEditionUpdateCursorSizes @ 0x1C00A5384 (ApiSetEditionUpdateCursorSizes.c)
 *     DestroyMonitor @ 0x1C00B4610 (DestroyMonitor.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 UpdateUserScreen(void)
{
  __int64 v0; // r14
  struct tagMONITOR **v1; // rdi
  struct tagMONITOR **v2; // rbx
  unsigned int v3; // r15d
  char CurrentThreadDpiAwarenessContext; // al
  int v5; // esi
  struct tagMONITOR **v6; // rsi
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
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  CInputConfig *v31; // rcx
  __int64 v32; // rbx
  int v33; // r14d
  __int64 v34; // rdx
  unsigned int v35; // esi
  struct HOBJ__ **v36; // rdi
  __int64 v37; // rdx
  __int64 i; // r8
  unsigned __int8 DeviceCaps; // al
  __int16 v40; // r9
  __int64 j; // r9
  struct tagMONITOR *v43; // rax
  __int64 v44; // rdx
  __int128 v45; // [rsp+30h] [rbp-20h]

  v0 = *(_QWORD *)(gpDispInfo + 16);
  v1 = (struct tagMONITOR **)(gpDispInfo + 104);
  v2 = *(struct tagMONITOR ***)(gpDispInfo + 104);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 10, (__int64)&WPP_3f7abe393f2f31a091db119e688a4e49_Traceguids);
  v3 = 0;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v5 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 0 )
    v3 = W32SetCurrentThreadDpiAwarenessContext(18LL);
  InitLoadResources(1);
  if ( !v5 )
    W32SetCurrentThreadDpiAwarenessContext(v3);
  while ( v2 )
  {
    v6 = v2;
    v7 = v2 + 7;
    v2 = (struct tagMONITOR **)v2[7];
    v8 = HdevFromMonitor(v6);
    if ( v8 == -1 )
    {
      DestroyMonitor(v6);
    }
    else
    {
      SetMonitorData((struct tagMONITOR *)v6, v8);
      v1 = v7;
    }
  }
  if ( *(_DWORD *)(v0 + 20) )
  {
    do
    {
      if ( !MonitorFromHdev(*(_QWORD *)(56LL * (unsigned int)v2 + v0 + 40)) )
      {
        v43 = SetMonitorData(0LL, (unsigned int)v2);
        if ( v43 )
        {
          v44 = gpDispInfo;
          if ( *(_QWORD *)(gpDispInfo + 104) )
          {
            *((_QWORD *)*(v1 - 2) + 2) = *((_QWORD *)v43 + 6);
            *v1 = v43;
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)gpDispInfo + 16LL) = *((_QWORD *)v43 + 6);
            *(_QWORD *)(v44 + 104) = v43;
          }
          v1 = (struct tagMONITOR **)((char *)v43 + 56);
        }
      }
      LODWORD(v2) = (_DWORD)v2 + 1;
    }
    while ( (unsigned int)v2 < *(_DWORD *)(v0 + 20) );
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
  *((_DWORD *)gpsi + 555) = (*(_DWORD *)(v0 + 16) & 1) == 0;
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
        v27 = *(_DWORD *)(v26 + 24);
        if ( v13 )
          v28 = v27 | 2;
        else
          v28 = v27 & 0xFFFFFFFD;
        *(_DWORD *)(v26 + 24) = v28;
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
  v29 = gpDispInfo;
  v45 = *(_OWORD *)(*(_QWORD *)gpDispInfo + 24LL);
  v30 = v14 - v45;
  if ( !v30 )
    v30 = v15 - *((_QWORD *)&v45 + 1);
  *(_DWORD *)(*(_QWORD *)gpDispInfo + 24LL) = v18;
  *(_DWORD *)(*(_QWORD *)v29 + 28LL) = v17;
  *(_DWORD *)(*(_QWORD *)v29 + 32LL) = v16;
  *(_DWORD *)(*(_QWORD *)v29 + 36LL) = v19;
  if ( gfRemotingConsole && gpConsoleShadowDisplayChangeEvent && v30 )
    KeSetEvent(gpConsoleShadowDisplayChangeEvent, 1, 0);
  v31 = *(CInputConfig **)gpDispInfo;
  *((_DWORD *)gpsi + 554) = **(_DWORD **)gpDispInfo;
  CInputConfig::OnDisplayStateChange(v31);
  memset(&gaptMouse, 0, 0x600uLL);
  if ( (int)IsUpdateDesktopThresholdsSupported() >= 0 )
    UpdateDesktopThresholds();
  SetOrCreateRectRgnIndirectPublic((HRGN *)(gpDispInfo + 120), (struct _RECTL *)&gZero);
  if ( *(_QWORD *)(gpDispInfo + 120) )
  {
    v32 = *(_QWORD *)(gpDispInfo + 104);
    v33 = 0;
    while ( v32 )
    {
      if ( (unsigned int)SetOrCreateRectRgnIndirectPublic(
                           (HRGN *)(v32 + 72),
                           (struct _RECTL *)(*(_QWORD *)(v32 + 40) + 28LL))
        && (*(_DWORD *)(*(_QWORD *)(v32 + 40) + 24LL) & 1) != 0 )
      {
        v33 = GreCombineRgn(*(HRGN *)(gpDispInfo + 120), *(HRGN *)(gpDispInfo + 120), *(HRGN *)(v32 + 72), 2);
      }
      v35 = 0;
      v36 = (struct HOBJ__ **)(v32 + 80);
      do
      {
        if ( *v36 )
        {
          GreDeleteObject(*v36, v34);
          *v36 = 0LL;
        }
        ++v35;
        ++v36;
      }
      while ( v35 < 0x12 );
      v32 = *(_QWORD *)(v32 + 56);
    }
    *(_DWORD *)(gpDispInfo + 132) = *(_DWORD *)(gpDispInfo + 132) & 0xFFFFFFFE | (v33 == 2);
  }
  if ( (*(_DWORD *)(gpDispInfo + 132) & 1) != 0 )
    v37 = 0LL;
  else
    v37 = *(_QWORD *)(gpDispInfo + 120);
  for ( i = grpWinStaList; i; i = *(_QWORD *)(i + 8) )
  {
    for ( j = *(_QWORD *)(i + 16); j; j = *(_QWORD *)(j + 32) )
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(j + 8) + 24LL) + 40LL) + 168LL) = v37;
  }
  *((_BYTE *)gpsi + 7002) = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 14);
  DeviceCaps = GreGetDeviceCaps(*(HDC *)(gpDispInfo + 56), 12);
  *((_BYTE *)gpsi + 7003) = DeviceCaps;
  v40 = *((unsigned __int8 *)gpsi + 7002) * DeviceCaps;
  *((_WORD *)gpsi + 3498) = v40;
  *(_WORD *)(gpDispInfo + 128) = v40;
  if ( v13 )
    *((_DWORD *)gpsi + 1751) |= 1u;
  else
    *((_DWORD *)gpsi + 1751) &= ~1u;
  EnforceColorDependentSettings();
  return 0LL;
}
