/*
 * XREFs of ?GetWorkItem@CWorkFifo@@AEAA?AV?$shared_ptr@VWorkItem@CWorkFifo@@@std@@XZ @ 0x1801200C4
 * Callers:
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180120D28 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800DCDD0 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemF.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CWorkFifo::GetWorkItem(__int64 a1, _QWORD *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  _QWORD *v6; // rax
  std::_Ref_count_base *v7; // rcx
  int v9; // eax

  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 144);
  v5 = _Mtx_lock((_Mtx_t)(a1 + 144));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( !*(_BYTE *)(a1 + 136) && !*(_BYTE *)(a1 + 137) && *(_QWORD *)(a1 + 128) )
  {
    v6 = *(_QWORD **)(a1 + 96);
    if ( v6 )
      v6 = (_QWORD *)*v6;
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>::operator=(
      a2,
      *(__int64 **)(v6[1] + 8 * (*(_QWORD *)(a1 + 120) & (v6[2] - 1LL))));
    v7 = *(std::_Ref_count_base **)(*(_QWORD *)(*(_QWORD *)(a1 + 104)
                                              + 8 * (*(_QWORD *)(a1 + 120) & (*(_QWORD *)(a1 + 112) - 1LL)))
                                  + 8LL);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
    if ( (*(_QWORD *)(a1 + 128))-- == 1LL )
      *(_QWORD *)(a1 + 120) = 0LL;
    else
      ++*(_QWORD *)(a1 + 120);
  }
  v9 = _Mtx_unlock(v4);
  if ( v9 )
    std::_Throw_C_error(v9);
  return a2;
}
