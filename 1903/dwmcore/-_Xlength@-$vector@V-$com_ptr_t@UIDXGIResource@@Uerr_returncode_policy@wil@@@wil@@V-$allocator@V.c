/*
 * XREFs of ?_Xlength@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x1800EA41C
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAUIDXGIResource@@@?$vector@PEAUIDXGIResource@@V?$allocator@PEAUIDXGIResource@@@std@@@std@@QEAAPEAPEAUIDXGIResource@@QEAPEAU2@AEBQEAU2@@Z @ 0x1800E9B90 (--$_Emplace_reallocate@AEBQEAUIDXGIResource@@@-$vector@PEAUIDXGIResource@@V-$allocator@PEAUIDXGI.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800E9CAC (--$_Emplace_reallocate@V-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

void __fastcall __noreturn std::vector<wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>>::_Xlength(
        const char *a1)
{
  std::_Xlength_error(a1);
}
