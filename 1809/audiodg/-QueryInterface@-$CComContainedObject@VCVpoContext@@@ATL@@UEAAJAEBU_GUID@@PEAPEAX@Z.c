/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCVpoContext@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140040F80
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCVpoContext@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E350 (-QueryInterface@-$CComContainedObject@VCVpoContext@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CVpoContext>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 16));
}
