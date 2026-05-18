/*
 * XREFs of sub_18007C0D8 @ 0x18007C0D8
 * Callers:
 *     sub_180014CB8 @ 0x180014CB8 (sub_180014CB8.c)
 * Callees:
 *     sub_18006E564 @ 0x18006E564 (sub_18006E564.c)
 */

_Thrd_imp_t *__fastcall sub_18007C0D8(_Thrd_imp_t *a1)
{
  _Thrd_imp_t *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  _Thrd_imp_t v6; // [rsp+30h] [rbp-18h] BYREF
  _Thrd_imp_t *v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  *(_QWORD *)&v5 = sub_18007B830;
  DWORD2(v5) = 0;
  result = sub_18006E564(&v6, &v5, &v7);
  if ( a1[74]._Id || (a1[74] = *result, result->_Hnd = 0LL, result->_Id = 0, v6._Id) )
  {
    _o_terminate(v4, v3);
    __debugbreak();
  }
  return result;
}
