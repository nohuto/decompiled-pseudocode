/*
 * XREFs of ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x1800202CC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180037228 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z @ 0x180022E1C (-NeedsCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CA_NPEAVCWindowData@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180032424 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?SetScale@CVisual@@QEAAXNN@Z @ 0x180032464 (-SetScale@CVisual@@QEAAXNN@Z.c)
 *     ?ClearInterpolationMode@CVisual@@QEAAXXZ @ 0x18004C15C (-ClearInterpolationMode@CVisual@@QEAAXXZ.c)
 *     fmodf_0 @ 0x18004FAE2 (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x18008D0CC (-GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z.c)
 */

void __fastcall CTopLevelWindow::UpdateWindowScale(CTopLevelWindow *this)
{
  CVisual *v2; // rcx
  __int64 v3; // rdi
  _DWORD *v4; // rcx
  int v5; // eax
  CVisual *v6; // rcx
  struct CWindowData *v7; // rcx
  float CorrectionScaleForUniformSpaceWindow; // xmm0_4

  *((_DWORD *)this + 170) = -1;
  v2 = (CVisual *)*((_QWORD *)this + 67);
  if ( v2 )
  {
    CVisual::SetScale(v2, *(float *)(*((_QWORD *)this + 90) + 172LL), *(float *)(*((_QWORD *)this + 90) + 176LL));
    v3 = *((_QWORD *)this + 90);
    if ( fmodf_0(*(float *)(v3 + 172), 1.0) == 0.0 && fmodf_0(*(float *)(v3 + 176), 1.0) == 0.0 )
    {
      v4 = (_DWORD *)*((_QWORD *)this + 67);
      v5 = v4[49];
      if ( (v5 & 2) == 0 || v4[50] )
      {
        v4[50] = 0;
        v4[49] = v5 | 2;
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 64LL);
      }
    }
    else if ( *(float *)(v3 + 172) < 1.0 || *(float *)(v3 + 176) < 1.0 )
    {
      CVisual::SetInterpolationMode(*((_QWORD *)this + 67), 6LL);
    }
    else
    {
      CVisual::ClearInterpolationMode(*((CVisual **)this + 67));
    }
  }
  v6 = (CVisual *)*((_QWORD *)this + 36);
  if ( v6 )
    CVisual::SetScale(v6, *(float *)(*((_QWORD *)this + 90) + 172LL), *(float *)(*((_QWORD *)this + 90) + 176LL));
  if ( CTopLevelWindow::NeedsCorrectionScaleForUniformSpaceWindow(*((struct CWindowData **)this + 90)) )
  {
    CorrectionScaleForUniformSpaceWindow = CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(v7);
    CVisual::SetScale(
      *((CVisual **)this + 32),
      CorrectionScaleForUniformSpaceWindow,
      CorrectionScaleForUniformSpaceWindow);
  }
}
