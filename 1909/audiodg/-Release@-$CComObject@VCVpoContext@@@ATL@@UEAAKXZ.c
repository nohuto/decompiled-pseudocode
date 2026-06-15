/*
 * XREFs of ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x14003D6B0
 * Callers:
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ @ 0x140018BC0 (-Release@-$CComObject@VCVpoContext@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140017A68 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CVpoContext>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 4);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *, _QWORD))(*(_QWORD *)ATL::_pAtlModule + 8LL))(
      ATL::_pAtlModule,
      *(_QWORD *)ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, v2 + 1);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
