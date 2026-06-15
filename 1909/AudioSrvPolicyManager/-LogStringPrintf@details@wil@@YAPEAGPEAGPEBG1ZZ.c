/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x1800017B8
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18000183C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x1800350CC (_vsnwprintf.c)
 */

unsigned __int16 *wil::details::LogStringPrintf(
        wil::details *this,
        char *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        ...)
{
  signed __int64 v5; // r10
  unsigned __int16 *v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  const unsigned __int16 *Args; // [rsp+58h] [rbp+20h] BYREF

  Args = a4;
  v5 = (a2 - (char *)this) >> 1;
  v6 = (unsigned __int16 *)this;
  if ( (unsigned __int64)(v5 - 1) > 0x7FFFFFFE )
  {
    if ( v5 )
      *(_WORD *)this = 0;
  }
  else
  {
    v7 = v5 - 1;
    v8 = vsnwprintf((wchar_t *)this, v5 - 1, a3, (va_list)&Args);
    if ( v8 < 0 || v8 >= v7 )
      v6[v7] = 0;
  }
  if ( a2 != (char *)v6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v6[v9] );
    v6 += v9;
  }
  return v6;
}
