/*
 * XREFs of ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x18004A62C
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18004A300 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18004A40C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x180087CC6 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B0F57 (memcpy_0.c)
 */

char *__fastcall wil::details::WriteResultString<char const *>(char *a1, __int64 a2, char *a3, _QWORD *a4)
{
  char *v4; // rbp
  __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  size_t v9; // r14
  size_t v10; // rbx
  char *v11; // rax
  char v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = &v13;
  v13 = 0;
  if ( a3 )
    v4 = a3;
  if ( v4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v4[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 1LL;
  }
  v9 = a2 - (_QWORD)a1;
  v10 = v8;
  if ( v8 >= a2 - (__int64)a1 )
    v10 = a2 - (_QWORD)a1;
  if ( v10 )
  {
    if ( !a1 )
      goto LABEL_21;
    if ( v4 && v9 >= v10 )
    {
      memcpy_0(a1, v4, v10);
      goto LABEL_14;
    }
    memset_0(a1, 0, v9);
    if ( v4 )
    {
      if ( v9 >= v10 )
        goto LABEL_14;
      *(_DWORD *)_o__errno() = 34;
    }
    else
    {
LABEL_21:
      *(_DWORD *)_o__errno() = 22;
    }
    invalid_parameter_noinfo();
  }
LABEL_14:
  if ( a4 )
  {
    v11 = a1;
    if ( v10 <= 1 )
      v11 = 0LL;
    *a4 = v11;
  }
  if ( v10 < v8 && v10 )
    a1[v10 - 1] = 0;
  return &a1[v10];
}
