/*
 * XREFs of ?ValidateResources@CText@@AEAAJXZ @ 0x18002246C
 * Callers:
 *     ?ValidateVisual@CText@@UEAAJXZ @ 0x1800203D0 (-ValidateVisual@CText@@UEAAJXZ.c)
 *     ?UpdateLayout@CText@@UEAAJ_N@Z @ 0x1800221B0 (-UpdateLayout@CText@@UEAAJ_N@Z.c)
 * Callees:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x18000FC68 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180021984 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?ReleaseResources@CText@@AEAAXXZ @ 0x180024704 (-ReleaseResources@CText@@AEAAXXZ.c)
 *     ?SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z @ 0x180024FB4 (-SetFont@CTextCache@@QEAAJAEBUtagLOGFONTW@@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x180037898 (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180037AC4 (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180038190 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800383F8 (-Create@CDrawImageInstruction@@SAJPEAVCBitmapSource@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18003B0A8 (--$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z.c)
 *     ?UpdateAlignmentTransform@CText@@AEAAJXZ @ 0x18003D9D0 (-UpdateAlignmentTransform@CText@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateResources(CText *this)
{
  int v1; // eax
  CBaseObject *v2; // r12
  signed int v4; // edi
  CBaseObject *v5; // r13
  HDC v6; // r14
  struct CBitmapSource *v7; // rbx
  CBaseObject *v8; // r15
  CTextCache *v10; // r15
  __int64 v11; // rbx
  HDC v12; // rcx
  COLORREF v13; // edx
  int v14; // eax
  int v15; // r15d
  int right; // ecx
  int bottom; // eax
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
  void *v41; // [rsp+30h] [rbp-41h]
  struct CRenderDataInstruction *v42; // [rsp+38h] [rbp-39h] BYREF
  struct CBitmapSource *v43; // [rsp+40h] [rbp-31h] BYREF
  struct CRenderDataInstruction *v44; // [rsp+48h] [rbp-29h] BYREF
  UINT align; // [rsp+50h] [rbp-21h]
  struct CRenderDataInstruction *v46; // [rsp+58h] [rbp-19h] BYREF
  HBITMAP v47; // [rsp+60h] [rbp-11h] BYREF
  HBRUSH v48; // [rsp+68h] [rbp-9h] BYREF
  struct IWICBitmap *v49; // [rsp+70h] [rbp-1h] BYREF
  HGDIOBJ h; // [rsp+78h] [rbp+7h]
  __int64 v51; // [rsp+80h] [rbp+Fh]
  struct tagRECT rc; // [rsp+88h] [rbp+17h] BYREF

  v1 = *((_DWORD *)this + 20);
  v2 = 0LL;
  v44 = 0LL;
  v42 = 0LL;
  v4 = 0;
  v47 = 0LL;
  v5 = 0LL;
  h = 0LL;
  v6 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v43 = 0LL;
  v46 = 0LL;
  align = 0;
  if ( (v1 & 0x1000) == 0 )
  {
    v7 = 0LL;
    v8 = 0LL;
    goto LABEL_3;
  }
  CText::ReleaseResources(this);
  if ( *((_QWORD *)this + 36) )
  {
    v10 = (CTextCache *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 33);
    if ( v10 )
    {
      v6 = (HDC)*((_QWORD *)v10 + 13);
      if ( v6 )
      {
        v11 = *((_QWORD *)this + 15);
        v12 = (HDC)*((_QWORD *)v10 + 13);
        v13 = *((_DWORD *)this + 103);
        v51 = v11;
        *(_QWORD *)&rc.left = 0LL;
        *(_QWORD *)&rc.right = v11;
        SetBkColor(v12, v13);
        SetTextColor(v6, *((_DWORD *)this + 102));
        if ( (*((_BYTE *)this + 280) & 2) != 0 )
        {
          TextAlign = GetTextAlign(v6);
          align = SetTextAlign(v6, TextAlign | 0x100);
        }
        v14 = CTextCache::SetFont(v10, (const struct tagLOGFONTW *)((char *)this + 296));
        v4 = v14;
        if ( v14 < 0 )
        {
          format = 288;
LABEL_70:
          v34 = v14;
LABEL_75:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, format, v41);
          v7 = v43;
          v8 = v42;
          v2 = v44;
          goto LABEL_6;
        }
        v15 = *((_BYTE *)this + 280) & 2;
        if ( (*((_BYTE *)this + 280) & 1) != 0 )
        {
          right = *((_DWORD *)this + 100);
          bottom = *((_DWORD *)this + 101);
        }
        else
        {
          SetLastError(0);
          if ( !DrawTextW(v6, *((LPCWSTR *)this + 36), -1, &rc, v15 | 0xC20) )
          {
            LastError = GetLastError();
            v4 = LastError;
            if ( LastError > 0 )
              v4 = (unsigned __int16)LastError | 0x80070000;
            format = 305;
            goto LABEL_72;
          }
          right = rc.right;
          bottom = rc.bottom;
          *((_BYTE *)this + 280) |= 1u;
          *((_DWORD *)this + 100) = right;
          *((_DWORD *)this + 101) = bottom;
        }
        if ( right >= (int)v11 )
          right = v11;
        rc.right = right;
        if ( bottom >= SHIDWORD(v51) )
          bottom = HIDWORD(v51);
        rc.bottom = bottom;
        if ( right > 0 && bottom > 0 )
        {
          SetLastError(0);
          if ( DrawTextW(v6, *((LPCWSTR *)this + 36), -1, &rc, v15 | 0x8C24) )
          {
            v18 = rc.right;
            if ( rc.right >= (int)v11 )
              v18 = v11;
            rc.right = v18;
            v19 = rc.bottom;
            if ( rc.bottom >= SHIDWORD(v51) )
              v19 = HIDWORD(v51);
            rc.bottom = v19;
            SetLastError(0);
            v20 = 0;
            if ( rc.bottom - rc.top >= 0 )
              v20 = rc.bottom - rc.top;
            v21 = 0;
            if ( rc.right - rc.left >= 0 )
              v21 = rc.right - rc.left;
            Bitmap = CreateBitmap(v21, v20, 1u, 0x20u, 0LL);
            v47 = Bitmap;
            v23 = Bitmap;
            if ( Bitmap )
            {
              h = SelectObject(v6, Bitmap);
              SetLastError(0);
              SolidBrush = CreateSolidBrush(*((_DWORD *)this + 103));
              v48 = SolidBrush;
              if ( SolidBrush )
              {
                FillRect(v6, &rc, SolidBrush);
                SetLastError(0);
                if ( DrawTextW(v6, *((LPCWSTR *)this + 36), -1, &rc, v15 | 0x8824) )
                {
                  GdiFlush();
                  v14 = (*(__int64 (__fastcall **)(_QWORD, HBITMAP, _QWORD, __int64, struct IWICBitmap **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 39) + 168LL))(
                          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 39),
                          v23,
                          0LL,
                          2LL,
                          &v49);
                  v4 = v14;
                  if ( v14 < 0 )
                  {
                    format = 353;
                  }
                  else
                  {
                    v14 = CCompositor::CreateProxy<CMatrixTransformProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                          + 5));
                    v4 = v14;
                    if ( v14 < 0 )
                    {
                      format = 357;
                    }
                    else
                    {
                      v14 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 49), &v44);
                      v4 = v14;
                      if ( v14 >= 0 )
                      {
                        v2 = v44;
                        v25 = CRenderDataVisual::AddInstruction(this, v44);
                        v4 = v25;
                        if ( v25 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x167u, v41);
                        }
                        else
                        {
                          v27 = CBitmapSource::Create(v49, v26, &v43);
                          v4 = v27;
                          if ( v27 >= 0 )
                          {
                            v7 = v43;
                            v28 = CDrawImageInstruction::Create(v43, &rc, &v46);
                            v4 = v28;
                            if ( v28 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x16Bu, v41);
                              v5 = v46;
                            }
                            else
                            {
                              v5 = v46;
                              v29 = CRenderDataVisual::AddInstruction(this, v46);
                              v4 = v29;
                              if ( v29 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x16Cu, v41);
                              }
                              else
                              {
                                v30 = CPopInstruction::Create(&v42);
                                v4 = v30;
                                if ( v30 >= 0 )
                                {
                                  v8 = v42;
                                  v31 = CRenderDataVisual::AddInstruction(this, v42);
                                  v4 = v31;
                                  if ( v31 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x16Fu, v41);
                                    goto LABEL_6;
                                  }
                                  (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 0x8000LL);
                                  goto LABEL_58;
                                }
                                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x16Eu, v41);
                              }
                            }
LABEL_96:
                            v8 = v42;
                            goto LABEL_6;
                          }
                          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x169u, v41);
                        }
                        v7 = v43;
                        goto LABEL_96;
                      }
                      format = 358;
                    }
                  }
                  goto LABEL_70;
                }
                v39 = GetLastError();
                v4 = v39;
                if ( v39 > 0 )
                  v4 = (unsigned __int16)v39 | 0x80070000;
                format = 349;
              }
              else
              {
                v38 = GetLastError();
                v4 = v38;
                if ( v38 > 0 )
                  v4 = (unsigned __int16)v38 | 0x80070000;
                format = 341;
              }
            }
            else
            {
              v37 = GetLastError();
              v4 = v37;
              if ( v37 > 0 )
                v4 = (unsigned __int16)v37 | 0x80070000;
              format = 335;
            }
          }
          else
          {
            v36 = GetLastError();
            v4 = v36;
            if ( v36 > 0 )
              v4 = (unsigned __int16)v36 | 0x80070000;
            format = 327;
          }
LABEL_72:
          if ( v4 >= 0 )
            v4 = -2003304445;
          v34 = v4;
          goto LABEL_75;
        }
      }
    }
  }
  v7 = v43;
  v8 = v42;
  v2 = v44;
LABEL_58:
  *((_DWORD *)this + 20) &= ~0x1000u;
  v1 = *((_DWORD *)this + 20);
LABEL_3:
  if ( (v1 & 0x8000) != 0 )
  {
    updated = CText::UpdateAlignmentTransform(this);
    v4 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x17Bu, v41);
      goto LABEL_6;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  if ( (*((_BYTE *)this + 84) & 1) != 0 )
    (*(void (__fastcall **)(CText *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
LABEL_6:
  if ( v6 )
  {
    if ( (*((_BYTE *)this + 280) & 2) != 0 )
      SetTextAlign(v6, align);
    if ( h )
      SelectObject(v6, h);
  }
  if ( v47 )
    ReleaseGDIObject<HRGN__ *>(&v47);
  if ( v48 )
    ReleaseGDIObject<HRGN__ *>(&v48);
  if ( v2 )
    CBaseObject::Release(v2);
  if ( v8 )
    CBaseObject::Release(v8);
  if ( v7 )
    CBaseObject::Release(v7);
  if ( v49 )
    ((void (__fastcall *)(struct IWICBitmap *))v49->lpVtbl->Release)(v49);
  if ( v5 )
    CBaseObject::Release(v5);
  return (unsigned int)v4;
}
