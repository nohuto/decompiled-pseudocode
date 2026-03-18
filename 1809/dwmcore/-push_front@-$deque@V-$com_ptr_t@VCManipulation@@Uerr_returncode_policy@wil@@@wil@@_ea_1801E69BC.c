/*
 * XREFs of ?push_front@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801E69BC
 * Callers:
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801E5F80 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     ?_Growmap@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1801E61EC (-_Growmap@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 */

_QWORD *__fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::push_front(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *result; // rax

  v4 = a1[3];
  if ( (v4 & 1) == 0 && a1[2] <= (unsigned __int64)(a1[4] + 2LL) >> 1 )
  {
    std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Growmap(a1);
    v4 = a1[3];
  }
  v5 = v4 & (2LL * a1[2] - 1);
  a1[3] = v5;
  v6 = a1[2];
  if ( !v5 )
    v5 = 2 * v6;
  v7 = v5 - 1;
  v8 = (v7 >> 1) & (v6 - 1);
  v9 = a1[1];
  if ( !*(_QWORD *)(v9 + 8 * v8) )
  {
    *(_QWORD *)(a1[1] + 8 * v8) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v9 = a1[1];
  }
  result = wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
             (_QWORD *)(*(_QWORD *)(v9 + 8 * v8) + 8 * (v7 & 1)),
             *a2);
  a1[3] = v7;
  ++a1[4];
  return result;
}
