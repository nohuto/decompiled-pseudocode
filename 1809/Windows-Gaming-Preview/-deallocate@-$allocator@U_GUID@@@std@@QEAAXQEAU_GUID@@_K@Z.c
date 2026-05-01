/*
 * XREFs of ?deallocate@?$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z @ 0x180017B78
 * Callers:
 *     _std::vector__GUID_std::allocator__GUID___::_Reallocate_exactly_::_1_::catch$0 @ 0x18004472F (_std--vector__GUID_std--allocator__GUID___--_Reallocate_exactly_--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<_GUID>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  void *v4; // rax
  __int64 v5; // rcx

  v3 = 16 * a3;
  v4 = a2;
  if ( v3 >= 0x1000 )
  {
    v5 = *((_QWORD *)a2 - 1);
    v3 += 39LL;
    if ( (unsigned __int64)a2 - v5 - 8 > 0x1F )
    {
      _o__invalid_parameter_noinfo_noreturn(v5, a2);
      JUMPOUT(0x180017BB9LL);
    }
    v4 = (void *)*((_QWORD *)a2 - 1);
  }
  operator delete(v4, v3);
}
