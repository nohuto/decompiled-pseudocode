/*
 * XREFs of ?deallocate@?$allocator@D@std@@QEAAXQEAD_K@Z @ 0x18007ECA8
 * Callers:
 *     sub_180132F13 @ 0x180132F13 (sub_180132F13.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::allocator<char>::deallocate(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( a3 >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x18007ECE5LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
