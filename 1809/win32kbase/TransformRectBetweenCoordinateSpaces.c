/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C0038C50
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0039060 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C0038E90 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     IntersectRect @ 0x1C00393F4 (IntersectRect.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C0039FC8 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     HMValidateSharedHandleNoRip @ 0x1C006A084 (HMValidateSharedHandleNoRip.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1C00EBAE8 (IsDpiAwarenessBoundaryInParentChain.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00EBB48 (TransformOffscreenAdjacentRect.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(_OWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  unsigned int v9; // esi
  __int128 v10; // xmm0
  unsigned int v11; // edi
  __int64 v12; // r14
  int v13; // r13d
  int v14; // r12d
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // r13d
  int v31; // eax
  int v32; // eax
  char v33; // al
  int v34; // [rsp+30h] [rbp-89h]
  int v35; // [rsp+40h] [rbp-79h]
  __int128 v37; // [rsp+58h] [rbp-61h] BYREF
  struct tagRECT v38; // [rsp+68h] [rbp-51h] BYREF
  __int128 v39; // [rsp+80h] [rbp-39h] BYREF
  __int128 v40; // [rsp+90h] [rbp-29h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-9h] BYREF

  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v9 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v9 = W32GetCurrentThreadDpiAwarenessContext();
  v10 = *a2;
  v34 = 0;
  v42 = 0uLL;
  v11 = 0;
  v40 = 0uLL;
  v41 = v10;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v9 >> 8)) & 0x1FF) == 0
    || (*(_DWORD *)a2 >= *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 1) >= *((_DWORD *)a2 + 3))
    && !*(_DWORD *)a2
    && !*((_DWORD *)a2 + 1) )
  {
    *a1 = v10;
    return 0LL;
  }
  if ( a3 )
  {
    v20 = (int)Is_GetTopLevelWindowSupported() < 0 ? 0LL : _GetTopLevelWindow(a3);
    if ( v20 )
    {
      if ( v20 != a3 )
      {
        if ( (unsigned int)IsDpiAwarenessBoundaryInParentChain(a3) )
        {
          v22 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL));
          if ( v22 )
            return TransformRectBetweenCoordinateSpacesPerMonitor(
                     (_DWORD)a1,
                     (_DWORD)a2,
                     CurrentThreadDpiAwarenessContext,
                     v9,
                     v22);
        }
      }
    }
  }
  v12 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v12 )
    goto LABEL_64;
  v13 = DWORD2(v40);
  v14 = DWORD1(v40);
  v35 = v40;
  do
  {
    v37 = (__int128)*ExpandedMonitorRect(&v38, (struct tagMONITOR *)v12, v9);
    if ( (unsigned int)IntersectRect(&v39, &v37, a2) )
    {
      if ( v34 )
      {
        v23 = v35;
        if ( v35 >= (int)v39 )
          v23 = v39;
        v35 = v23;
        if ( v14 >= SDWORD1(v39) )
          v14 = DWORD1(v39);
        LODWORD(v40) = v23;
        v24 = HIDWORD(v40);
        if ( v13 <= SDWORD2(v39) )
          v13 = DWORD2(v39);
        DWORD1(v40) = v14;
        if ( SHIDWORD(v40) <= SHIDWORD(v39) )
          v24 = HIDWORD(v39);
        *((_QWORD *)&v40 + 1) = __PAIR64__(v24, v13);
      }
      else
      {
        v40 = v39;
        v13 = DWORD2(v39);
        v14 = DWORD1(v39);
        v35 = v39;
      }
      v11 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               (unsigned int)&v39,
               (unsigned int)&v39,
               CurrentThreadDpiAwarenessContext,
               v9,
               v12);
      if ( !v34 )
      {
        v15 = 1;
        v42 = v39;
        v34 = 1;
        goto LABEL_16;
      }
      v25 = v42;
      if ( (int)v42 >= (int)v39 )
        v25 = v39;
      LODWORD(v42) = v25;
      v26 = DWORD1(v42);
      if ( SDWORD1(v42) >= SDWORD1(v39) )
        v26 = DWORD1(v39);
      DWORD1(v42) = v26;
      v27 = DWORD2(v42);
      if ( SDWORD2(v42) <= SDWORD2(v39) )
        v27 = DWORD2(v39);
      DWORD2(v42) = v27;
      v28 = HIDWORD(v42);
      if ( SHIDWORD(v42) <= SHIDWORD(v39) )
        v28 = HIDWORD(v39);
      HIDWORD(v42) = v28;
    }
    v15 = v34;
LABEL_16:
    v12 = *(_QWORD *)(v12 + 56);
  }
  while ( v12 );
  if ( v15 )
  {
    v16 = DWORD2(v41);
    v17 = v41;
    v18 = v40 - v41;
    if ( (_QWORD)v40 == (_QWORD)v41 )
      v18 = *((_QWORD *)&v40 + 1) - *((_QWORD *)&v41 + 1);
    if ( v18 )
    {
      if ( v35 > (int)v41 )
      {
        *((_QWORD *)&v39 + 1) = __PAIR64__(HIDWORD(v41), v35);
        *(_QWORD *)&v39 = v41;
        v29 = TransformOffscreenAdjacentRect(&v40, &v42, &v39, CurrentThreadDpiAwarenessContext, v9);
        v13 = DWORD2(v40);
        v11 |= v29;
        v14 = DWORD1(v40);
      }
      if ( v13 >= v16 )
      {
        v30 = HIDWORD(v41);
      }
      else
      {
        *(_QWORD *)&v39 = __PAIR64__(DWORD1(v41), v13);
        v30 = HIDWORD(v41);
        *((_QWORD *)&v39 + 1) = __PAIR64__(HIDWORD(v41), v16);
        v31 = TransformOffscreenAdjacentRect(&v40, &v42, &v39, CurrentThreadDpiAwarenessContext, v9);
        v14 = DWORD1(v40);
        v11 |= v31;
      }
      if ( v14 > SDWORD1(v41) )
      {
        LODWORD(v41) = v17;
        *((_QWORD *)&v41 + 1) = __PAIR64__(v14, v16);
        v11 |= TransformOffscreenAdjacentRect(&v40, &v42, &v41, CurrentThreadDpiAwarenessContext, v9);
      }
      if ( SHIDWORD(v40) < v30 )
      {
        *(_QWORD *)&v41 = __PAIR64__(HIDWORD(v40), v17);
        *((_QWORD *)&v41 + 1) = __PAIR64__(v30, v16);
        v32 = TransformOffscreenAdjacentRect(&v40, &v42, &v41, CurrentThreadDpiAwarenessContext, v9);
        goto LABEL_66;
      }
    }
    goto LABEL_21;
  }
LABEL_64:
  if ( (int)Is_MonitorFromRectSupported() >= 0 )
  {
    v33 = _MonitorFromRect(a2, 2LL, v9);
    v32 = TransformRectBetweenCoordinateSpacesPerMonitor(
            (unsigned int)&v42,
            (_DWORD)a2,
            CurrentThreadDpiAwarenessContext,
            v9,
            v33);
LABEL_66:
    v11 |= v32;
  }
LABEL_21:
  *a1 = v42;
  return v11;
}
