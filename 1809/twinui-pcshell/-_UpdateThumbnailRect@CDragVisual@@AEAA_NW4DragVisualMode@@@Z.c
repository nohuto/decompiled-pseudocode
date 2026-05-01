/*
 * XREFs of ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180374F84
 * Callers:
 *     ?SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z @ 0x1803726F0 (-SetAppLayout@CDragVisual@@UEAAJPEAUIAppLayout@@PEAUtagRECT@@@Z.c)
 *     ?SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z @ 0x180372F30 (-SetMode@CDragVisual@@UEAAXW4DragVisualMode@@@Z.c)
 *     ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x1803731A0 (-SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z.c)
 *     ?_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z @ 0x180373D54 (-_OnAppWindowSizeChanged@CDragVisual@@AEAAXPEAX@Z.c)
 * Callees:
 *     ?MulDiv@CSize@Geometry@@SA?AU12@AEBUtagSIZE@@HH@Z @ 0x180079768 (-MulDiv@CSize@Geometry@@SA-AU12@AEBUtagSIZE@@HH@Z.c)
 *     ?ScreenToClient@CPoint@Geometry@@SA?AU12@PEAUHWND__@@AEBUtagPOINT@@@Z @ 0x18030D0F8 (-ScreenToClient@CPoint@Geometry@@SA-AU12@PEAUHWND__@@AEBUtagPOINT@@@Z.c)
 *     ?_GetScaledPoint@CDragVisual@@AEAA?AUtagPOINT@@W4ScaledPointType@1@@Z @ 0x180373AE8 (-_GetScaledPoint@CDragVisual@@AEAA-AUtagPOINT@@W4ScaledPointType@1@@Z.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z @ 0x180374F44 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NAEBUCRect@Geometry@@@Z.c)
 *     ?GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUtagSIZE@@PEAU5@@Z @ 0x1803BDED0 (-GetDragVisualScaledSize@AppLayoutHelpers@@YAXAEBUCRect@Geometry@@W4DEVICE_SCALE_FACTOR@@1AEBUta.c)
 */

