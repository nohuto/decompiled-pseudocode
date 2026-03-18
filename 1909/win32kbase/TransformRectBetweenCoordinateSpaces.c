/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C004C2F0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C004C7E0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029CEC (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C004C5E4 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     IntersectRect @ 0x1C004CB8C (IntersectRect.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C004DAA8 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C00A56B8 (HMValidateSharedHandleNoRip.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00B0348 (TransformOffscreenAdjacentRect.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1C010FACC (IsDpiAwarenessBoundaryInParentChain.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v6; // rdi
  unsigned int CurrentThreadDpiAwarenessContext; // r14d
  unsigned int v9; // ebx
  __int128 v10; // xmm0
  unsigned int v11; // esi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r13
  int v15; // r12d
  int v16; // r15d
  int v17; // eax
  int v18; // eax
  signed int v19; // edi
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v23; // rax
  int v24; // ecx
  int v25; // eax
  int v26; // r13d
  int v27; // eax
  int v28; // eax
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  char v38; // al
  int v39; // [rsp+30h] [rbp-89h]
  int v40; // [rsp+40h] [rbp-79h]
  int v41; // [rsp+50h] [rbp-69h]
  __int128 v43; // [rsp+60h] [rbp-59h] BYREF
  struct tagRECT v44; // [rsp+70h] [rbp-49h] BYREF
  __int128 v45; // [rsp+80h] [rbp-39h] BYREF
  __int128 v46; // [rsp+90h] [rbp-29h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-9h] BYREF

  v6 = (unsigned int *)a2;
  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v9 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v9 = W32GetCurrentThreadDpiAwarenessContext();
  v10 = *(_OWORD *)v6;
  v39 = 0;
  v47 = 0uLL;
  v11 = 0;
  v46 = 0uLL;
  v12 = 1LL;
  v48 = v10;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v9 >> 8)) & 0x1FF) == 0
    && ((a2 = 0x20000000LL, (CurrentThreadDpiAwarenessContext & 0xF) == 2)
     && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0
      ? (v24 = 1)
      : (v24 = 0),
        (v9 & 0xF) == 2 && (v9 & 0x20000000) != 0 ? (v25 = 1) : (v25 = 0),
        v24 == v25)
    || ((v13 = *v6, (int)v13 >= (int)v6[2]) || (int)v6[1] >= (int)v6[3]) && !(_DWORD)v13 && !v6[1] )
  {
    *a1 = v10;
    return 0LL;
  }
  if ( a3 )
  {
    v23 = (int)Is_GetTopLevelWindowSupported(v13, a2, 1LL) < 0 ? 0LL : _GetTopLevelWindow(a3);
    if ( v23 )
    {
      if ( v23 != a3 )
      {
        if ( (unsigned int)IsDpiAwarenessBoundaryInParentChain(a3) )
        {
          v30 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL));
          if ( v30 )
            return TransformRectBetweenCoordinateSpacesPerMonitor(
                     (_DWORD)a1,
                     (_DWORD)v6,
                     CurrentThreadDpiAwarenessContext,
                     v9,
                     v30);
        }
      }
    }
  }
  v14 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v14 )
    goto LABEL_74;
  v15 = DWORD2(v46);
  v16 = DWORD1(v46);
  v40 = v46;
  do
  {
    v45 = 0uLL;
    v43 = (__int128)*ExpandedMonitorRect(&v44, (struct tagMONITOR *)v14, v9);
    if ( (unsigned int)IntersectRect(&v45, &v43, v6) )
    {
      if ( v39 )
      {
        v31 = HIDWORD(v46);
        v17 = v40;
        if ( v40 >= (int)v45 )
          v17 = v45;
        LODWORD(v46) = v17;
        if ( v16 >= SDWORD1(v45) )
          v16 = DWORD1(v45);
        DWORD1(v46) = v16;
        if ( v15 <= SDWORD2(v45) )
          v15 = DWORD2(v45);
        DWORD2(v46) = v15;
        if ( SHIDWORD(v46) <= SHIDWORD(v45) )
          v31 = HIDWORD(v45);
        HIDWORD(v46) = v31;
      }
      else
      {
        v46 = v45;
        v15 = DWORD2(v45);
        v16 = DWORD1(v45);
        v17 = v45;
      }
      v40 = v17;
      v11 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               (unsigned int)&v45,
               (unsigned int)&v45,
               CurrentThreadDpiAwarenessContext,
               v9,
               v14);
      if ( !v39 )
      {
        v18 = 1;
        v47 = v45;
        v39 = 1;
        goto LABEL_16;
      }
      v32 = v47;
      if ( (int)v47 >= (int)v45 )
        v32 = v45;
      LODWORD(v47) = v32;
      v33 = DWORD1(v47);
      if ( SDWORD1(v47) >= SDWORD1(v45) )
        v33 = DWORD1(v45);
      DWORD1(v47) = v33;
      v34 = DWORD2(v47);
      if ( SDWORD2(v47) <= SDWORD2(v45) )
        v34 = DWORD2(v45);
      DWORD2(v47) = v34;
      v35 = HIDWORD(v47);
      if ( SHIDWORD(v47) <= SHIDWORD(v45) )
        v35 = HIDWORD(v45);
      HIDWORD(v47) = v35;
    }
    v18 = v39;
