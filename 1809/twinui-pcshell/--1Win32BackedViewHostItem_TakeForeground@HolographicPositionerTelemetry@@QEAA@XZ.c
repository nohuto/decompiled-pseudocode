/*
 * XREFs of ??1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801BCF3C
 * Callers:
 *     ?TakeForeground@Win32BackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1801C0320 (-TakeForeground@Win32BackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Intern.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801BDA68 (-Destroy@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsPro.c)
 */

void __fastcall HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::~Win32BackedViewHostItem_TakeForeground(
        HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *this)
{
  *(_QWORD *)this = &HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::`vftable';
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
