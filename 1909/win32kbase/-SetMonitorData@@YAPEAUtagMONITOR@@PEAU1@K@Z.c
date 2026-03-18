/*
 * XREFs of ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C004F6BC
 * Callers:
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C0050C44 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     bDeleteDCInternal @ 0x1C0010100 (bDeleteDCInternal.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     HMFreeObject @ 0x1C0028D60 (HMFreeObject.c)
 *     IntersectRect @ 0x1C004CB8C (IntersectRect.c)
 *     DrvIsUniformSpaceMapping @ 0x1C004FFB0 (DrvIsUniformSpaceMapping.c)
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C004FFC8 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00500A4 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C0050100 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     GreGetDeviceCaps @ 0x1C00511A0 (GreGetDeviceCaps.c)
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00636B4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v2; // edi
  __int64 v4; // r15
  unsigned __int16 MonitorLogicalDPI; // bp
  int v6; // r12d
  unsigned __int16 MonitorPhysicalDPI; // r13
  HDEV v8; // rsi
  int v9; // r9d
  HDC DisplayDC; // r14
  int v11; // eax
  _DWORD *v12; // rax
  _DWORD *v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  HDEV v23; // rax
  int *v24; // r8
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  _DWORD *v29; // rdx
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int128 v31; // [rsp+38h] [rbp-50h]

  v2 = 0;
  v4 = *(_QWORD *)(gpDispInfo + 16);
  MonitorLogicalDPI = 96;
  v6 = 1;
  MonitorPhysicalDPI = 96;
  v30 = v4 + 56LL * a2;
  v8 = *(HDEV *)(v30 + 40);
  v31 = *(_OWORD *)(((unsigned int)DrvIsUniformSpaceMapping(v4) != 0 ? 0x14 : 0) + v30 + 56);
  DisplayDC = (HDC)GreCreateDisplayDC((__int64)v8, 0, 0LL, v9);
  v11 = v31;
  if ( DisplayDC )
  {
    if ( (GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0 )
    {
      v6 = 0;
    }
    else
    {
      MonitorLogicalDPI = GetMonitorLogicalDPI(v8);
      MonitorPhysicalDPI = GetMonitorPhysicalDPI(v8);
    }
    bDeleteDCInternal((__int64)DisplayDC, 1, 0, 0);
    if ( !v6 )
      goto LABEL_9;
    v11 = v31;
  }
  if ( !DWORD1(v31) && !v11 )
    v2 = 1;
LABEL_9:
  if ( !Monitor )
  {
    if ( v2 )
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
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 68LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v4) )
    MonitorLogicalDPI = *(_WORD *)(v4 + 32);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  v12 = (_DWORD *)*((_QWORD *)Monitor + 39);
  *((_WORD *)Monitor + 112) = MonitorPhysicalDPI;
  if ( v12 )
  {
    --*v12;
    v13 = (_DWORD *)*((_QWORD *)Monitor + 39);
    if ( !*v13 )
      Win32FreePool((__int64)v13);
    *((_QWORD *)Monitor + 39) = 0LL;
  }
  v14 = (char *)Win32AllocPoolZInit(0x64uLL, 1886872661LL);
  v17 = v14;
  if ( !v14 )
  {
    HMFreeObject(Monitor, v15, v16);
    return 0LL;
  }
  GetMonitorDpiInfo(v8, v2, (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL), (struct _DPI_INFORMATION *)(v14 + 4));
  *v17 = 1;
  *((_QWORD *)Monitor + 39) = v17;
  v18 = *((_QWORD *)Monitor + 5);
  v19 = *(_DWORD *)(v18 + 24);
  if ( v6 )
    v20 = v19 | 1;
  else
    v20 = v19 & 0xFFFFFFFE;
  *(_DWORD *)(v18 + 24) = v20;
  v21 = *((_QWORD *)Monitor + 5);
  v22 = *(_QWORD *)(v21 + 28) - v31;
  if ( !v22 )
    v22 = *(_QWORD *)(v21 + 36) - *((_QWORD *)&v31 + 1);
  if ( v22 )
  {
    *(_DWORD *)(v21 + 44) += v31 - *(_DWORD *)(v21 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += DWORD1(v31) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += DWORD2(v31) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += HIDWORD(v31) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
    v21 = *((_QWORD *)Monitor + 5);
  }
  *(_DWORD *)(v21 + 28) = v31;
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 32LL) = *(_QWORD *)((char *)&v31 + 4);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = HIDWORD(v31);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *(_DWORD *)(v30 + 56);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *(_DWORD *)(v30 + 60);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *(_DWORD *)(v30 + 64);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 84LL) = *(_DWORD *)(v30 + 68);
  v23 = v8;
  if ( !v6 )
    v23 = *(HDEV *)v4;
  v24 = (int *)*((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 29) = v23;
  *((_QWORD *)Monitor + 30) = v8;
  v25 = v24[11];
  if ( v24[13] < v25 )
  {
    v24[13] = v25;
    v24 = (int *)*((_QWORD *)Monitor + 5);
  }
  v26 = v24[12];
  if ( v24[14] < v26 )
  {
    v24[14] = v26;
    v24 = (int *)*((_QWORD *)Monitor + 5);
  }
  if ( !(unsigned int)IntersectRect(v24 + 11, v24 + 11, v24 + 7) )
  {
    v29 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v29[11] = v29[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v29[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v29[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v29[10];
  }
  if ( v2 )
  {
    v27 = gpDispInfo;
    *(_QWORD *)(*(_QWORD *)gpDispInfo + 8LL) = *((_QWORD *)Monitor + 6);
    *(_QWORD *)(v27 + 96) = Monitor;
  }
  *(_DWORD *)(struct HDEV__ *)(*((_QWORD *)Monitor + 5) + 60LL) = v8[661];
  return Monitor;
}
