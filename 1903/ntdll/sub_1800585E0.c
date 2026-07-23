/*
 * XREFs of sub_1800585E0 @ 0x1800585E0
 * Callers:
 *     sub_1800575E0 @ 0x1800575E0 (sub_1800575E0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     wcsncmp @ 0x180092410 (wcsncmp.c)
 *     sub_1800E29E8 @ 0x1800E29E8 (sub_1800E29E8.c)
 */

__int64 __fastcall sub_1800585E0(
        __int64 a1,
        void *a2,
        __int64 a3,
        const wchar_t *a4,
        unsigned __int64 a5,
        unsigned int *a6,
        __int16 a7,
        int *a8)
{
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 result; // rax
  char *v14; // rdi
  int v15; // edx
  __int64 v16; // rcx
  unsigned __int16 v17; // [rsp+20h] [rbp-258h]
  char v18; // [rsp+30h] [rbp-248h] BYREF

  if ( !a5 || !a6 )
    return 3221225485LL;
  v11 = *a6;
  v12 = 0;
  if ( ((unsigned __int64)a4 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    if ( (int)v11 >= 0 )
    {
      if ( (a7 & 0x1000) == 0 || (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        *a8 = (_DWORD)a4 - v11;
        return v12;
      }
      return (unsigned int)-1073741701;
    }
    if ( (a7 & 0x1000) != 0 && (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
LABEL_27:
    *a8 = 1;
    return v12;
  }
  if ( (int)v11 >= 0 )
  {
    *a8 = -1;
    return v12;
  }
  LODWORD(v11) = v11 & 0x7FFFFFFF;
  v14 = (char *)(v11 + a5);
  if ( (a7 & 0x1000) != 0 && ((unsigned __int64)v14 < a5 || (unsigned __int64)v14 > a3 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
    return (unsigned int)-1073741701;
  if ( (a7 & 0x8800) != 0x8800 )
  {
LABEL_15:
    if ( ((unsigned __int64)(v14 + 2) & 0xFFFFFFFFFFFF0000uLL) == 0 )
      return (unsigned int)-1073741701;
    v15 = wcsncmp(a4, (const wchar_t *)v14 + 1, *(unsigned __int16 *)v14);
    if ( v15 )
      goto LABEL_20;
    v16 = -1LL;
    do
      ++v16;
    while ( a4[v16] );
    if ( v16 == *(unsigned __int16 *)v14 )
    {
LABEL_20:
      *a8 = v15;
      return v12;
    }
    goto LABEL_27;
  }
  result = sub_1800E29E8(a2);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int64)v17 + 3 > 0x104 )
      return (unsigned int)-1073741701;
    result = sub_1800E29E8(a2);
    v12 = result;
    if ( (int)result >= 0 )
    {
      v14 = &v18;
      goto LABEL_15;
    }
  }
  return result;
}
