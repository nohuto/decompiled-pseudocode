/*
 * XREFs of ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x14005ADB0
 * Callers:
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001F580 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x14001F590 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x14001F5A0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAKXZ @ 0x14001F5B0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAKXZ @ 0x14001F5C0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDJI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAKXZ @ 0x14001F5D0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDKA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAKXZ @ 0x14001F5E0 (-Release@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WDNA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D7E8 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 248);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *, _QWORD))(*(_QWORD *)ATL::_pAtlModule + 8LL))(
      ATL::_pAtlModule,
      *(_QWORD *)ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