LABEL_16:
    v14 = *(_QWORD *)(v14 + 56);
  }
  while ( v14 );
  v41 = v15;
  if ( v18 )
  {
    v19 = DWORD2(v48);
    v20 = v48;
    v21 = v46 - v48;
    if ( (_QWORD)v46 == (_QWORD)v48 )
      v21 = *((_QWORD *)&v46 + 1) - *((_QWORD *)&v48 + 1);
    if ( v21 )
    {
      v26 = DWORD1(v48);
      if ( v40 <= (int)v48 )
      {
        v28 = v41;
      }
      else
      {
        *((_QWORD *)&v45 + 1) = __PAIR64__(HIDWORD(v48), v40);
        *(_QWORD *)&v45 = v48;
        v27 = TransformOffscreenAdjacentRect(
                (unsigned int)&v46,
                (unsigned int)&v47,
                (unsigned int)&v45,
                CurrentThreadDpiAwarenessContext,
                v9);
        v16 = DWORD1(v46);
        v11 |= v27;
        v28 = DWORD2(v46);
      }
      if ( v28 < v19 )
      {
        *(_QWORD *)&v45 = __PAIR64__(v26, v28);
        *((_QWORD *)&v45 + 1) = __PAIR64__(HIDWORD(v48), v19);
        v36 = TransformOffscreenAdjacentRect(
                (unsigned int)&v46,
                (unsigned int)&v47,
                (unsigned int)&v45,
                CurrentThreadDpiAwarenessContext,
                v9);
        v16 = DWORD1(v46);
        v11 |= v36;
      }
      if ( v16 > v26 )
      {
        *(_QWORD *)&v45 = __PAIR64__(v26, v20);
        *((_QWORD *)&v45 + 1) = __PAIR64__(v16, v19);
        v11 |= TransformOffscreenAdjacentRect(
                 (unsigned int)&v46,
                 (unsigned int)&v47,
                 (unsigned int)&v45,
                 CurrentThreadDpiAwarenessContext,
                 v9);
      }
      if ( SHIDWORD(v46) < SHIDWORD(v48) )
      {
        *(_QWORD *)&v48 = __PAIR64__(HIDWORD(v46), v20);
        DWORD2(v48) = v19;
        v37 = TransformOffscreenAdjacentRect(
                (unsigned int)&v46,
                (unsigned int)&v47,
                (unsigned int)&v48,
                CurrentThreadDpiAwarenessContext,
                v9);
        goto LABEL_76;
      }
    }
    goto LABEL_21;
  }
LABEL_74:
  if ( (int)Is_MonitorFromRectSupported(v13, a2, v12) >= 0 )
  {
    v38 = _MonitorFromRect(v6, 2LL, v9);
    v37 = TransformRectBetweenCoordinateSpacesPerMonitor(
            (unsigned int)&v47,
            (_DWORD)v6,
            CurrentThreadDpiAwarenessContext,
            v9,
            v38);
LABEL_76:
    v11 |= v37;
  }
LABEL_21:
  *a1 = v47;
  return v11;
}
