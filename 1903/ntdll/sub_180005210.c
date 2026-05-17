/*
 * XREFs of sub_180005210 @ 0x180005210
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 * Callees:
 *     sub_18010DA90 @ 0x18010DA90 (sub_18010DA90.c)
 *     sub_18010DBEC @ 0x18010DBEC (sub_18010DBEC.c)
 */

_QWORD *__fastcall sub_180005210(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v3; // rdi
  _QWORD *result; // rax

  v3 = (_QWORD *)(a1 + 480);
  if ( (_QWORD *)*v3 != v3 || (result = (_QWORD *)(a1 + 464), (_QWORD *)*result != result) )
  {
    if ( *(_DWORD *)(a2 + 48) < a3 && *(_DWORD *)(a2 + 48) >= 0x180u )
    {
      result = (_QWORD *)(a1 + 464);
      if ( (_QWORD *)*result != result )
        result = (_QWORD *)sub_18010DBEC();
      if ( (_QWORD *)*v3 != v3 )
        return (_QWORD *)sub_18010DA90(a1, a2, a3);
    }
  }
  return result;
}
