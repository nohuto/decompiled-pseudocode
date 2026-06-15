/*
 * XREFs of ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140058EA0
 * Callers:
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140019E60 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140019E70 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140019E80 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJI@EAAKXZ @ 0x140019E90 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDKA@EAAKXZ @ 0x140019EA0 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDKA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WECI@EAAKXZ @ 0x140019EB0 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WECI@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140017A68 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 268);
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
