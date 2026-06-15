/*
 * XREFs of ?AddRef@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x140040A00
 * Callers:
 *     ?AddRef@?$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x14001E340 (-AddRef@-$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CVpoContext>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 16), a2);
}
