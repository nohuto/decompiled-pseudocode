/*
 * XREFs of ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x18007C590
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize__lambda_2b51424039c320f102fd798e073c89b2____::_1_::catch$0 @ 0x180135FC3 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize__lambda_2b51424039c320f102fd.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned char>::deallocate(__int64 a1, void *a2, const struct std::nothrow_t *a3)
{
  void *v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)a3 >= 0x1000 )
  {
    v4 = *((_QWORD *)a2 - 1);
    a3 = (const struct std::nothrow_t *)((char *)a3 + 39);
    if ( (unsigned __int64)a2 - v4 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x18007C5CDLL);
    }
    v3 = (void *)*((_QWORD *)a2 - 1);
  }
  operator delete(v3, a3);
}
