/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x1400078C0
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140007080 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x140004230 (_vsnwprintf.c)
 */

unsigned __int16 *wil::details::LogStringPrintf(
        wchar_t *Buffer,
        unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        ...)
{
  __int64 v5; // rcx
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 v10; // rax
  const unsigned __int16 *Args; // [rsp+58h] [rbp+20h] BYREF

  Args = a4;
  v5 = a2 - Buffer;
  if ( (unsigned __int64)(v5 - 1) > 0x7FFFFFFE )
  {
    if ( v5 )
      *Buffer = 0;
  }
  else
  {
    v7 = v5 - 1;
    v8 = vsnwprintf(Buffer, v5 - 1, a3, (va_list)&Args);
    if ( v8 < 0 || v8 >= v7 )
      Buffer[v7] = 0;
  }
  if ( a2 == Buffer )
    return Buffer;
  v10 = -1LL;
  while ( Buffer[++v10] != 0 )
    ;
  return &Buffer[v10];
}
