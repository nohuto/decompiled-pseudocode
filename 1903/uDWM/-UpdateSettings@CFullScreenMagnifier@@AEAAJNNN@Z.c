/*
 * XREFs of ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18004C170
 * Callers:
 *     ?Create@CFullScreenMagnifier@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@PEAPEAV1@@Z @ 0x180044190 (-Create@CFullScreenMagnifier@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktop.c)
 *     ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x1800809CC (-OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180023D10 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180031374 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x1800313B4 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z @ 0x18004C268 (-SetSamplingMode@CVisual@@QEAAJW4Enum@CompositionResampleMode@@@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18004C2AC (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFullScreenMagnifier::UpdateSettings(CFullScreenMagnifier *this, double a2, double a3, double a4)
{
  bool v5; // al
  __int64 v6; // rcx
  struct tagPOINT *v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rcx
  int v12; // eax
  struct tagPOINT *v13; // rcx
  void *v14; // [rsp+28h] [rbp-10h]
  struct tagPOINT v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((double *)this + 5) != a2;
  *((double *)this + 5) = a2;
  *((double *)this + 6) = a3;
  *((double *)this + 7) = a4;
  if ( a2 > 1.01 )
  {
    if ( v5 )
    {
      v11 = *((_QWORD *)this + 3);
      if ( v11 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 56LL))(v11, 1LL);
        v12 = CVisual::SetSamplingMode(*((_QWORD *)this + 4), *((unsigned int *)this + 16));
        v9 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xB7u, v14);
          return v9;
        }
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3), 1LL);
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
      }
    }
    CVisual::SetInterpolationMode(*((unsigned int **)this + 4), 1u);
    v13 = (struct tagPOINT *)*((_QWORD *)this + 4);
    v15.x = (int)*((double *)this + 6);
    v15.y = (int)*((double *)this + 7);
    CVisual::SetOffset(v13, &v15);
    CVisual::SetScale(*((CVisual **)this + 4), *((double *)this + 5), *((double *)this + 5));
  }
  else
  {
    v6 = *((_QWORD *)this + 3);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, 0LL);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 56LL))(*((_QWORD *)this + 3), 0LL);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2));
    }
    CVisual::SetInterpolationMode(*((unsigned int **)this + 4), 0);
    CVisual::ClearInterpolationMode(*((CVisual **)this + 4));
    v7 = (struct tagPOINT *)*((_QWORD *)this + 4);
    v15.x = 0;
    v15.y = 0;
    CVisual::SetOffset(v7, &v15);
    CVisual::SetScale(*((CVisual **)this + 4), 1.0, 1.0);
    CVisual::SetSamplingMode(*((_QWORD *)this + 4), 0LL);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xF6u, v14);
  return v9;
}
