/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C0093308
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxAdjustSize @ 0x1C0109AFC (xxxAdjustSize.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C012D8F0 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FDF48 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     GetMonitorMaxArea @ 0x1C0091014 (GetMonitorMaxArea.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C0091CCC (_GetClientRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00920C8 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowDpiLastNotify @ 0x1C0093050 (GetWindowDpiLastNotify.c)
 *     GetMaxTrackSizeForWindow @ 0x1C0093AB4 (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0095B2C (GetMonitorRectForWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C00A9D50 (_HasCaptionIcon.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  unsigned int v7; // r14d
  __int128 v8; // xmm6
  __int64 DesktopWindow; // rax
  __int64 v10; // r8
  struct tagMONITOR *v11; // r15
  int v12; // r12d
  int WindowBordersWithDpiAwareness; // esi
  int v14; // edx
  int v15; // eax
  __int64 Prop; // rax
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v21; // rcx
  unsigned int v22; // eax
  int DpiDependentMetric; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // r15d
  int v33; // eax
  __int64 result; // rax
  int v35; // r12d
  signed int v36; // r13d
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rcx
  unsigned int v40; // eax
  int v41; // r15d
  __int64 v42; // rcx
  unsigned int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  char v46; // dl
  unsigned int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  int v50; // edx
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  _OWORD v62[2]; // [rsp+28h] [rbp-59h] BYREF
  __int128 v63; // [rsp+48h] [rbp-39h] BYREF
  struct tagMONITOR *v64; // [rsp+58h] [rbp-29h]
  __int64 v65; // [rsp+60h] [rbp-21h]
  __int64 v66; // [rsp+68h] [rbp-19h] BYREF
  struct tagMONITOR *v67; // [rsp+70h] [rbp-11h]
  __int64 v68; // [rsp+78h] [rbp-9h]
  __int64 v69; // [rsp+80h] [rbp-1h] BYREF
  __int64 v70; // [rsp+88h] [rbp+7h]
  __int64 v71; // [rsp+90h] [rbp+Fh]
  int v72; // [rsp+E8h] [rbp+67h]
  int v73; // [rsp+F0h] [rbp+6Fh]

  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v62[0] = 0uLL;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  v7 = 96;
  v65 = *(_QWORD *)(GetDispInfo() + 96);
  v8 = *(_OWORD *)GetMonitorRectForWindow(&v63, v65, a1);
  v63 = v8;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v10 == DesktopWindow )
  {
    v12 = 1;
    v62[0] = v8;
    v11 = _MonitorFromWindowInternal(a1, 1, 1);
    if ( a3 )
      v11 = a3;
    v64 = v11;
  }
  else
  {
    v11 = 0LL;
    v12 = 0;
    v64 = 0LL;
    GetClientRect(v10, (__int64)v62);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
  v72 = LODWORD(v62[0]) - WindowBordersWithDpiAwareness;
  v14 = WindowBordersWithDpiAwareness - (LODWORD(v62[0]) - WindowBordersWithDpiAwareness) + DWORD2(v62[0]);
  LODWORD(v62[0]) -= WindowBordersWithDpiAwareness;
  v15 = WindowBordersWithDpiAwareness - (DWORD1(v62[0]) - WindowBordersWithDpiAwareness);
  v73 = DWORD1(v62[0]) - WindowBordersWithDpiAwareness;
  DWORD1(v62[0]) -= WindowBordersWithDpiAwareness;
  *(_DWORD *)(a2 + 12) = v15 + HIDWORD(v62[0]);
  *(_DWORD *)(a2 + 8) = v14;
  Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v17 = *(_QWORD *)(Prop + 40);
  else
    v17 = *(_QWORD *)&v62[0];
  *(_QWORD *)(a2 + 16) = v17;
  v18 = 2 * WindowBordersWithDpiAwareness;
  v19 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v19 + 30) & 0xC0) != 0 && *(char *)(v19 + 24) >= 0 )
  {
    if ( (*(_DWORD *)(v19 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v19 + 288) & 0xF) == 0
           && (v52 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v52 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v21 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v21 + 232) & 0x8000000) != 0 )
    {
      v22 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v21 + 288) & 0xF) == 0
           && (v53 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v53 + 8) + 64LL) & 1) != 0 )
    {
      v22 = 96;
    }
    else
    {
      v22 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v22);
  }
  else
  {
    v54 = v18;
    if ( v18 < 2 )
      v54 = 2;
    *(_DWORD *)(a2 + 24) = v54;
    DpiDependentMetric = v18;
    if ( v18 < 2 )
      DpiDependentMetric = 2;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(_QWORD *)(a2 + 32) = GetMaxTrackSizeForWindow(a1);
  v66 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v66;
  v67 = v11;
  if ( v11 )
    HMLockObject(v11);
  v24 = v65;
  v69 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v69;
  v70 = v24;
  HMLockObject(v24);
  if ( !a4 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  v26 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v27 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v27;
  if ( v12 )
  {
    v62[0] = *GetMonitorMaxArea(v62, (__int64)a1, (__int64)v11);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v63) - (int)v63
      || (v35 = HIDWORD(v63), v36 = DWORD1(v63), *(_DWORD *)(a2 + 12) < HIDWORD(v63) - DWORD1(v63)) )
    {
      SetOrClrWF(0, (__int64)a1, 0x340u, 1);
      v26 = *(_QWORD *)&v62[0];
    }
    else
    {
      SetOrClrWF(1, (__int64)a1, 0x340u, 1);
      v37 = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      v38 = v37;
      if ( v37 )
      {
        v50 = *(_DWORD *)(v37 + 48);
        if ( (v50 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v51 = *(_DWORD *)(a2 + 16);
          if ( v51 != v72 && *(_DWORD *)(v38 + 40) == v51 )
          {
            *(_DWORD *)(v38 + 48) = v50 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 16) = v72;
            *(_DWORD *)(a2 + 20) = v73;
          }
        }
      }
      v39 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v39 + 232) & 0x8000000) != 0 )
      {
        v40 = GetWindowDpiLastNotify((__int64)a1);
      }
      else if ( (*(_DWORD *)(v39 + 288) & 0xF) == 0
             && (v55 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v55 + 8) + 64LL) & 1) != 0 )
      {
        v40 = 96;
      }
      else
      {
        v40 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      v41 = *(_DWORD *)(a2 + 20);
      if ( (int)(v41 + GetDpiDependentMetric(2LL, v40)) <= v36 && v41 + *(_DWORD *)(a2 + 12) >= v35 )
        v62[0] = *(_OWORD *)GetMonitorRectForWindow(v62, v64, a1);
      v26 = *(_QWORD *)&v62[0];
      v42 = HIDWORD(*((_QWORD *)&v62[0] + 1));
      *(_DWORD *)(a2 + 8) += v63 + DWORD2(v62[0]) - LODWORD(v62[0]) - DWORD2(v63);
      v27 = (unsigned int)(v36 + v42 - HIDWORD(v26) - v35);
      *(_DWORD *)(a2 + 12) += v27;
    }
    *(_DWORD *)(a2 + 16) += v26;
    *(_DWORD *)(a2 + 20) += DWORD1(v62[0]);
  }
  ThreadUnlock1(v27, v26, v25);
  ThreadUnlock1(v29, v28, v30);
  v31 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v31 + 16) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v31 + 232) & 0x8000000) != 0 )
    {
      v43 = GetWindowDpiLastNotify((__int64)a1);
    }
    else if ( (*(_DWORD *)(v31 + 288) & 0xF) == 0
           && (v56 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v56 + 8) + 64LL) & 1) != 0 )
    {
      v43 = 96;
    }
    else
    {
      v43 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    v44 = GetDpiDependentMetric(17LL, v43);
    v45 = *((_QWORD *)a1 + 5);
    v32 = v44;
    v46 = *(_BYTE *)(v45 + 30) & 8;
    if ( *(char *)(v45 + 24) < 0 )
    {
      if ( v46 )
      {
        if ( (*(_DWORD *)(v45 + 232) & 0x8000000) != 0 )
        {
          v7 = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( (*(_DWORD *)(v45 + 288) & 0xF) != 0
               || (v60 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 64LL) & 1) == 0 )
        {
          v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
        }
        v18 += GetDpiDependentMetric(23LL, v7);
      }
    }
    else
    {
      if ( v46 )
      {
        if ( (*(_BYTE *)(v45 + 30) & 3) != 0 )
        {
          if ( (*(_DWORD *)(v45 + 232) & 0x8000000) != 0 )
          {
            v47 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( (*(_DWORD *)(v45 + 288) & 0xF) == 0
                 && (v57 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v57 + 8) + 64LL) & 1) != 0 )
          {
            v47 = 96;
          }
          else
          {
            v47 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v48 = GetDpiDependentMetric(12LL, v47);
          v18 += v48 + 2 * v48;
        }
        else if ( (*(_BYTE *)(v45 + 25) & 4) != 0 )
        {
          if ( (*(_DWORD *)(v45 + 232) & 0x8000000) != 0 )
          {
            v59 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( (*(_DWORD *)(v45 + 288) & 0xF) == 0
                 && (v61 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v61 + 8) + 64LL) & 1) != 0 )
          {
            v59 = 96;
          }
          else
          {
            v59 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v18 += 2 * GetDpiDependentMetric(12LL, v59);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v49 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
          {
            v7 = GetWindowDpiLastNotify((__int64)a1);
          }
          else if ( (*(_DWORD *)(v49 + 288) & 0xF) != 0
                 || (v58 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
                 || (*(_DWORD *)(**(_QWORD **)(v58 + 8) + 64LL) & 1) == 0 )
          {
            v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v18 += GetDpiDependentMetric(13LL, v7);
        }
      }
      v18 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16);
    }
    v18 += 4;
  }
  else
  {
    v32 = v18;
  }
  v33 = *(_DWORD *)(a2 + 24);
  if ( v33 <= v18 )
    v33 = v18;
  *(_DWORD *)(a2 + 24) = v33;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v32 )
    result = (unsigned int)v32;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
