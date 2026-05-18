/*
 * XREFs of sub_1800B4084 @ 0x1800B4084
 * Callers:
 *     sub_1800B37A8 @ 0x1800B37A8 (sub_1800B37A8.c)
 *     sub_1800B4DA0 @ 0x1800B4DA0 (sub_1800B4DA0.c)
 * Callees:
 *     sub_1800B2EB8 @ 0x1800B2EB8 (sub_1800B2EB8.c)
 */

_Thrd_imp_t *__fastcall sub_1800B4084(__int64 a1)
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
  v7 = sub_1800B4C00;
  result = sub_1800B2EB8(&v5, &v7, &v6);
  if ( *(_DWORD *)(a1 + 112) || (*(_Thrd_imp_t *)(a1 + 104) = *result, result->_Hnd = 0LL, result->_Id = 0, v5._Id) )
  {
    _o_terminate(v4, v3);
    __debugbreak();
  }
  return result;
}
