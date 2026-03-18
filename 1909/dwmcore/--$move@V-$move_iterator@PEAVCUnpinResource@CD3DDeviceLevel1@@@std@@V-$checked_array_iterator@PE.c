/*
 * XREFs of ??$move@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800EAC94
 * Callers:
 *     ?clear_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EB24C (-clear_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource@C.c)
 * Callees:
 *     ??$_Get_unwrapped_n@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J$0A@@std@@YAPEAVCUnpinResource@CD3DDeviceLevel1@@AEBV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J@Z @ 0x1800EAC18 (--$_Get_unwrapped_n@V-$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J$0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::move<std::move_iterator<CD3DDeviceLevel1::CUnpinResource *>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v4; // rbx
  __int64 *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v4 = a2;
  v8 = (__int64 *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>,__int64,0>(
                    a4,
                    (a3 - a2) >> 4);
  while ( v4 != a3 )
  {
    v9 = *(_QWORD *)v4;
    v10 = *v8;
    *v8 = *(_QWORD *)v4;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8[1] = *((_QWORD *)v4 + 1);
    v8 += 2;
    v4 += 16;
  }
  result = a1;
  a4[2] = ((__int64)v8 - *a4) >> 4;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
