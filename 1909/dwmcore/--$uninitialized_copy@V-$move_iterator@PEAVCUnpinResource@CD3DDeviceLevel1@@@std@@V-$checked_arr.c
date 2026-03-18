/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800EAEB4
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800EB338 (-ensure_extra_capacity@-$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_.c)
 * Callees:
 *     ??$_Get_unwrapped_n@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J$0A@@std@@YAPEAVCUnpinResource@CD3DDeviceLevel1@@AEBV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J@Z @ 0x1800EAC18 (--$_Get_unwrapped_n@V-$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J$0.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x18015A4B4 (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CD3DDeviceLevel1::CUnpinResource *>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rbx
  __int64 v8; // rsi
  __int64 result; // rax
  __int64 v10; // xmm1_8

  v4 = a2;
  v8 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>,__int64,0>(
         a4,
         (a3 - a2) >> 4);
  while ( v4 != a3 )
  {
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
      v8,
      *(_QWORD *)v4);
    *(_QWORD *)(v8 + 8) = *((_QWORD *)v4 + 1);
    v8 += 16LL;
    v4 += 16;
  }
  result = a1;
  a4[2] = (v8 - *a4) >> 4;
  v10 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v10;
  return result;
}
