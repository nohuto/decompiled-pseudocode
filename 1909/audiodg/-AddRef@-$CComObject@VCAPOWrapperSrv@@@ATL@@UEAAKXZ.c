/*
 * XREFs of ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x140012250
 * Callers:
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ @ 0x140018D20 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x140018D30 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ @ 0x140018D40 (-AddRef@-$CComObject@VCAPOWrapperSrv@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAPOWrapperSrv>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 32), a2);
}
