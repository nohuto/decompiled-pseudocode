/*
 * XREFs of ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180024DB0 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?ActivateTimeline@CButton@@AEAAJPEAPEAV?$CTimeline@M@@NMMW4InterpolationMode@@@Z @ 0x180006D5C (-ActivateTimeline@CButton@@AEAAJPEAPEAV-$CTimeline@M@@NMMW4InterpolationMode@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x180021D08 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180025084 (-SetOpacity@CAtlasedImage@@QEAAXM@Z.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180025104 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 *     ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18002522C (-SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800252B0 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?DeactivateTimeline@CButton@@AEAAXPEAPEAV?$CTimeline@M@@@Z @ 0x180025314 (-DeactivateTimeline@CButton@@AEAAXPEAPEAV-$CTimeline@M@@@Z.c)
 *     ?RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z @ 0x180025384 (-RemoveAtlasImage@CAtlasedRectsVisual@@QEAAXPEAVCAtlasedImage@@@Z.c)
 *     ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x180025498 (-UpdateAtlasPositionAndSize@CButton@@AEAAXXZ.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180025544 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeFadeValues@CButton@@AEAAXPEAM0@Z @ 0x180078130 (-ComputeFadeValues@CButton@@AEAAXPEAM0@Z.c)
 */

__int64 __fastcall CButton::RedrawVisual(CButton *this)
{
  char v1; // al
  int *v2; // rsi
  int v3; // r14d
  int v5; // eax
  float v6; // xmm1_4
  float v7; // xmm0_4
  int v8; // eax
  unsigned int v9; // edi
  unsigned int *v10; // rdi
  char v11; // bp
  struct CAtlasedImage *v12; // rdx
  CAtlasedRectsVisual *v13; // rcx
  int inserted; // eax
  char *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // r8
  CBaseObject *v18; // rcx
  char v19; // al
  int v21; // eax
  int v22; // eax
  float v23; // xmm5_4
  __int64 v24; // rcx
  float v25; // [rsp+50h] [rbp+8h] BYREF
  float v26; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 280);
  v2 = (int *)((char *)this + 376);
  v3 = *((_DWORD *)this + 94);
  if ( (v1 & 1) != 0 )
  {
    if ( (v1 & 2) != 0 )
      v5 = ((v1 & 4) != 0) + 1;
    else
      v5 = 0;
  }
  else
  {
    v5 = 3;
  }
  *v2 = v5;
  v6 = *((float *)this + 100);
  if ( *v2 == 1 )
    v7 = FLOAT_1_0;
  else
    v7 = *((float *)this + 101);
  *((float *)this + 100) = v7;
  if ( v6 != v7 )
    CVisual::SetDirtyFlags(this, 0x8000);
  v8 = CButton::DrawStateW(this, *((_QWORD *)this + 36));
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x124u);
  }
  else
  {
    if ( (v3 != 1 || *v2) && (*v2 != 1 || v3) )
    {
      v10 = (unsigned int *)*((_QWORD *)this + 3);
      v11 = 0;
    }
    else
    {
      v11 = 1;
      v10 = (unsigned int *)this;
    }
    v12 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
    v13 = (CAtlasedRectsVisual *)*((_QWORD *)v12 + 10);
    if ( v10 != (unsigned int *)v13 )
    {
      if ( v13 )
      {
        CAtlasedRectsVisual::RemoveAtlasImage(v13, v12);
        v12 = (struct CAtlasedImage *)*((_QWORD *)this + 36);
      }
      inserted = CAtlasedRectsVisual::InsertAtlasImageAtIndex((CAtlasedRectsVisual *)v10, v12, v10[66]);
      v9 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x13Bu);
        return v9;
      }
      CButton::UpdateAtlasPositionAndSize(this);
    }
    v15 = (char *)this + 392;
    if ( v11 )
    {
      if ( !*(_QWORD *)v15 || *(_BYTE *)(*(_QWORD *)v15 + 72LL) )
      {
        *((_DWORD *)this + 96) = *((_DWORD *)this + 100);
      }
      else
      {
        CButton::ComputeFadeValues(this, &v25, &v26);
        v23 = v25;
        *((float *)this + 95) = v26;
        *((float *)this + 96) = v23;
      }
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 95));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), *((float *)this + 96));
      v21 = CButton::DrawStateW(this, *((_QWORD *)this + 37));
      v9 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x151u);
      }
      else
      {
        v22 = CButton::ActivateTimeline(this, (__int64 *)this + 49, 0.1599999964237213);
        v9 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x153u);
      }
    }
    else
    {
      CButton::DeactivateTimeline(this);
      v16 = *((_QWORD *)this + 37);
      CAtlasedImage::SetBitmapSource((CAtlasedImage *)v16, 0LL);
      CAtlasButton::SetGlyphImage(
        v16,
        0LL,
        v17,
        (unsigned int)(int)((double)*((int *)this + 102) * *((double *)CDesktopManager::s_pDesktopManagerInstance + 60)));
      v18 = *(CBaseObject **)(v16 + 136);
      if ( v18 )
      {
        CBaseObject::Release(v18);
        *(_QWORD *)(v16 + 136) = 0LL;
        CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v16, 1u, 0x2000u);
      }
      v19 = (*((_BYTE *)this + 280) & 0x20) != 0;
      if ( *(_BYTE *)(v16 + 160) != v19 )
      {
        v24 = *(_QWORD *)(v16 + 80);
        *(_BYTE *)(v16 + 160) = v19;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL))(v24, 0x2000LL);
      }
      v9 = 0;
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 36), *((float *)this + 100));
      CAtlasedImage::SetOpacity(*((CAtlasedImage **)this + 37), 0.0);
    }
  }
  return v9;
}
