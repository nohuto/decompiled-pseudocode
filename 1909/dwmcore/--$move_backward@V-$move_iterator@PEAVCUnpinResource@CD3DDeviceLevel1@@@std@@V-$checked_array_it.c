/*
 * XREFs of ??$move_backward@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@std@@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@V?$move_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@0@0V12@@Z @ 0x1800EAD58
 * Callers:
 *     ?reserve_region@?$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V?$buffer_impl@VCUnpinResource@CD3DDeviceLevel1@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCUnpinResource@CD3DDeviceLevel1@@_K0@Z @ 0x1800EB4C4 (-reserve_region@-$vector_facade@VCUnpinResource@CD3DDeviceLevel1@@V-$buffer_impl@VCUnpinResource.c)
 * Callees:
 *     ??$_Get_unwrapped_n@V?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J$0A@@std@@YAPEAVCUnpinResource@CD3DDeviceLevel1@@AEBV?$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J@Z @ 0x1800EAC18 (--$_Get_unwrapped_n@V-$checked_array_iterator@PEAVCUnpinResource@CD3DDeviceLevel1@@@stdext@@_J$0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::move_backward<std::move_iterator<CD3DDeviceLevel1::CUnpinResource *>,stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>>(
        __int64 a1,
        char *a2,
        char *a3,
        _QWORD *a4)
{
  char *v7; // rsi
  __int64 *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 result; // rax
  __int64 v12; // xmm1_8

  v7 = a3;
  v8 = (__int64 *)std::_Get_unwrapped_n<stdext::checked_array_iterator<CD3DDeviceLevel1::CUnpinResource *>,__int64,0>(
                    a4,
                    -((a3 - a2) >> 4));
  while ( a2 != v7 )
  {
    v8 -= 2;
    v7 -= 16;
    v9 = *(_QWORD *)v7;
    v10 = *v8;
    *v8 = *(_QWORD *)v7;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v8[1] = *((_QWORD *)v7 + 1);
  }
  result = a1;
  a4[2] = ((__int64)v8 - *a4) >> 4;
  v12 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v12;
  return result;
}
