/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019F70
 * Callers:
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180019E70 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18001F810 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D9840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1800D9840.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800D9850 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1800D9850.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800D9860 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1800D9860.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800D9870 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1800D9870.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@UIWindowSnappingEvents@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800D9880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1800D9880.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x1800D9CC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VView_ea_1800D9CC0.c)
 *     ?InternalRelease@?$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180217EC0 (-InternalRelease@-$ComPtr@VAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ?Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ @ 0x180218450 (-Release@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAKXZ.c)
 *     ?Attach@?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z @ 0x18021E18C (-Attach@-$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAAXPEAVViewHostItemEventArgs@@@Z.c)
 *     ?_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180224A04 (-_RaiseViewAdded@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@VViewEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180299554 (--1-$com_ptr_t@VViewEventArgs@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18008E7A0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 80);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
