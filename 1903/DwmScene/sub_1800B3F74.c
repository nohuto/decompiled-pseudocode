/*
 * XREFs of sub_1800B3F74 @ 0x1800B3F74
 * Callers:
 *     sub_1800B3698 @ 0x1800B3698 (sub_1800B3698.c)
 *     sub_1800B4C90 @ 0x1800B4C90 (sub_1800B4C90.c)
 * Callees:
 *     sub_1800B2DA8 @ 0x1800B2DA8 (sub_1800B2DA8.c)
 */

_Thrd_imp_t *__fastcall sub_1800B3F74(__int64 a1)
{
  _Thrd_imp_t *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _Thrd_imp_t v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 426) = 0;
  *(_BYTE *)(a1 + 425) = 1;
  v6 = a1;
  v7 = sub_1800B4AF0;
  result = sub_1800B2DA8(&v5, &v7, &v6);
  if ( *(_DWORD *)(a1 + 112) || (*(_Thrd_imp_t *)(a1 + 104) = *result, result->_Hnd = 0LL, result->_Id = 0, v5._Id) )
  {
    _o_terminate(v4, v3);
    __debugbreak();
  }
  return result;
}
