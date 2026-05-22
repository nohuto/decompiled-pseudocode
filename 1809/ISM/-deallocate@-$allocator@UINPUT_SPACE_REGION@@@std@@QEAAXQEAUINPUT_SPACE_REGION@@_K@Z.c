/*
 * XREFs of ?deallocate@?$allocator@UINPUT_SPACE_REGION@@@std@@QEAAXQEAUINPUT_SPACE_REGION@@_K@Z @ 0x180107528
 * Callers:
 *     _std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Resize__lambda_b1c6025c05e84eb9990eaa1e3a85a290____::_1_::catch$0 @ 0x18013582F (_std--vector_INPUT_SPACE_REGION_std--allocator_INPUT_SPACE_REGION___--_Resize__lambda_b1c6025c05.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<INPUT_SPACE_REGION>::deallocate(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 84 * a3;
  if ( (unsigned __int64)(84 * a3) >= 0x1000 )
  {
    v5 = *(a2 - 1);
    v4 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, v4);
      JUMPOUT(0x180107566LL);
    }
    a2 = (_QWORD *)*(a2 - 1);
  }
  operator delete(a2, (const struct std::nothrow_t *)v4);
}
