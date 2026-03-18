/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C0034030
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     xxxAdjustSize @ 0x1C00E409C (xxxAdjustSize.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C01373D8 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FDC98 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     _GetClientRect @ 0x1C0011124 (_GetClientRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0032DF0 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowDpiLastNotify @ 0x1C0033D78 (GetWindowDpiLastNotify.c)
 *     GetMaxTrackSizeForWindow @ 0x1C00347DC (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0036864 (GetMonitorRectForWindow.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C004AB30 (_HasCaptionIcon.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     GetMonitorMaxArea @ 0x1C00FC5DC (GetMonitorMaxArea.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  unsigned int v7; // r14d
  __int128 v8; // xmm6
  __int64 DesktopWindow; // rax
  __int64 v10; // r8
  struct tagMONITOR *v11; // r15
  int v12; // r12d
  __int64 v13; // rdx
  int WindowBordersWithDpiAwareness; // esi
  int v15; // edx
  int v16; // eax
  __int64 Prop; // rax
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  int DpiDependentMetric; // eax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  int v33; // r15d
  int v34; // eax
  __int64 result; // rax
  int v36; // r12d
  signed int v37; // r13d
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rcx
  unsigned int v41; // eax
  int v42; // r15d
  __int64 v43; // rcx
  unsigned int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  char v47; // dl
  unsigned int v48; // eax
  int v49; // eax
  __int64 v50; // rcx
  int v51; // edx
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // eax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rax
  _OWORD v63[2]; // [rsp+28h] [rbp-59h] BYREF
  __int128 v64; // [rsp+48h] [rbp-39h] BYREF
  struct tagMONITOR *v65; // [rsp+58h] [rbp-29h]
  __int64 v66; // [rsp+60h] [rbp-21h]
  __int64 v67; // [rsp+68h] [rbp-19h] BYREF
  struct tagMONITOR *v68; // [rsp+70h] [rbp-11h]
  __int64 v69; // [rsp+78h] [rbp-9h]
  __int64 v70; // [rsp+80h] [rbp-1h] BYREF
  __int64 v71; // [rsp+88h] [rbp+7h]
  __int64 v72; // [rsp+90h] [rbp+Fh]
  int v73; // [rsp+E8h] [rbp+67h]
  int v74; // [rsp+F0h] [rbp+6Fh]

  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v63[0] = 0uLL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  v7 = 96;
  v66 = *(_QWORD *)(GetDispInfo() + 96);
  v8 = *(_OWORD *)GetMonitorRectForWindow(&v64, v66, a1);
  v64 = v8;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v10 == DesktopWindow )
  {
    v12 = 1;
    v63[0] = v8;
    v11 = _MonitorFromWindowInternal(a1, 1, 1);
    if ( a3 )
      v11 = a3;
    v65 = v11;
  }
  else
  {
    v11 = 0LL;
    v12 = 0;
    v65 = 0LL;
    GetClientRect(v10, (__int64)v63);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1, v13);
  v73 = LODWORD(v63[0]) - WindowBordersWithDpiAwareness;
  v15 = WindowBordersWithDpiAwareness - (LODWORD(v63[0]) - WindowBordersWithDpiAwareness) + DWORD2(v63[0]);
  LODWORD(v63[0]) -= WindowBordersWithDpiAwareness;
  v16 = WindowBordersWithDpiAwareness - (DWORD1(v63[0]) - WindowBordersWithDpiAwareness);
  v74 = DWORD1(v63[0]) - WindowBordersWithDpiAwareness;
  DWORD1(v63[0]) -= WindowBordersWithDpiAwareness;
  *(_DWORD *)(a2 + 12) = v16 + HIDWORD(v63[0]);
  *(_DWORD *)(a2 + 8) = v15;
  Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v18 = *(_QWORD *)(Prop + 40);
  else
    v18 = *(_QWORD *)&v63[0];
  *(_QWORD *)(a2 + 16) = v18;
  v19 = 2 * WindowBordersWithDpiAwareness;
  v20 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v20 + 30) & 0xC0) != 0 && *(char *)(v20 + 24) >= 0 )
  {
    if ( (*(_DWORD *)(v20 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v20 + 288) & 0xF) == 0
           && (v53 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v53 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v22 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v22 + 232) & 0x8000000) != 0 )
    {
      v23 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v22 + 288) & 0xF) == 0
           && (v54 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v54 + 8) + 64LL) & 1) != 0 )
    {
      v23 = 96;
    }
    else
    {
      v23 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v23);
  }
  else
  {
    v55 = v19;
    if ( v19 < 2 )
      v55 = 2;
    *(_DWORD *)(a2 + 24) = v55;
    DpiDependentMetric = v19;
    if ( v19 < 2 )
      DpiDependentMetric = 2;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(_QWORD *)(a2 + 32) = GetMaxTrackSizeForWindow(a1);
  v67 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v67;
  v68 = v11;
  if ( v11 )
    HMLockObject(v11);
  v25 = v66;
  v70 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v70;
  v71 = v25;
  HMLockObject(v25);
  if ( !a4 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  v27 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v28 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v28;
  if ( v12 )
  {
    v63[0] = *(_OWORD *)GetMonitorMaxArea(v63, a1, v11);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v64) - (int)v64
      || (v36 = HIDWORD(v64), v37 = DWORD1(v64), *(_DWORD *)(a2 + 12) < HIDWORD(v64) - DWORD1(v64)) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v27 = *(_QWORD *)&v63[0];
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v38 = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      v39 = v38;
      if ( v38 )
      {
        v51 = *(_DWORD *)(v38 + 48);
        if ( (v51 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v52 = *(_DWORD *)(a2 + 16);
          if ( v52 != v73 && *(_DWORD *)(v39 + 40) == v52 )
          {
            *(_DWORD *)(v39 + 48) = v51 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 16) = v73;
            *(_DWORD *)(a2 + 20) = v74;
          }
        }
      }
      v40 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v40 + 232) & 0x8000000) != 0 )
      {
        v41 = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( (*(_DWORD *)(v40 + 288) & 0xF) == 0
             && (v56 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v56 + 8) + 64LL) & 1) != 0 )
      {
        v41 = 96;
      }
      else
      {
        v41 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      v42 = *(_DWORD *)(a2 + 20);
      if ( (int)(v42 + GetDpiDependentMetric(2LL, v41)) <= v37 && v42 + *(_DWORD *)(a2 + 12) >= v36 )
        v63[0] = *(_OWORD *)GetMonitorRectForWindow(v63, v65, a1);
      v27 = *(_QWORD *)&v63[0];
      v43 = HIDWORD(*((_QWORD *)&v63[0] + 1));
      *(_DWORD *)(a2 + 8) += v64 + DWORD2(v63[0]) - LODWORD(v63[0]) - DWORD2(v64);
      v28 = (unsigned int)(v37 + v43 - HIDWORD(v27) - v36);
      *(_DWORD *)(a2 + 12) += v28;
    }
    *(_DWORD *)(a2 + 16) += v27;
    *(_DWORD *)(a2 + 20) += DWORD1(v63[0]);
  }
  ThreadUnlock1(v28, v27, v26);
  ThreadUnlock1(v30, v29, v31);
  v32 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v32 + 16) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v32 + 232) & 0x8000000) != 0 )
    {
      v44 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v32 + 288) & 0xF) == 0
           && (v57 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v57 + 8) + 64LL) & 1) != 0 )
    {
      v44 = 96;
    }
    else
    {
      v44 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    v45 = GetDpiDependentMetric(17LL, v44);
    v46 = *((_QWORD *)a1 + 5);
    v33 = v45;
    v47 = *(_BYTE *)(v46 + 30) & 8;
    if ( *(char *)(v46 + 24) < 0 )
    {
      if ( v47 )
      {
        if ( (*(_DWORD *)(v46 + 232) & 0x8000000) != 0 )
        {
          v7 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( (*(_DWORD *)(v46 + 288) & 0xF) != 0
               || (v61 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v61 + 8) + 64LL) & 1) == 0 )
        {
          v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
        }
        v19 += GetDpiDependentMetric(23LL, v7);
      }
    }
    else
    {
      if ( v47 )
      {
        if ( (*(_BYTE *)(v46 + 30) & 3) != 0 )
        {
          if ( (*(_DWORD *)(v46 + 232) & 0x8000000) != 0 )
          {
            v48 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( (*(_DWORD *)(v46 + 288) & 0xF) == 0
                 && (v58 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v58 + 8) + 64LL) & 1) != 0 )
          {
            v48 = 96;
          }
          else
          {
            v48 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v49 = GetDpiDependentMetric(12LL, v48);
          v19 += v49 + 2 * v49;
        }
        else if ( (*(_BYTE *)(v46 + 25) & 4) != 0 )
        {
          if ( (*(_DWORD *)(v46 + 232) & 0x8000000) != 0 )
          {
            v60 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( (*(_DWORD *)(v46 + 288) & 0xF) == 0
                 && (v62 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v62 + 8) + 64LL) & 1) != 0 )
          {
            v60 = 96;
          }
          else
          {
            v60 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v19 += 2 * GetDpiDependentMetric(12LL, v60);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v50 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v50 + 232) & 0x8000000) != 0 )
          {
            v7 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( (*(_DWORD *)(v50 + 288) & 0xF) != 0
                 || (v59 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
                 || (*(_DWORD *)(**(_QWORD **)(v59 + 8) + 64LL) & 1) == 0 )
          {
            v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v19 += GetDpiDependentMetric(13LL, v7);
        }
      }
      v19 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16);
    }
    v19 += 4;
  }
  else
  {
    v33 = v19;
  }
  v34 = *(_DWORD *)(a2 + 24);
  if ( v34 <= v19 )
    v34 = v19;
  *(_DWORD *)(a2 + 24) = v34;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v33 )
    result = (unsigned int)v33;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
