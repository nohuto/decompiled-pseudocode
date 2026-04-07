/*
 * XREFs of ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x1800832E0
 * Callers:
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18008308C (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z @ 0x180083404 (-OnIconUpdated@CImmersiveWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000C9F4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180012958 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036950 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x1800825D4 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x180082730 (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x180083638 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::LoadIconW(CImmersiveWindowIconic *this)
{
  int v1; // esi
  unsigned int v2; // ebx
  __int64 v4; // rdx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rbp
  int ImmersiveIconContainerSize; // eax
  struct CBitmapSource *BitmapSourceNoRef; // rax
  struct tagSIZE *v8; // rsi
  int v9; // eax
  int v10; // eax
  struct tagPOINT v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 76);
  v2 = 0;
  if ( (unsigned int)(v1 - 2) <= 2 )
  {
    v4 = *((_QWORD *)this + 35);
    v12.x = 0;
    v12.y = 0;
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                            *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 38),
                            *(HWND *)(v4 + 40));
    if ( IconicResourceNoRef )
    {
      ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(
                                     *((_DWORD *)this + 79),
                                     v1);
      BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                            IconicResourceNoRef,
                            ImmersiveIconContainerSize);
      v8 = (struct tagSIZE *)BitmapSourceNoRef;
      if ( BitmapSourceNoRef )
      {
        _InterlockedIncrement((volatile signed __int32 *)BitmapSourceNoRef + 2);
        (*(void (__fastcall **)(CImmersiveWindowIconic *, __int64))(*(_QWORD *)this + 96LL))(
          this,
          (__int64)BitmapSourceNoRef + 24);
        CImmersiveWindowIconic::_UpdateSolidFill(this);
        v9 = CVisual::SetSize(*((CVisual **)this + 36), v8 + 3);
        v2 = v9;
        if ( v9 >= 0 )
        {
          CVisual::SetOffset(*((struct tagPOINT **)this + 36), &v12);
          v10 = CImage::SetBitmapSource(*((CImage **)this + 36), (struct CBitmapSource *)v8);
          v2 = v10;
          if ( v10 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0xBAu);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0xB8u);
        }
        CBaseObject::Release((CBaseObject *)v8);
      }
    }
  }
  return v2;
}
