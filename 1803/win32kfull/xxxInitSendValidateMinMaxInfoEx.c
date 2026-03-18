/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C0036384
 * Callers:
 *     xxxAdjustSize @ 0x1C002219C (xxxAdjustSize.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0062DC4 (xxxEndGetWidnowTrackInfoAsync.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01C316C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     GetWindowBordersWithDpiAwareness @ 0x1C0022390 (GetWindowBordersWithDpiAwareness.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     GetMonitorMaxArea @ 0x1C0070B88 (GetMonitorMaxArea.c)
 *     GetWindowDpiLastNotify @ 0x1C00724A0 (GetWindowDpiLastNotify.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMaxTrackSizeForWindow @ 0x1C0073494 (GetMaxTrackSizeForWindow.c)
 *     GetMonitorRectForWindow @ 0x1C0073764 (GetMonitorRectForWindow.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     _HasCaptionIcon @ 0x1C00C4988 (_HasCaptionIcon.c)
 *     _GetClientRect @ 0x1C00E9968 (_GetClientRect.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // r15
  __int128 v9; // xmm6
  __int64 v10; // rax
  struct tagMONITOR *v11; // r12
  int WindowBordersWithDpiAwareness; // esi
  unsigned int v13; // r8d
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rdx
  __int64 Prop; // rax
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  int DpiDependentMetric; // eax
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
  int v36; // r13d
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
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int128 v64; // [rsp+28h] [rbp-79h] BYREF
  __int128 v65; // [rsp+38h] [rbp-69h]
  __int128 v66; // [rsp+48h] [rbp-59h]
  _QWORD v67[3]; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v68[3]; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v69[16]; // [rsp+88h] [rbp-19h] BYREF
  _BYTE v70[16]; // [rsp+98h] [rbp-9h] BYREF
  _BYTE v71[32]; // [rsp+A8h] [rbp+7h] BYREF
  __int64 DesktopWindow; // [rsp+110h] [rbp+6Fh]

  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  v7 = 96;
  v8 = *(_QWORD *)(GetDispInfo() + 96);
  v9 = *(_OWORD *)GetMonitorRectForWindow(v69, v8, a1);
  v65 = v9;
  DesktopWindow = GetDesktopWindow((__int64)a1);
  v10 = *((_QWORD *)a1 + 10);
  *(_QWORD *)&v66 = v10;
  if ( v10 == DesktopWindow )
  {
    v64 = v9;
    v11 = _MonitorFromWindowInternal(a1, 1u, 1);
    if ( a3 )
      v11 = a3;
  }
  else
  {
    v11 = 0LL;
    GetClientRect(v10, &v64);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
  v13 = DWORD1(v64) - WindowBordersWithDpiAwareness;
  v14 = WindowBordersWithDpiAwareness - (v64 - WindowBordersWithDpiAwareness);
  LODWORD(v64) = v64 - WindowBordersWithDpiAwareness;
  v15 = HIDWORD(v64);
  v16 = v14 + DWORD2(v64);
  *(_DWORD *)(a2 + 8) = v14 + DWORD2(v64);
  *(_QWORD *)((char *)&v64 + 4) = __PAIR64__(v16, v13);
  v17 = (unsigned __int16)atomCheckpointProp;
  HIDWORD(v64) = WindowBordersWithDpiAwareness - v13 + v15;
  *(_DWORD *)(a2 + 12) = HIDWORD(v64);
  Prop = RealGetProp(*((_QWORD *)a1 + 15), v17, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 48) & 0x40) != 0 )
    v19 = *(_QWORD *)(Prop + 40);
  else
    v19 = v64;
  *(_QWORD *)(a2 + 16) = v19;
  v20 = 2 * WindowBordersWithDpiAwareness;
  v21 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v21 + 30) & 0xC0) != 0 && *(char *)(v21 + 24) >= 0 )
  {
    if ( (*(_DWORD *)(v21 + 232) & 0x8000000) != 0 )
    {
      WindowDpiLastNotify = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v21 + 288) & 0xF) == 0
           && (v54 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v54 + 8) + 52LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v23 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v23 + 232) & 0x8000000) != 0 )
    {
      v24 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v23 + 288) & 0xF) == 0
           && (v55 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v55 + 8) + 52LL) & 1) != 0 )
    {
      v24 = 96;
    }
    else
    {
      v24 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    DpiDependentMetric = GetDpiDependentMetric(17LL, v24);
  }
  else
  {
    v56 = v20;
    if ( v20 < 2 )
      v56 = 2;
    *(_DWORD *)(a2 + 24) = v56;
    DpiDependentMetric = v20;
    if ( v20 < 2 )
      DpiDependentMetric = 2;
  }
  *(_DWORD *)(a2 + 28) = DpiDependentMetric;
  *(_QWORD *)(a2 + 32) = GetMaxTrackSizeForWindow(a1);
  v67[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v67;
  v67[1] = v11;
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  v68[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v68;
  v68[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  if ( !a4 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  v27 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v28 = *(unsigned int *)(gpsi + 2128LL);
  *(_DWORD *)(a2 + 4) = v28;
  if ( (_QWORD)v66 == DesktopWindow )
  {
    v66 = *(_OWORD *)GetMonitorMaxArea(v70, a1, v11);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v65) - (int)v65
      || (v36 = HIDWORD(v65), *(_DWORD *)(a2 + 12) < HIDWORD(v65) - DWORD1(v65)) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v27 = v66;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v37 = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)atomCheckpointProp, 1LL);
      v38 = v37;
      if ( v37 )
      {
        v50 = *(_DWORD *)(v37 + 48);
        if ( (v50 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v51 = *(_DWORD *)(a2 + 16);
          v52 = v64;
          if ( v51 != (_DWORD)v64 && *(_DWORD *)(v38 + 40) == v51 )
          {
            v53 = DWORD1(v64);
            *(_DWORD *)(v38 + 48) = v50 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 16) = v52;
            *(_DWORD *)(a2 + 20) = v53;
          }
        }
      }
      v39 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v39 + 232) & 0x8000000) != 0 )
      {
        v40 = GetWindowDpiLastNotify(a1);
      }
      else if ( (*(_DWORD *)(v39 + 288) & 0xF) == 0
             && (v57 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v57 + 8) + 52LL) & 1) != 0 )
      {
        v40 = 96;
      }
      else
      {
        v40 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
      }
      v41 = *(_DWORD *)(a2 + 20);
      if ( (int)(v41 + GetDpiDependentMetric(2LL, v40)) <= SDWORD1(v65) && v41 + *(_DWORD *)(a2 + 12) >= v36 )
        v66 = *(_OWORD *)GetMonitorRectForWindow(v71, v11, a1);
      v27 = v66;
      v42 = HIDWORD(*((_QWORD *)&v66 + 1));
      *(_DWORD *)(a2 + 8) += v65 + DWORD2(v66) - v66 - DWORD2(v65);
      v28 = (unsigned int)(DWORD1(v65) + v42 - HIDWORD(v27) - v36);
      *(_DWORD *)(a2 + 12) += v28;
    }
    *(_DWORD *)(a2 + 16) += v27;
    *(_DWORD *)(a2 + 20) += DWORD1(v66);
  }
  ThreadUnlock1(v28, v27, v26);
  ThreadUnlock1(v30, v29, v31);
  v32 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v32 + 16) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v32 + 232) & 0x8000000) != 0 )
    {
      v43 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v32 + 288) & 0xF) == 0
           && (v58 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v58 + 8) + 52LL) & 1) != 0 )
    {
      v43 = 96;
    }
    else
    {
      v43 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
    }
    v44 = GetDpiDependentMetric(17LL, v43);
    v45 = *((_QWORD *)a1 + 5);
    v33 = v44;
    v46 = *(_BYTE *)(v45 + 30);
    if ( *(char *)(v45 + 24) < 0 )
    {
      if ( (v46 & 8) != 0 )
      {
        if ( (*(_DWORD *)(v45 + 232) & 0x8000000) != 0 )
        {
          v7 = GetWindowDpiLastNotify(a1);
        }
        else if ( (*(_DWORD *)(v45 + 288) & 0xF) != 0
               || (v60 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 52LL) & 1) == 0 )
        {
          v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
        }
        v20 += GetDpiDependentMetric(23LL, v7);
      }
    }
    else
    {
      if ( (v46 & 8) != 0 )
      {
        if ( (v46 & 3) != 0 )
        {
          if ( (*(_DWORD *)(v45 + 232) & 0x8000000) != 0 )
          {
            v47 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(v45 + 288) & 0xF) == 0
                 && (v61 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v61 + 8) + 52LL) & 1) != 0 )
          {
            v47 = 96;
          }
          else
          {
            v47 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v48 = GetDpiDependentMetric(12LL, v47);
          v20 += v48 + 2 * v48;
        }
        else if ( (*(_BYTE *)(v45 + 25) & 4) != 0 )
        {
          if ( (*(_DWORD *)(v45 + 232) & 0x8000000) != 0 )
          {
            v59 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(v45 + 288) & 0xF) == 0
                 && (v62 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v62 + 8) + 52LL) & 1) != 0 )
          {
            v59 = 96;
          }
          else
          {
            v59 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v20 += 2 * GetDpiDependentMetric(12LL, v59);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v49 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
          {
            v7 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(v49 + 288) & 0xF) != 0
                 || (v63 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) == 0
                 || (*(_DWORD *)(**(_QWORD **)(v63 + 8) + 52LL) & 1) == 0 )
          {
            v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
          }
          v20 += GetDpiDependentMetric(13LL, v7);
        }
      }
      v20 += 4 * *(_DWORD *)(GetDPIServerInfo() + 16);
    }
    v20 += 4;
  }
  else
  {
    v33 = v20;
  }
  v34 = *(_DWORD *)(a2 + 24);
  if ( v34 <= v20 )
    v34 = v20;
  *(_DWORD *)(a2 + 24) = v34;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v33 )
    result = (unsigned int)v33;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
