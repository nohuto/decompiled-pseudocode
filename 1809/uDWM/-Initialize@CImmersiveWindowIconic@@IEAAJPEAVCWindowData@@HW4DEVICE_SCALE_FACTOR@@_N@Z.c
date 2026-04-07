/*
 * XREFs of ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007CEDC
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x18007CDD4 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F5B0 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800387A4 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x18007C270 (-GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSo.c)
 *     ?GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4IconicRepresentationType@@@Z @ 0x18007C3CC (-GetImmersiveIconContainerSize@CImmersiveIconicBitmapRegistry@@SAHW4DEVICE_SCALE_FACTOR@@W4Iconi.c)
 *     ?RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@3@Z @ 0x18007C4C8 (-RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCImmersiveWindowIconic@@H.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18007C9A4 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007D140 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z @ 0x18007D384 (-SetBitmap@CImmersiveWindowIconic@@QEAAJPEAVCBitmapSource@@_N@Z.c)
 *     ?SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18007D3F0 (-SetRepresentationType@CImmersiveWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007D4A8 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveWindowIconic::Initialize(
        CImmersiveWindowIconic *this,
        HWND *a2,
        int a3,
        __int32 a4,
        unsigned int a5)
{
  char v5; // al
  CDesktopManager *v8; // rdx
  CImmersiveIconicBitmapRegistry *v11; // r15
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int ImmersiveIconContainerSize; // eax
  int v17; // edx
  int v18; // eax
  bool v19; // zf
  struct CBitmapSource *BitmapSourceNoRef; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // rsi
  int v22; // eax
  bool v23; // r8
  int v24; // eax
  int IconW; // eax
  int inserted; // eax
  int v27; // eax
  int v29; // [rsp+70h] [rbp+8h] BYREF
  int v30; // [rsp+74h] [rbp+Ch]
  int v31; // [rsp+88h] [rbp+20h] BYREF

  v5 = a5;
  *((_QWORD *)this + 35) = a2;
  v8 = CDesktopManager::s_pDesktopManagerInstance;
  *((_DWORD *)this + 76) = 5;
  *((_BYTE *)this + 320) = v5;
  *((_DWORD *)this + 79) = a4;
  v11 = (CImmersiveIconicBitmapRegistry *)*((_QWORD *)v8 + 38);
  v12 = CVisual::Initialize(this, *((struct IDwmChannel **)v8 + 5));
  v13 = v12;
  if ( v12 >= 0 )
  {
    v14 = CImage::Create(
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
            (struct CImage **)this + 36);
    v13 = v14;
    if ( v14 >= 0 )
    {
      *(_BYTE *)(*((_QWORD *)this + 35) + 598LL) |= 1u;
      if ( a3 )
      {
        v15 = CImmersiveIconicBitmapRegistry::RegisterIconicRepresentation(
                v11,
                this,
                a3,
                (enum DEVICE_SCALE_FACTOR)a4,
                *((_BYTE *)this + 320),
                (enum IconicRepresentationType *)&a5,
                (enum IconicRepresentationType *)&v31);
        v13 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x4Cu);
          return v13;
        }
        ImmersiveIconContainerSize = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, v31);
        v17 = v31;
        *((_DWORD *)this + 77) = ImmersiveIconContainerSize - 2;
        v18 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, v17);
        v19 = a5 == 1;
        *((_DWORD *)this + 78) = v18;
        if ( v19 )
        {
          v29 = v18;
          v30 = v18;
          (*(void (__fastcall **)(CImmersiveWindowIconic *, int *))(*(_QWORD *)this + 96LL))(this, &v29);
          CImmersiveWindowIconic::_UpdateSolidFill(this);
        }
        else
        {
          BitmapSourceNoRef = 0LL;
          IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(v11, a2[5]);
          if ( IconicResourceNoRef )
          {
            v22 = CImmersiveIconicBitmapRegistry::GetImmersiveIconContainerSize(a4, a5);
            BitmapSourceNoRef = CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
                                  IconicResourceNoRef,
                                  v22);
          }
          *((_DWORD *)this + 78) = *((_DWORD *)BitmapSourceNoRef + 6);
          (*(void (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 96LL))(this);
          CImmersiveWindowIconic::SetBitmap(this, BitmapSourceNoRef, v23);
        }
        v24 = CImmersiveWindowIconic::SetRepresentationType(this, a5, 0LL);
        v13 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v24, 0x60u);
          return v13;
        }
      }
      IconW = CImmersiveWindowIconic::LoadIconW(this);
      v13 = IconW;
      if ( IconW >= 0 )
      {
        inserted = VisualCollection::InsertRelative(
                     (CImmersiveWindowIconic *)((char *)this + 32),
                     *((struct CVisual **)this + 36),
                     0LL,
                     0,
                     1);
        v13 = inserted;
        if ( inserted >= 0 )
        {
          v27 = (*(__int64 (__fastcall **)(CImmersiveWindowIconic *))(*(_QWORD *)this + 64LL))(this);
          v13 = v27;
          if ( v27 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x67u);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x66u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, IconW, 0x65u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x44u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x42u);
  }
  return v13;
}
