/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x180010CD8
 * Callers:
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x18000EAB0 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x180023D70 (-ValidateVisual@CText@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000EB68 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000ED44 (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18000EE08 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18000EE68 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18000EF0C (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x18000F854 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180013D04 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001EB90 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800218A8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x180023320 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  int v1; // eax
  signed int v3; // edi
  struct CBitmapSource *v4; // r13
  HDC v5; // r14
  CTextCache *v6; // r15
  __int64 v7; // rbx
  HDC v8; // rcx
  COLORREF v9; // edx
  int v10; // eax
  int v11; // r15d
  int right; // ecx
  int bottom; // eax
  CBaseObject *v14; // rbx
  CBaseObject *v15; // r15
  CBaseObject *v16; // r12
  LONG v18; // eax
  LONG v19; // eax
  int v20; // edx
  int v21; // ecx
  HBITMAP Bitmap; // rax
  HBITMAP v23; // rbx
  HBRUSH SolidBrush; // rax
  int v25; // eax
  const struct _MARGINS *v26; // rdx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int updated; // eax
  UINT TextAlign; // eax
  int v34; // r9d
  signed int LastError; // eax
  signed int v36; // eax
  signed int v37; // eax
  signed int v38; // eax
  signed int v39; // eax
  unsigned int format; // [rsp+28h] [rbp-49h]
  CBaseObject *v41; // [rsp+38h] [rbp-39h] BYREF
  CBaseObject *v42; // [rsp+40h] [rbp-31h] BYREF
  CBaseObject *v43; // [rsp+48h] [rbp-29h] BYREF
  UINT align; // [rsp+50h] [rbp-21h]
  struct CBitmapSource *v45; // [rsp+58h] [rbp-19h] BYREF
  HBITMAP v46; // [rsp+60h] [rbp-11h] BYREF
  HBRUSH v47; // [rsp+68h] [rbp-9h] BYREF
  struct IWICBitmap *v48; // [rsp+70h] [rbp-1h] BYREF
  HGDIOBJ h; // [rsp+78h] [rbp+7h]
  __int64 v50; // [rsp+80h] [rbp+Fh]
  struct tagRECT rc; // [rsp+88h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 20);
  v43 = 0LL;
  v41 = 0LL;
  v3 = 0;
  v46 = 0LL;
  v4 = 0LL;
  h = 0LL;
  v5 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  align = 0;
  if ( (v1 & 0x1000) != 0 )
  {
    CText::ReleaseResources(this);
    if ( *((_QWORD *)this + 36) )
    {
      v6 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
      if ( v6 )
      {
        v5 = (HDC)*((_QWORD *)v6 + 13);
        if ( v5 )
        {
          v7 = *((_QWORD *)this + 15);
          v8 = (HDC)*((_QWORD *)v6 + 13);
          v9 = *((_DWORD *)this + 103);
          v50 = v7;
          *(_QWORD *)&rc.left = 0LL;
          *(_QWORD *)&rc.right = v7;
          SetBkColor(v8, v9);
          SetTextColor(v5, *((_DWORD *)this + 102));
          if ( (*((_BYTE *)this + 280) & 2) != 0 )
          {
            TextAlign = GetTextAlign(v5);
            align = SetTextAlign(v5, TextAlign | 0x100);
          }
          v10 = CTextCache::SetFont(v6, (const struct tagLOGFONTW *)((char *)this + 296));
          v3 = v10;
          if ( v10 < 0 )
          {
            format = 291;
LABEL_70:
            v34 = v10;
LABEL_75:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, format);
            v14 = v42;
            v15 = v41;
            v16 = v43;
            goto LABEL_21;
          }
          v11 = *((_BYTE *)this + 280) & 2;
          if ( (*((_BYTE *)this + 280) & 1) != 0 )
          {
            right = *((_DWORD *)this + 100);
            bottom = *((_DWORD *)this + 101);
          }
          else
          {
            SetLastError(0);
            if ( !DrawTextW(v5, *((LPCWSTR *)this + 36), -1, &rc, v11 | 0xC20) )
            {
              LastError = GetLastError();
              v3 = LastError;
              if ( LastError > 0 )
                v3 = (unsigned __int16)LastError | 0x80070000;
              format = 308;
              goto LABEL_72;
            }
            right = rc.right;
            bottom = rc.bottom;
            *((_BYTE *)this + 280) |= 1u;
            *((_DWORD *)this + 100) = right;
            *((_DWORD *)this + 101) = bottom;
          }
          if ( right >= (int)v7 )
            right = v7;
          rc.right = right;
          if ( bottom >= SHIDWORD(v50) )
            bottom = HIDWORD(v50);
          rc.bottom = bottom;
          if ( right > 0 && bottom > 0 )
          {
            SetLastError(0);
            if ( DrawTextW(v5, *((LPCWSTR *)this + 36), -1, &rc, v11 | 0x8C24) )
            {
              v18 = rc.right;
              if ( rc.right >= (int)v7 )
                v18 = v7;
              rc.right = v18;
              v19 = rc.bottom;
              if ( rc.bottom >= SHIDWORD(v50) )
                v19 = HIDWORD(v50);
              rc.bottom = v19;
              SetLastError(0);
              v20 = 0;
              if ( rc.bottom - rc.top >= 0 )
                v20 = rc.bottom - rc.top;
              v21 = 0;
              if ( rc.right - rc.left >= 0 )
                v21 = rc.right - rc.left;
              Bitmap = CreateBitmap(v21, v20, 1u, 0x20u, 0LL);
              v46 = Bitmap;
              v23 = Bitmap;
              if ( Bitmap )
              {
                h = SelectObject(v5, Bitmap);
                SetLastError(0);
                SolidBrush = CreateSolidBrush(*((_DWORD *)this + 103));
                v47 = SolidBrush;
                if ( SolidBrush )
                {
                  FillRect(v5, &rc, SolidBrush);
                  SetLastError(0);
                  if ( DrawTextW(v5, *((LPCWSTR *)this + 36), -1, &rc, v11 | 0x8824) )
                  {
                    GdiFlush();
                    v10 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 39) + 168LL))(
                            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
                            v23,
                            0LL,
                            2LL,
                            &v48);
                    v3 = v10;
                    if ( v10 < 0 )
                    {
                      format = 356;
                    }
                    else
                    {
                      v10 = CResource::Create(21LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (char *)this + 392);
                      v3 = v10;
                      if ( v10 < 0 )
                      {
                        format = 360;
                      }
                      else
                      {
                        v10 = CPushTransformInstruction::Create(*((struct CResource **)this + 49), &v43);
                        v3 = v10;
                        if ( v10 >= 0 )
                        {
                          v16 = v43;
                          v25 = CRenderDataVisual::AddInstruction(this, v43);
                          v3 = v25;
                          if ( v25 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x16Au);
                          }
                          else
                          {
                            v27 = CBitmapSource::Create(
                                    v48,
                                    v26,
                                    *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL),
                                    &v45);
                            v3 = v27;
                            if ( v27 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x16Cu);
                              v4 = v45;
                            }
                            else
                            {
                              v4 = v45;
                              v28 = CDrawImageInstruction::Create(v45, &rc, &v42);
                              v3 = v28;
                              if ( v28 >= 0 )
                              {
                                v14 = v42;
                                v29 = CRenderDataVisual::AddInstruction(this, v42);
                                v3 = v29;
                                if ( v29 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x16Eu);
                                }
                                else
                                {
                                  v30 = CPopInstruction::Create(&v41);
                                  v3 = v30;
                                  if ( v30 >= 0 )
                                  {
                                    v15 = v41;
                                    v31 = CRenderDataVisual::AddInstruction(this, v41);
                                    v3 = v31;
                                    if ( v31 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x171u);
                                      goto LABEL_21;
                                    }
                                    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
                                    goto LABEL_17;
                                  }
                                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x170u);
                                }
LABEL_97:
                                v15 = v41;
                                goto LABEL_21;
                              }
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x16Du);
                            }
                          }
                          v14 = v42;
                          goto LABEL_97;
                        }
                        format = 361;
                      }
                    }
                    goto LABEL_70;
                  }
                  v39 = GetLastError();
                  v3 = v39;
                  if ( v39 > 0 )
                    v3 = (unsigned __int16)v39 | 0x80070000;
                  format = 352;
                }
                else
                {
                  v38 = GetLastError();
                  v3 = v38;
                  if ( v38 > 0 )
                    v3 = (unsigned __int16)v38 | 0x80070000;
                  format = 344;
                }
              }
              else
              {
                v37 = GetLastError();
                v3 = v37;
                if ( v37 > 0 )
                  v3 = (unsigned __int16)v37 | 0x80070000;
                format = 338;
              }
            }
            else
            {
              v36 = GetLastError();
              v3 = v36;
              if ( v36 > 0 )
                v3 = (unsigned __int16)v36 | 0x80070000;
              format = 330;
            }
