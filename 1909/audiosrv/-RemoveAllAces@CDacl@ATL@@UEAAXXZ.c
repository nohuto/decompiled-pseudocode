/*
 * XREFs of ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x1800490F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x180042D70 (-SetCount@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 */

void __fastcall ATL::CDacl::RemoveAllAces(void **this)
{
  ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount((__int64)(this + 3));
  free(this[1]);
  this[1] = 0LL;
}
