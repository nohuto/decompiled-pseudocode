/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fb785043b79eedf4f6b3fe655bd87b16__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Do_call @ 0x1800B7D00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_fb785043b79eedf4f6b3fe655bd87b16__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8), *a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x564,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v2);
}
