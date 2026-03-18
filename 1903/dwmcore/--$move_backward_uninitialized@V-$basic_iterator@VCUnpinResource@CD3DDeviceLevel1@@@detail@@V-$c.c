/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@detail@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@detail@@YAXV?$basic_iterator@VCUnpinResource@CD3DDeviceLevel1@@@0@0V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@Z @ 0x1800E9FFC
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDeviceLevel1@@_K0@Z @ 0x1800EA6A4 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource.c)
 * Callees:
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015BB94 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CD3DDeviceLevel1::CUnpinResource>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // r15
  _QWORD *v9; // r14
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rbx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v8 = *a3;
    do
    {
      v9 = (_QWORD *)(result - 16);
      *a2 = result - 16;
      if ( !v8 || (v10 = a3[2]) == 0 || (v11 = v10 - 1, a3[2] = v11, v11 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, a4);
        JUMPOUT(0x1800EA08CLL);
      }
      v12 = v8 + 16 * v11;
      wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
        v12,
        *v9);
      *(_QWORD *)(v12 + 8) = v9[1];
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
