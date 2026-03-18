/*
 * XREFs of ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180211B9C
 * Callers:
 *     ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x18019D970 (--_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1802112D0 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(CLinearGradientLegacyMilBrush *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CLinearGradientLegacyMilBrush::`vftable';
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers((struct CResource **)this);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 33);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)this + 32);
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CResource::~CResource(this);
}
