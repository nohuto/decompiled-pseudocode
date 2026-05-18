/*
 * XREFs of sub_1800D217C @ 0x1800D217C
 * Callers:
 *     sub_1800D2B40 @ 0x1800D2B40 (sub_1800D2B40.c)
 * Callees:
 *     sub_180095374 @ 0x180095374 (sub_180095374.c)
 *     sub_1800D2254 @ 0x1800D2254 (sub_1800D2254.c)
 *     _o__invalid_parameter_noinfo @ 0x180125B29 (_o__invalid_parameter_noinfo.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_1800D217C(void **a1, size_t a2, const void *a3, size_t a4)
{
  size_t v4; // rbx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD pExceptionObject[8]; // [rsp+38h] [rbp-40h] BYREF

  v4 = a4;
  if ( a4 == -1LL )
    v4 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  v8 = o__aligned_malloc(a2, 16LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  sub_1800D2254(a1, v8, 0LL);
  v9 = *a1;
  if ( !*a1 )
  {
    sub_180095374(pExceptionObject);
    throw (std::bad_alloc *)pExceptionObject;
  }
  if ( a3 )
  {
    if ( v4 )
    {
      if ( a2 < v4 )
      {
        memset(v9, 0, a2);
        *(_DWORD *)o__errno(v11, v10, v12) = 34;
        o__invalid_parameter_noinfo(v14, v13, v15);
      }
      else
      {
        memcpy(v9, a3, v4);
      }
    }
  }
  else
  {
    memset(v9, 0, a2);
  }
  return a1;
}