bool __fastcall CDragVisual::_UpdateThumbnailRect(unsigned __int64 a1, int a2)
{
  LONG y; // r14d
  __int64 v3; // rsi
  LONG v4; // ebx
  LONG v5; // r12d
  LONG v6; // r15d
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  enum DEVICE_SCALE_FACTOR v11; // r8d
  const struct Geometry::CRect *v12; // rdx
  LONG *ScaledPoint; // rax
  HWND v14; // rdx
  LONG v15; // ecx
  struct tagPOINT *v16; // rax
  struct tagPOINT *v17; // rbx
  int v18; // eax
  LONG x; // r12d
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  int v24; // ebx
  LONG v25; // eax
  enum DEVICE_SCALE_FACTOR v26; // r8d
  const struct Geometry::CRect *v27; // rdx
  struct tagSIZE *v28; // rax
  BOOL v29; // r8d
  LONG *v30; // rax
  HWND v31; // rdx
  LONG v32; // ecx
  struct tagPOINT *v33; // rax
  HWND v34; // rdx
  struct tagPOINT *v35; // rax
  enum DEVICE_SCALE_FACTOR v36; // r8d
  const struct Geometry::CRect *v37; // rdx
  unsigned __int64 v38; // rdi
  LONG *v39; // rax
  HWND v40; // rdx
  LONG v41; // ecx
  struct tagPOINT *v42; // rbx
  HWND v43; // rdx
  int v44; // r9d
  int v45; // edi
  int v46; // ecx
  HWND v47; // rdx
  struct tagSIZE *v49; // [rsp+28h] [rbp-18h]
  _DWORD v50[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 nNumber; // [rsp+80h] [rbp+40h] BYREF
  struct tagPOINT v52; // [rsp+90h] [rbp+50h] BYREF
  struct tagPOINT v53; // [rsp+98h] [rbp+58h] BYREF

  y = 0;
  v3 = a1;
  *(_BYTE *)(a1 + 277) = 0;
  v4 = 0;
  LODWORD(nNumber) = 0;
  v5 = 0;
  HIDWORD(nNumber) = 0;
  v6 = 0;
  LODWORD(a1) = 0;
  if ( !a2 )
  {
LABEL_7:
    v11 = *(_DWORD *)(v3 + 344);
    v12 = (const struct Geometry::CRect *)*(unsigned int *)(v3 + 284);
    v52.x = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v52.y = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(v3 + 192),
      v12,
      v11,
      (enum DEVICE_SCALE_FACTOR)&v52,
      (const struct tagSIZE *)&nNumber,
      v49);
    ScaledPoint = CDragVisual::_GetScaledPoint(v3, &v53, 0);
    v14 = *(HWND *)(v3 + 152);
    v15 = *ScaledPoint;
    LODWORD(ScaledPoint) = ScaledPoint[1];
    v52.x = v15;
    v52.y = (int)ScaledPoint;
    v16 = Geometry::CPoint::ScreenToClient(&v53, v14, (LONG *)&v52);
    v6 = nNumber;
    v17 = v16;
    v18 = MulDiv(nNumber, *(_DWORD *)(v3 + 332), 100);
    x = v17->x;
    v4 = HIDWORD(nNumber);
    v5 = x - v18;
    v20 = *(_DWORD *)(v3 + 144);
    if ( v20 == 1 )
    {
      v21 = MulDiv(*(_DWORD *)(v3 + 204) - *(_DWORD *)(v3 + 196), 5, 100);
    }
    else if ( v20 == 5 )
    {
      v44 = *(_DWORD *)(v3 + 196);
      v45 = (*(_DWORD *)(v3 + 268) - *(_DWORD *)(v3 + 260)) / 2 - SHIDWORD(nNumber) / 2 - v44 + *(_DWORD *)(v3 + 260);
      v21 = MulDiv(*(_DWORD *)(v3 + 204) - v44, 5, 100);
      if ( v45 >= v21 )
      {
        v46 = *(_DWORD *)(v3 + 204) - *(_DWORD *)(v3 + 196) - v21;
        if ( v45 + v4 > v46 )
          v45 = v46 - v4;
        goto LABEL_21;
      }
    }
    else
    {
      v21 = (*(_DWORD *)(v3 + 204) - *(_DWORD *)(v3 + 196) - HIDWORD(nNumber)) / 2;
    }
    v45 = v21;
LABEL_21:
    v47 = *(HWND *)(v3 + 152);
    HIDWORD(nNumber) = v45 + *(_DWORD *)(v3 + 196);
    LODWORD(nNumber) = 0;
    v35 = Geometry::CPoint::ScreenToClient(&v52, v47, (LONG *)&nNumber);
    goto LABEL_22;
  }
  v7 = a2 - 1;
  if ( !v7 )
  {
    v6 = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v25 = *(_DWORD *)(v3 + 228);
    v4 = *(_DWORD *)(v3 + 236) - v25;
    LODWORD(nNumber) = *(_DWORD *)(v3 + 224);
    goto LABEL_14;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v36 = *(_DWORD *)(v3 + 344);
    v37 = (const struct Geometry::CRect *)*(unsigned int *)(v3 + 284);
    v52.x = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v52.y = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(v3 + 192),
      v37,
      v36,
      (enum DEVICE_SCALE_FACTOR)&v52,
      (const struct tagSIZE *)&nNumber,
      v49);
    v38 = *(_QWORD *)Geometry::CSize::MulDiv((int *)&v52, (int *)&nNumber, 60, 100);
    nNumber = v38;
    v39 = CDragVisual::_GetScaledPoint(v3, &v53, 0);
    v40 = *(HWND *)(v3 + 152);
    v41 = *v39;
    LODWORD(v39) = v39[1];
    v52.x = v41;
    v52.y = (int)v39;
    v42 = Geometry::CPoint::ScreenToClient(&v53, v40, (LONG *)&v52);
    v6 = v38;
    v5 = v42->x - MulDiv(v38, *(_DWORD *)(v3 + 332), 100);
    v52.y = *(_DWORD *)(v3 + 204) - SHIDWORD(v38) / 2;
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v26 = *(_DWORD *)(v3 + 344);
    v27 = (const struct Geometry::CRect *)*(unsigned int *)(v3 + 284);
    v52.x = *(_DWORD *)(v3 + 232) - *(_DWORD *)(v3 + 224);
    v52.y = *(_DWORD *)(v3 + 236) - *(_DWORD *)(v3 + 228);
    AppLayoutHelpers::GetDragVisualScaledSize(
      (AppLayoutHelpers *)(v3 + 192),
      v27,
      v26,
      (enum DEVICE_SCALE_FACTOR)&v52,
      (const struct tagSIZE *)&nNumber,
      v49);
    v28 = (struct tagSIZE *)Geometry::CSize::MulDiv((int *)&v52, (int *)&nNumber, 125, 100);
    v29 = *(_DWORD *)(v3 + 148) == 6;
    nNumber = (unsigned __int64)*v28;
    v30 = CDragVisual::_GetScaledPoint(v3, &v53, v29);
    v31 = *(HWND *)(v3 + 152);
    v32 = *v30;
    LODWORD(v30) = v30[1];
    v52.x = v32;
    v52.y = (int)v30;
    v33 = Geometry::CPoint::ScreenToClient(&v53, v31, (LONG *)&v52);
    v6 = nNumber;
    v5 = v33->x - MulDiv(nNumber, *(_DWORD *)(v3 + 332), 100);
    v52.y = *(_DWORD *)(v3 + 196);
LABEL_11:
    v34 = *(HWND *)(v3 + 152);
    v52.x = 0;
    v35 = Geometry::CPoint::ScreenToClient(&v53, v34, (LONG *)&v52);
    v4 = HIDWORD(nNumber);
LABEL_22:
    y = v35->y;
    LODWORD(a1) = y;
    goto LABEL_23;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    v22 = *(_DWORD *)(v3 + 224);
    v23 = *(_DWORD *)(v3 + 228);
    v24 = *(_DWORD *)(v3 + 236);
    v6 = *(_DWORD *)(v3 + 232) - v22;
    LODWORD(nNumber) = v22 + *(_DWORD *)(v3 + 336) - *(_DWORD *)(v3 + 176);
    v4 = v24 - v23;
    v25 = v23 + *(_DWORD *)(v3 + 340) - *(_DWORD *)(v3 + 180);
LABEL_14:
    v43 = *(HWND *)(v3 + 152);
    HIDWORD(nNumber) = v25;
    nNumber = (unsigned __int64)*Geometry::CPoint::ScreenToClient(&v52, v43, (LONG *)&nNumber);
    y = HIDWORD(nNumber);
    v5 = nNumber;
    a1 = HIDWORD(nNumber);
    goto LABEL_23;
  }
  if ( v10 == 2 )
    goto LABEL_7;
LABEL_23:
  v50[0] = v5;
  v50[2] = v5 + v6;
  v50[1] = y;
  v50[3] = a1 + v4;
  return CDragVisual::_UpdateThumbnailRect((const struct _GUID *)v3, (const struct Geometry::CRect *)v50);
}
