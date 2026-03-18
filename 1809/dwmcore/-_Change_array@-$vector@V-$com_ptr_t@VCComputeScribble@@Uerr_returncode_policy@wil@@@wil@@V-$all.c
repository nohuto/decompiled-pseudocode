/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18022E5E0
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCComputeScribble@@@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCComputeScribble@@@Z @ 0x18022D2CC (--$_Emplace_reallocate@AEAPEAVCComputeScribble@@@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_r.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v9; // rbp
  __int64 result; // rax

  v4 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(_QWORD **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        if ( *v4 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
        ++v4;
      }
      while ( v4 != v9 );
      v4 = *(_QWORD **)a1;
    }
    std::_Deallocate<16,0>(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
