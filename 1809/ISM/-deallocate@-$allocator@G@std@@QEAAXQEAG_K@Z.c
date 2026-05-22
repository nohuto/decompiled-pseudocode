/*
 * XREFs of ?deallocate@?$allocator@G@std@@QEAAXQEAG_K@Z @ 0x18002790C
 * Callers:
 *     _std::vector_unsigned_short_std::allocator_unsigned_short___::_Emplace_reallocate_unsigned_short_const_&___ptr64__::_1_::catch$0 @ 0x180131460 (_std--vector_unsigned_short_std--allocator_unsigned_short___--_Emplace_reallocate_unsigned_short.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned short>::deallocate(__int64 a1, _QWORD *a2, __int64 a3)
{
  const struct std::nothrow_t *v4; // rdx
  __int64 v5; // rcx

  v4 = (const struct std::nothrow_t *)(2 * a3);
  if ( (unsigned __int64)(2 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 = (const struct std::nothrow_t *)((char *)v4 + 39);
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x18002794ALL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, v4);
}
