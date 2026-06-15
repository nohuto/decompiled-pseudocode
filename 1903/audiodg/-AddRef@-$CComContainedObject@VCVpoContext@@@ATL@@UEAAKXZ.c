/*
 * XREFs of ?AddRef@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x14003D020
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x1400186F0 (-AddRef@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 8LL))(*(_QWORD *)(a1 + 16));
}
