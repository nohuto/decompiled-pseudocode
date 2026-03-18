/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00420A8
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0044B64 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0013574 (DrvGetCurrentDpiInfoFromHDev.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     IntersectRect @ 0x1C00393F4 (IntersectRect.c)
 *     bDeleteDCInternal @ 0x1C00427D0 (bDeleteDCInternal.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0042814 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     GreGetDeviceCaps @ 0x1C0045080 (GreGetDeviceCaps.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00495F8 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v3; // ebp
  BOOL v4; // r13d
  HDEV *v5; // rdi
  __int64 v6; // rsi
  HDEV v7; // r14
  HDC DisplayDC; // rax
  HDC v9; // r12
  __int16 DeviceCaps; // ax
  int v11; // r15d
  int CurrentDpiInfoFromHDev; // eax
  int v13; // ecx
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // r9d
  int v17; // ecx
  _DWORD *v18; // rax
  _DWORD *v19; // rcx
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r11
  __int64 v24; // rax
  __int64 v25; // rdx
  HDEV v26; // rax
  __int64 v27; // rcx
  HDEV v28; // rax
  int *v29; // r8
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  _DWORD *v34; // rdx
  char v35[8]; // [rsp+20h] [rbp-98h] BYREF
  int v36; // [rsp+28h] [rbp-90h]
  int v37; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v38; // [rsp+C0h] [rbp+8h]
  __int16 v39; // [rsp+C8h] [rbp+10h]

  v3 = 0;
  v4 = 1;
  v5 = *(HDEV **)(gpDispInfo + 16);
  v6 = 5LL * a2;
  v7 = v5[5 * a2 + 4];
  v39 = 96;
  LOWORD(v38) = 96;
  DisplayDC = GreCreateDisplayDC((__int64)v7, 0, 0);
  v9 = DisplayDC;
  if ( !DisplayDC )
    goto LABEL_44;
  DeviceCaps = GreGetDeviceCaps(DisplayDC, 94);
  v11 = DeviceCaps & 0x4000;
  v4 = v11 == 0;
  if ( (DeviceCaps & 0x4000) == 0 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev((__int64)v7, (__int64)v35);
    v13 = v36;
    if ( CurrentDpiInfoFromHDev < 0 )
      v13 = 100;
    v39 = (96 * v13 + 50) / 0x64u;
    v14 = DrvGetCurrentDpiInfoFromHDev((__int64)v7, (__int64)v35);
    v17 = v37;
    if ( v14 < 0 )
      v17 = v16;
    v38 = (unsigned int)(((unsigned int)(96 * v17 + 50) * (unsigned __int64)v15) >> 32) >> 5;
  }
  bDeleteDCInternal(v9, 1LL, 0LL, 0LL);
  if ( !v11 )
  {
LABEL_44:
    if ( !HIDWORD(v5[v6 + 6]) && !LODWORD(v5[v6 + 6]) )
      v3 = 1;
  }
  if ( !Monitor )
  {
    if ( v3 )
    {
      Monitor = (struct tagMONITOR *)gpMonitorCached;
      gpMonitorCached = 0LL;
    }
    else
    {
      Monitor = CreateMonitor();
    }
    if ( !Monitor )
      return 0LL;
  }
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = v39;
  *((_WORD *)Monitor + 112) = v38;
  v18 = (_DWORD *)*((_QWORD *)Monitor + 39);
  if ( v18 )
  {
    --*v18;
    v19 = (_DWORD *)*((_QWORD *)Monitor + 39);
    if ( !*v19 )
      Win32FreePool((__int64)v19);
    *((_QWORD *)Monitor + 39) = 0LL;
  }
  v20 = (char *)Win32AllocPoolZInit(0x64uLL, 0x70776455u);
  if ( !v20 )
  {
    HMFreeObject(Monitor, v21, v22);
    return 0LL;
  }
  GetMonitorDpiInfo(v7, v3, (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL), (struct _DPI_INFORMATION *)(v20 + 4));
  *v23 = 1;
  *((_QWORD *)Monitor + 39) = v23;
  v24 = *((_QWORD *)Monitor + 5);
  if ( v4 )
    *(_DWORD *)(v24 + 24) |= 1u;
  else
    *(_DWORD *)(v24 + 24) &= ~1u;
  v25 = *((_QWORD *)Monitor + 5);
  v26 = v5[v6 + 6];
  v27 = *(_QWORD *)(v25 + 28) - (_QWORD)v26;
  if ( !v27 )
    v27 = *(_QWORD *)(v25 + 36) - (_QWORD)v5[v6 + 7];
  if ( v27 )
  {
    *(_DWORD *)(v25 + 44) += (_DWORD)v26 - *(_DWORD *)(v25 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += HIDWORD(v5[v6 + 6]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += LODWORD(v5[v6 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v5[v6 + 7]) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
    v25 = *((_QWORD *)Monitor + 5);
  }
  *(_DWORD *)(v25 + 28) = v5[v6 + 6];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = HIDWORD(v5[v6 + 6]);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL) = v5[v6 + 7];
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v5[v6 + 7]);
  v28 = v7;
  if ( !v4 )
    v28 = *v5;
  v29 = (int *)*((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 29) = v28;
  *((_QWORD *)Monitor + 30) = v7;
  v30 = v29[11];
  if ( v29[13] < v30 )
  {
    v29[13] = v30;
    v29 = (int *)*((_QWORD *)Monitor + 5);
  }
  v31 = v29[12];
  if ( v29[14] < v31 )
  {
    v29[14] = v31;
    v29 = (int *)*((_QWORD *)Monitor + 5);
  }
  if ( !(unsigned int)IntersectRect(v29 + 11, v29 + 11, v29 + 7) )
  {
    v34 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v34[11] = v34[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v34[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v34[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v34[10];
  }
  if ( v3 )
  {
    v32 = gpDispInfo;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = *((_QWORD *)Monitor + 6);
    *(_QWORD *)(v32 + 96) = Monitor;
  }
  *(_DWORD *)(struct HDEV__ *)(*((_QWORD *)Monitor + 5) + 60LL) = v7[661];
  return Monitor;
}
