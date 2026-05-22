/*
 * XREFs of ??$make_shared@VSystemCursorShape@@V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@YA?AV?$shared_ptr@VSystemCursorShape@@@0@$$QEAV?$shared_ptr@VSystemCursorService@@@0@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1800CBB10
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x1800CC630 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC8EC (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@?$_Ref_count_obj@VSystemCursorShape@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService@@@1@AEA_KAEAV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@Z @ 0x1800CB420 (--$-0V-$shared_ptr@VSystemCursorService@@@std@@AEA_KAEAV-$ComPtr@VDataSourcePrincipal@@@WRL@Micr.c)
 */

_QWORD *__fastcall std::make_shared<SystemCursorShape,std::shared_ptr<SystemCursorService>,unsigned __int64 &,Microsoft::WRL::ComPtr<DataSourcePrincipal> &>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  __int64 v8; // rax
  void *v10; // [rsp+30h] [rbp+8h]

  v10 = operator new(0x38uLL);
  v8 = std::_Ref_count_obj<SystemCursorShape>::_Ref_count_obj<SystemCursorShape>((__int64)v10, a2, a3, a4);
  a1[1] = v8;
  *a1 = v8 + 16;
  return a1;
}