LABEL_72:
            if ( v3 >= 0 )
              v3 = -2003304445;
            v34 = v3;
            goto LABEL_75;
          }
        }
      }
    }
    v14 = v42;
    v15 = v41;
    v16 = v43;
LABEL_17:
    *((_DWORD *)this + 20) &= ~0x1000u;
    v1 = *((_DWORD *)this + 20);
    goto LABEL_18;
  }
  v14 = v42;
  v15 = v41;
  v16 = v43;
LABEL_18:
  if ( (v1 & 0x8000) != 0 )
  {
    updated = CText::UpdateAlignmentTransform(this);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x17Du);
      goto LABEL_21;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
LABEL_21:
  if ( v5 )
  {
    if ( (*((_BYTE *)this + 280) & 2) != 0 )
      SetTextAlign(v5, align);
    if ( h )
      SelectObject(v5, h);
  }
  if ( v46 )
    ReleaseGDIObject<HRGN__ *>((void **)&v46);
  if ( v47 )
    ReleaseGDIObject<HRGN__ *>((void **)&v47);
  if ( v16 )
    CBaseObject::Release(v16);
  if ( v15 )
    CBaseObject::Release(v15);
  if ( v4 )
    CBaseObject::Release(v4);
  if ( v48 )
    ((void (__fastcall *)(struct IWICBitmap *))v48->lpVtbl->Release)(v48);
  if ( v14 )
    CBaseObject::Release(v14);
  return (unsigned int)v3;
}
