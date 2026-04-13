/*
 * XREFs of ?Release@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAKXZ @ 0x18001F570
 * Callers:
 *     ?Release@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfiguration@ContentManagement@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180023380 (-Release@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIContentDeliveryManagerConfi.c)
 *     ?Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ @ 0x1800233D0 (-Release@SubscriptionStaticsImpl@TargetedContent@ContentManagement@@WCI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::Release(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this)
{
  signed __int32 v1; // ebx
  int v2; // edi
  unsigned __int32 v3; // ebx

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)this + 17, 0xFFFFFFFF);
  v2 = *((_DWORD *)this + 22);
  v3 = v1 - 1;
  if ( v3 )
  {
    if ( (v2 & 4) == 0 && v3 == 1 )
      goto LABEL_7;
  }
  else
  {
    (*(void (__fastcall **)(ContentManagement::ContentDeliveryManagerConfigurationStatics *, __int64))(*(_QWORD *)this + 56LL))(
      this,
      1LL);
    if ( (v2 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_7:
      _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  }
  return v3;
}
