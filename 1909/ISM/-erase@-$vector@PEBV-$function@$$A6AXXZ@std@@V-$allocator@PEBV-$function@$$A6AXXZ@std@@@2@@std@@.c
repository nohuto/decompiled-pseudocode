/*
 * XREFs of ?erase@?$vector@PEBV?$function@$$A6AXXZ@std@@V?$allocator@PEBV?$function@$$A6AXXZ@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEBV?$function@$$A6AXXZ@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEBV?$function@$$A6AXXZ@std@@@std@@@std@@@2@0@Z @ 0x180161510
 * Callers:
 *     ?RemoveHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAXPEBV?$function@$$A6AXXZ@std@@0@Z @ 0x18015CDB8 (-RemoveHandleOpenCloseCallbacks@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEA.c)
 * Callees:
 *     memmove_0 @ 0x18003788B (memmove_0.c)
 */

_QWORD *__fastcall std::vector<std::function<void (void)> const *,std::allocator<std::function<void (void)> const *>>::erase(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        char *a4)
{
  size_t v7; // rdi
  _QWORD *result; // rax

  if ( a3 != a4 )
  {
    v7 = *(_QWORD *)(a1 + 8) - (_QWORD)a4;
    memmove_0(a3, a4, v7);
    *(_QWORD *)(a1 + 8) = &a3[v7];
  }
  result = a2;
  *a2 = a3;
  return result;
}
