/*
 * XREFs of ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@UEAAKXZ @ 0x140013B20
 * Callers:
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ @ 0x140018770 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ @ 0x140018780 (-AddRef@-$CComObject@VCProcessSubmix@@@ATL@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CProcessSubmix>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 336));
}
