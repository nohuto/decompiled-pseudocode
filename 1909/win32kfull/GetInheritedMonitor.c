/*
 * XREFs of GetInheritedMonitor @ 0x1C006BA24
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     GetNewMonitor @ 0x1C006B820 (GetNewMonitor.c)
 *     DetectNewMonitor @ 0x1C01E6780 (DetectNewMonitor.c)
 * Callees:
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C0013DAC (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     IsTitleWindow @ 0x1C0013F48 (IsTitleWindow.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?IsAdjacentRect@@YAHPEBUtagRECT@@0@Z @ 0x1C0014AA0 (-IsAdjacentRect@@YAHPEBUtagRECT@@0@Z.c)
 *     UnionRect @ 0x1C0032D48 (UnionRect.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall GetInheritedMonitor(struct tagWND *a1)
{
  unsigned int v1; // r12d
  __int64 v2; // r13
  __int64 DesktopWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 Prop; // rax
  __int64 v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // edx
  unsigned int v22; // r8d
  int v23; // ecx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // r9d
  unsigned int v28; // edx
  unsigned int v29; // r8d
  int v30; // ecx
  int v31; // eax
  __int64 v32; // rax
  unsigned int v33; // ecx
  int v34; // eax
  __int64 v35; // rbx
  int v36; // eax
  int v37; // r14d
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rbx
  int v42; // eax
  int v43; // r14d
  __int64 v44; // rcx
  int v45; // [rsp+20h] [rbp-50h]
  int v46; // [rsp+20h] [rbp-50h]
  _QWORD v47[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v48[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v49; // [rsp+48h] [rbp-28h] BYREF
  __int64 v50; // [rsp+50h] [rbp-20h]
  __int64 v51; // [rsp+58h] [rbp-18h] BYREF
  __int64 v52; // [rsp+60h] [rbp-10h]

  v2 = 0LL;
  if ( !*((_QWORD *)a1 + 13) )
    return v2;
  DesktopWindow = GetDesktopWindow(a1);
  if ( v5 != DesktopWindow )
  {
    v6 = *(_QWORD *)(v5 + 40);
LABEL_4:
    v7 = *(_QWORD *)(v6 + 256);
    return ValidateHmonitorNoRip(v7);
  }
  Prop = GetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, 1LL);
  if ( Prop )
  {
    if ( *(_QWORD *)a1 == Prop )
      return v2;
    v32 = ValidateHwnd(Prop);
    if ( !v32 )
      return v2;
    v6 = *(_QWORD *)(v32 + 40);
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2
    || (unsigned int)IsTitleWindow((__int64)a1, 0)
    || (*(_BYTE *)(v10 + 20) & 0x40) != 0
    || (*(_DWORD *)(v10 + 232) & 0x8000) != 0 )
  {
    return v2;
  }
  v12 = *((_QWORD *)a1 + 15);
  if ( !v12 )
  {
LABEL_13:
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 6LL) & 1) != 0
      && (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x3FFF) == 0x29C )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v48);
      if ( *(_QWORD *)v48[0] )
      {
        v47[0] = 0LL;
        v47[1] = 0LL;
        if ( v12 || (v12 = *(_QWORD *)(*(_QWORD *)v48[0] + 8LL)) != 0 )
          v12 &= -(__int64)((unsigned int)IntersectRect(
                                            v47,
                                            (int *)(*((_QWORD *)a1 + 5) + 88LL),
                                            (int *)(*(_QWORD *)(v12 + 40) + 88LL)) != 0);
      }
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48, v39, v40);
    }
    if ( v12 )
    {
      v2 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v12 + 40) + 256LL));
      if ( v2 )
        return v2;
    }
    v13 = *((_QWORD *)a1 + 12);
    v14 = *((_QWORD *)a1 + 11);
    v47[0] = v13;
    while ( 1 )
    {
      v48[0] = v14;
      do
      {
        if ( v13 )
        {
          v15 = *((_QWORD *)a1 + 5);
          v49 = 0LL;
          v50 = 0LL;
          v16 = *(_QWORD *)(v47[0] + 40LL);
          LOBYTE(v1) = ~*(_BYTE *)(v15 + 27);
          v45 = *(_BYTE *)(v15 + 27) & 8;
          v1 = (*(_BYTE *)(v15 + 26) >> 3) & (unsigned __int8)(v1 >> 5) & 1;
          if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0
            && ((*(_BYTE *)(v16 + 16) & 8) != 0 || (*(_BYTE *)(v16 + 30) & 3) != 0)
            && !IsRectEmptyInl((const struct tagRECT *)(v16 + 104))
            && ((*(_BYTE *)(v16 + 26) & 8) == 0 || (*(_BYTE *)(v16 + 27) & 0x20) != 0)
            && (*(_QWORD *)(v25 + 424) == *(_QWORD *)(v26 + 424) || *(_QWORD *)(v25 + 416) == *(_QWORD *)(v26 + 416)) )
          {
            v28 = *(_DWORD *)(v16 + 288);
            v29 = *(_DWORD *)(v15 + 288);
            if ( (((unsigned __int16)(v29 >> 8) ^ (unsigned __int16)(v28 >> 8)) & 0x1FF) == 0 )
            {
              v30 = (v28 & 0xF) == 2 && (v28 & 0x20000000) != 0;
              v31 = (v29 & 0xF) == 2 && (v29 & 0x20000000) != 0;
              if ( v30 == v31 )
              {
                if ( !v27 && !v1 )
                  goto LABEL_40;
                v41 = v15 + 88;
                v42 = IsAdjacentRect((const struct tagRECT *)v41, (const struct tagRECT *)(v16 + 88));
                v43 = v42;
                if ( !v45 || v42 || (unsigned int)IntersectRect(&v49, (int *)v41, (int *)(v16 + 88)) )
                {
                  if ( !v1 || v43 )
                    goto LABEL_40;
                  if ( (unsigned int)UnionRect(&v49, (int *)v41, (int *)(v16 + 88)) )
                  {
                    v44 = v49 - *(_QWORD *)v41;
                    if ( v49 == *(_QWORD *)v41 )
                      v44 = v50 - *(_QWORD *)(v41 + 8);
                    if ( !v44 )
                      goto LABEL_40;
                  }
                }
              }
            }
          }
          v14 = v48[0];
          v13 = *(_QWORD *)(v47[0] + 96LL);
          v47[0] = v13;
        }
        else if ( !v14 )
        {
          return v2;
        }
      }
      while ( !v14 );
      v17 = *((_QWORD *)a1 + 5);
      v16 = *(_QWORD *)(v14 + 40);
      v51 = 0LL;
      v52 = 0LL;
      LOBYTE(v1) = ~*(_BYTE *)(v17 + 27);
      v46 = *(_BYTE *)(v17 + 27) & 8;
      v1 = (*(_BYTE *)(v17 + 26) >> 3) & (unsigned __int8)(v1 >> 5) & 1;
      if ( (*(_BYTE *)(v16 + 31) & 0x10) != 0
        && ((*(_BYTE *)(v16 + 16) & 8) != 0 || (*(_BYTE *)(v16 + 30) & 3) != 0)
        && !IsRectEmptyInl((const struct tagRECT *)(v16 + 104))
        && ((*(_BYTE *)(v16 + 26) & 8) == 0 || (*(_BYTE *)(v16 + 27) & 0x20) != 0)
        && (*(_QWORD *)(v18 + 424) == *(_QWORD *)(v19 + 424) || *(_QWORD *)(v18 + 416) == *(_QWORD *)(v19 + 416)) )
      {
        v21 = *(_DWORD *)(v16 + 288);
        v22 = *(_DWORD *)(v17 + 288);
        if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)(v21 >> 8)) & 0x1FF) == 0 )
        {
          v23 = (v21 & 0xF) == 2 && (v21 & 0x20000000) != 0;
          v24 = (v22 & 0xF) == 2 && (v22 & 0x20000000) != 0;
          if ( v23 == v24 )
          {
            if ( !v20 && !v1 )
              break;
            v35 = v17 + 88;
            v36 = IsAdjacentRect((const struct tagRECT *)v35, (const struct tagRECT *)(v16 + 88));
            v37 = v36;
            if ( !v46 || v36 || (unsigned int)IntersectRect(&v51, (int *)v35, (int *)(v16 + 88)) )
            {
              if ( !v1 || v37 )
                break;
              if ( (unsigned int)UnionRect(&v51, (int *)v35, (int *)(v16 + 88)) )
              {
                v38 = v51 - *(_QWORD *)v35;
                if ( v51 == *(_QWORD *)v35 )
                  v38 = v52 - *(_QWORD *)(v35 + 8);
                if ( !v38 )
                  break;
              }
            }
          }
        }
      }
      v13 = v47[0];
      v14 = *(_QWORD *)(v48[0] + 88LL);
    }
LABEL_40:
    v7 = *(_QWORD *)(v16 + 256);
    return ValidateHmonitorNoRip(v7);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 416LL) != *(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL)
    || (v33 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL),
        (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)(v33 >> 8)) & 0x1FF) == 0)
    && ((v33 & 0xF) != 2 || (v33 & 0x20000000) == 0 ? (v34 = 0) : (v34 = 1), !v34) )
  {
    do
    {
      if ( IsCandidateTransformOwner((struct tagWND *)v12, a1) )
        break;
      v12 = *(_QWORD *)(v12 + 120);
    }
    while ( v12 );
    goto LABEL_13;
  }
  return 0LL;
}
