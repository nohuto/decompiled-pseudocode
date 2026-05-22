/*
 * XREFs of ?deallocate@?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@QEAAXQEAV?$function@$$A6AX_N@Z@2@_K@Z @ 0x18003B518
 * Callers:
 *     _std::vector_std::function_void___cdecl(bool)__std::allocator_std::function_void___cdecl(bool)_____::_Emplace_reallocate_std::function_void___cdecl(bool)__&___ptr64__::_1_::catch$5 @ 0x18012F79E (_std--vector_std--function_void___cdecl(bool)__std--allocator_std--function_void___cdecl(bool)__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::function<void (bool)>>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  const struct std::nothrow_t *v3; // r8
  void *v4; // rax
  __int64 v5; // rcx

  v3 = (const struct std::nothrow_t *)(a3 << 6);
  v4 = a2;
  if ( (unsigned __int64)v3 >= 0x1000 )
  {
    v5 = *((_QWORD *)a2 - 1);
    v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, a2);
      JUMPOUT(0x18003B559LL);
    }
    v4 = (void *)*((_QWORD *)a2 - 1);
  }
  operator delete(v4, v3);
}
