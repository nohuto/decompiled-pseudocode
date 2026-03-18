/*
 * XREFs of GetInheritedMonitor @ 0x1C002D830
 * Callers:
 *     GetNewMonitor @ 0x1C002D640 (GetNewMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     DetectNewMonitor @ 0x1C01AEDC4 (DetectNewMonitor.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     UnionRect @ 0x1C0072864 (UnionRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F48F0 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C00F4A4C (IsTitleWindow.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C00F4AA0 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  __int64 v1; // rsi
  __int64 DesktopWindow; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 Prop; // rax
  unsigned int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbx
  int v16; // r13d
  __int64 v17; // r14
  int v18; // r13d
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // r9d
  __int64 v25; // r14
  int v26; // eax
  int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r14
  int v32; // eax
  int v33; // r15d
  __int64 v34; // rcx
  int v35; // [rsp+20h] [rbp-50h]
  int v36; // [rsp+20h] [rbp-50h]
  _QWORD v37[2]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v38; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v39[2]; // [rsp+48h] [rbp-28h] BYREF
  _QWORD v40[2]; // [rsp+58h] [rbp-18h] BYREF

  v1 = 0LL;
  if ( !*((_QWORD *)a1 + 10) )
    return v1;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v4 != DesktopWindow )
  {
    v5 = *(_QWORD *)(v4 + 40);
LABEL_4:
    v6 = *(_QWORD *)(v5 + 256);
    return ValidateHmonitorNoRip(v6);
  }
  Prop = RealGetProp(*((_QWORD *)a1 + 15), (unsigned __int16)gatomMonitorInheritance, 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v1;
    v29 = ValidateHwnd(Prop);
    if ( !v29 )
      return v1;
    v5 = *(_QWORD *)(v29 + 40);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    || (unsigned int)IsTitleWindow(a1, 0LL)
    || (*(_BYTE *)(v10 + 20) & 0x40) != 0
    || (*(_DWORD *)(v10 + 232) & 0x8000) != 0 )
  {
    return v1;
  }
  v11 = *((_QWORD *)a1 + 12);
  if ( !v11 )
  {
LABEL_13:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, *(_QWORD *)(*((_QWORD *)a1 + 34) + 8LL));
      if ( *(_QWORD *)v37[0] )
      {
        if ( v11 || (v11 = *(_QWORD *)(*(_QWORD *)v37[0] + 8LL)) != 0 )
          v11 &= -(__int64)((unsigned int)IntersectRect(
                                            &v38,
                                            (int *)(*((_QWORD *)a1 + 5) + 88LL),
                                            (int *)(*(_QWORD *)(v11 + 40) + 88LL)) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v37, v30);
    }
    if ( v11 )
    {
      v1 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v11 + 40) + 256LL));
      if ( v1 )
        return v1;
    }
    v12 = *((_QWORD *)a1 + 9);
    v13 = *((_QWORD *)a1 + 8);
    v38 = v12;
    while ( 1 )
    {
      v37[0] = v13;
      do
      {
        if ( v12 )
        {
          v14 = *((_QWORD *)a1 + 5);
          v15 = *(_QWORD *)(v38 + 40);
          v35 = *(_BYTE *)(v14 + 27) & 8;
          v16 = (*(_BYTE *)(v14 + 26) >> 3) & (unsigned __int8)~(*(_BYTE *)(v14 + 27) >> 5) & 1;
          if ( (*(_BYTE *)(v15 + 31) & 0x10) != 0
            && ((*(_BYTE *)(v15 + 16) & 8) != 0 || (*(_BYTE *)(v15 + 30) & 3) != 0)
            && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v15 + 104))
            && ((*(_BYTE *)(v15 + 26) & 8) == 0 || (*(_BYTE *)(v15 + 27) & 0x20) != 0)
            && (*(_QWORD *)(v22 + 424) == *(_QWORD *)(v23 + 424) || *(_QWORD *)(v22 + 416) == *(_QWORD *)(v23 + 416))
            && (((unsigned __int16)(*(_DWORD *)(v15 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v14 + 288) >> 8)) & 0x1FF) == 0 )
          {
            if ( !v24 && !v16 )
              goto LABEL_35;
            v31 = v14 + 88;
            v32 = IsAdjacentRect((const struct tagRECT *)v31, (const struct tagRECT *)(v15 + 88));
            v33 = v32;
            if ( !v35 || v32 || (unsigned int)IntersectRect(v39, (int *)v31, (int *)(v15 + 88)) )
            {
              if ( !v16 || v33 )
                goto LABEL_35;
              if ( (unsigned int)UnionRect(v39, v31, v15 + 88) )
              {
                v34 = v39[0] - *(_QWORD *)v31;
                if ( v39[0] == *(_QWORD *)v31 )
                  v34 = v39[1] - *(_QWORD *)(v31 + 8);
                if ( !v34 )
                  goto LABEL_35;
              }
            }
          }
          v13 = v37[0];
          v12 = *(_QWORD *)(v38 + 72);
          v38 = v12;
        }
        else if ( !v13 )
        {
          return v1;
        }
      }
      while ( !v13 );
      v17 = *((_QWORD *)a1 + 5);
      v15 = *(_QWORD *)(v13 + 40);
      v36 = *(_BYTE *)(v17 + 27) & 8;
      v18 = (*(_BYTE *)(v17 + 26) >> 3) & (unsigned __int8)~(*(_BYTE *)(v17 + 27) >> 5) & 1;
      if ( (*(_BYTE *)(v15 + 31) & 0x10) != 0
        && ((*(_BYTE *)(v15 + 16) & 8) != 0 || (*(_BYTE *)(v15 + 30) & 3) != 0)
        && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v15 + 104))
        && ((*(_BYTE *)(v15 + 26) & 8) == 0 || (*(_BYTE *)(v15 + 27) & 0x20) != 0)
        && (*(_QWORD *)(v19 + 424) == *(_QWORD *)(v20 + 424) || *(_QWORD *)(v19 + 416) == *(_QWORD *)(v20 + 416))
        && (((unsigned __int16)(*(_DWORD *)(v15 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v17 + 288) >> 8)) & 0x1FF) == 0 )
      {
        if ( !v21 && !v18 )
          break;
        v25 = v17 + 88;
        v26 = IsAdjacentRect((const struct tagRECT *)v25, (const struct tagRECT *)(v15 + 88));
        v27 = v26;
        if ( !v36 || v26 || (unsigned int)IntersectRect(v40, (int *)v25, (int *)(v15 + 88)) )
        {
          if ( !v18 || v27 )
            break;
          if ( (unsigned int)UnionRect(v40, v25, v15 + 88) )
          {
            v28 = v40[0] - *(_QWORD *)v25;
            if ( v40[0] == *(_QWORD *)v25 )
              v28 = v40[1] - *(_QWORD *)(v25 + 8);
            if ( !v28 )
              break;
          }
        }
      }
      v12 = v38;
      v13 = *(_QWORD *)(v37[0] + 64LL);
    }
LABEL_35:
    v6 = *(_QWORD *)(v15 + 256);
    return ValidateHmonitorNoRip(v6);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v11 + 16) + 416LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL)
    || (((unsigned __int16)(v9 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v11 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
  {
    do
    {
      if ( (unsigned int)IsCandidateTransformOwner((struct tagWND *)v11, a1) )
        break;
      v11 = *(_QWORD *)(v11 + 96);
    }
    while ( v11 );
    goto LABEL_13;
  }
  return 0LL;
}
