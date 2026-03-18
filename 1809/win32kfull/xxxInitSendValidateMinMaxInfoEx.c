/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C001D674
 * Callers:
 *     xxxAdjustSize @ 0x1C0069CEC (xxxAdjustSize.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     ?xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z @ 0x1C0124258 (-xxxEndGetWidnowTrackInfoAsync@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01E85DC (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     GetMonitorRectForWindow @ 0x1C001CCB8 (GetMonitorRectForWindow.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     _HasCaptionIcon @ 0x1C002142C (_HasCaptionIcon.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00691A4 (GetWindowBordersWithDpiAwareness.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetMaxTrackSizeForWindow @ 0x1C007AAB4 (GetMaxTrackSizeForWindow.c)
 *     GetWindowDpiLastNotify @ 0x1C00A7B60 (GetWindowDpiLastNotify.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     _GetClientRect @ 0x1C00BC9E8 (_GetClientRect.c)
 *     GetMonitorMaxArea @ 0x1C01190D8 (GetMonitorMaxArea.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(struct tagWND *a1, __int64 a2, struct tagMONITOR *a3, int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // r12
  __int128 v9; // xmm6
  __int64 v10; // rax
  struct tagMONITOR *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r8
  int WindowBordersWithDpiAwareness; // esi
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  __int64 Prop; // rax
  __int64 v19; // rax
  int v20; // esi
  __int64 v21; // rcx
  unsigned int WindowDpiLastNotify; // eax
  __int64 v23; // rcx
  unsigned int v24; // eax
  int DpiDependentMetric; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
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
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // edx
  int v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  __int128 v64; // [rsp+28h] [rbp-89h] BYREF
  __int128 v65; // [rsp+38h] [rbp-79h]
  __int128 v66; // [rsp+48h] [rbp-69h]
  __int64 DesktopWindow; // [rsp+58h] [rbp-59h]
  _QWORD v68[3]; // [rsp+60h] [rbp-51h] BYREF
  _QWORD v69[3]; // [rsp+78h] [rbp-39h] BYREF
  __int128 v70; // [rsp+90h] [rbp-21h] BYREF
  _BYTE v71[16]; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v72; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v73; // [rsp+120h] [rbp+6Fh]

  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(gpsi + 2128LL);
  v7 = 96;
  v8 = *(_QWORD *)(GetDispInfo() + 96);
  v9 = *GetMonitorRectForWindow(&v70, v8, a1);
  v66 = v9;
  DesktopWindow = GetDesktopWindow(a1);
  v10 = *((_QWORD *)a1 + 10);
  *(_QWORD *)&v65 = v10;
  if ( v10 == DesktopWindow )
  {
    v64 = v9;
    v11 = _MonitorFromWindowInternal(a1, 1u, 1);
    if ( a3 )
      v11 = a3;
    v73 = (__int64)v11;
  }
  else
  {
    v11 = 0LL;
    v73 = 0LL;
    GetClientRect(v10, &v64);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1, v12, v13);
  v15 = WindowBordersWithDpiAwareness - (v64 - WindowBordersWithDpiAwareness);
  LODWORD(v64) = v64 - WindowBordersWithDpiAwareness;
  DWORD1(v64) -= WindowBordersWithDpiAwareness;
  DWORD2(v64) += v15;
  v16 = WindowBordersWithDpiAwareness - DWORD1(v64) + HIDWORD(v64);
  *(_DWORD *)(a2 + 8) = DWORD2(v64);
  v17 = (unsigned __int16)atomCheckpointProp;
  HIDWORD(v64) = v16;
  *(_DWORD *)(a2 + 12) = v16;
  Prop = GetProp(a1, v17, 1LL);
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
           && (v50 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v50 + 8) + 64LL) & 1) != 0 )
    {
      WindowDpiLastNotify = 96;
    }
    else
    {
      WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    *(_DWORD *)(a2 + 24) = GetDpiDependentMetric(16LL, WindowDpiLastNotify);
    v23 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v23 + 232) & 0x8000000) != 0 )
    {
      v24 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v23 + 288) & 0xF) == 0
           && (v51 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v51 + 8) + 64LL) & 1) != 0 )
    {
      v24 = 96;
    }
    else
    {
      v24 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
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
  v68[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v68;
  v68[1] = v11;
  if ( v11 )
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  v69[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v69;
  v69[1] = v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  if ( !a4 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  v26 = gpsi;
  *(_DWORD *)a2 = *(_DWORD *)(gpsi + 2124LL);
  v27 = *(unsigned int *)(gpsi + 2128LL);
  v28 = DesktopWindow;
  *(_DWORD *)(a2 + 4) = v27;
  if ( (_QWORD)v65 == v28 )
  {
    v65 = *(_OWORD *)GetMonitorMaxArea(v71, a1, v11);
    if ( *(_DWORD *)(a2 + 8) < DWORD2(v66) - (int)v66
      || (v35 = HIDWORD(v66), v36 = DWORD1(v66), *(_DWORD *)(a2 + 12) < HIDWORD(v66) - DWORD1(v66)) )
    {
      SetOrClrWF(0, (__int64)a1, 0x340u, 1);
      v26 = v65;
    }
    else
    {
      SetOrClrWF(1, (__int64)a1, 0x340u, 1);
      v37 = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
      v38 = v37;
      if ( v37 )
      {
        v52 = *(_DWORD *)(v37 + 48);
        if ( (v52 & 0x40) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 4) != 0 )
        {
          v53 = *(_DWORD *)(a2 + 16);
          v54 = v64;
          if ( v53 != (_DWORD)v64 && *(_DWORD *)(v38 + 40) == v53 )
          {
            v55 = DWORD1(v64);
            *(_DWORD *)(v38 + 48) = v52 & 0xFFFFFFBF;
            *(_DWORD *)(a2 + 16) = v54;
            *(_DWORD *)(a2 + 20) = v55;
          }
        }
      }
      v39 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v39 + 232) & 0x8000000) != 0 )
      {
        v40 = GetWindowDpiLastNotify(a1);
      }
      else if ( (*(_DWORD *)(v39 + 288) & 0xF) == 0
             && (v57 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
             && (*(_DWORD *)(**(_QWORD **)(v57 + 8) + 64LL) & 1) != 0 )
      {
        v40 = 96;
      }
      else
      {
        v40 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
      }
      v41 = *(_DWORD *)(a2 + 20);
      if ( (int)(v41 + GetDpiDependentMetric(2LL, v40)) <= v36 && v41 + *(_DWORD *)(a2 + 12) >= v35 )
        v65 = *GetMonitorRectForWindow(&v72, v73, a1);
      v26 = v65;
      v42 = HIDWORD(*((_QWORD *)&v65 + 1));
      *(_DWORD *)(a2 + 8) += v66 + DWORD2(v65) - v65 - DWORD2(v66);
      v27 = (unsigned int)(v36 + v42 - HIDWORD(v26) - v35);
      *(_DWORD *)(a2 + 12) += v27;
    }
    *(_DWORD *)(a2 + 16) += v26;
    *(_DWORD *)(a2 + 20) += DWORD1(v65);
  }
  ThreadUnlock1(v27, v26);
  ThreadUnlock1(v30, v29);
  v31 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v31 + 16) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v31 + 232) & 0x8000000) != 0 )
    {
      v43 = GetWindowDpiLastNotify(a1);
    }
    else if ( (*(_DWORD *)(v31 + 288) & 0xF) == 0
           && (v58 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
           && (*(_DWORD *)(**(_QWORD **)(v58 + 8) + 64LL) & 1) != 0 )
    {
      v43 = 96;
    }
    else
    {
      v43 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
    }
    v44 = GetDpiDependentMetric(17LL, v43);
    v45 = *((_QWORD *)a1 + 5);
    v32 = v44;
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
               || (v62 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
               || (*(_DWORD *)(**(_QWORD **)(v62 + 8) + 64LL) & 1) == 0 )
        {
          v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
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
                 && (v59 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v59 + 8) + 64LL) & 1) != 0 )
          {
            v47 = 96;
          }
          else
          {
            v47 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v48 = GetDpiDependentMetric(12LL, v47);
          v20 += v48 + 2 * v48;
        }
        else if ( (*(_BYTE *)(v45 + 25) & 4) != 0 )
        {
          if ( (*(_DWORD *)(v45 + 232) & 0x8000000) != 0 )
          {
            v61 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(v45 + 288) & 0xF) == 0
                 && (v63 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
                 && (*(_DWORD *)(**(_QWORD **)(v63 + 8) + 64LL) & 1) != 0 )
          {
            v61 = 96;
          }
          else
          {
            v61 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
          }
          v20 += 2 * GetDpiDependentMetric(12LL, v61);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
        {
          v49 = *((_QWORD *)a1 + 5);
          if ( (*(_DWORD *)(v49 + 232) & 0x8000000) != 0 )
          {
            v7 = GetWindowDpiLastNotify(a1);
          }
          else if ( (*(_DWORD *)(v49 + 288) & 0xF) != 0
                 || (v60 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) == 0
                 || (*(_DWORD *)(**(_QWORD **)(v60 + 8) + 64LL) & 1) == 0 )
          {
            v7 = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
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
    v32 = v20;
  }
  v33 = *(_DWORD *)(a2 + 24);
  if ( v33 <= v20 )
    v33 = v20;
  *(_DWORD *)(a2 + 24) = v33;
  result = *(unsigned int *)(a2 + 28);
  if ( (int)result <= v32 )
    result = (unsigned int)v32;
  *(_DWORD *)(a2 + 28) = result;
  return result;
}
