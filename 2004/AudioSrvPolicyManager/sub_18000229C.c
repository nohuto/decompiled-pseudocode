/*
 * XREFs of sub_18000229C @ 0x18000229C
 * Callers:
 *     sub_180002320 @ 0x180002320 (sub_180002320.c)
 * Callees:
 *     vsnprintf @ 0x18003A7E4 (vsnprintf.c)
 */

char *sub_18000229C(char *a1, char *a2, const char *a3, ...)
{
  __int64 v4; // r10
  char *v5; // rbx
  unsigned __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v4 = (a2 - a1) >> 1;
  v5 = a1;
  if ( (unsigned __int64)(v4 - 1) > 0x7FFFFFFE )
  {
    if ( v4 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v6 = v4 - 1;
    v7 = vsnprintf(a1, v4 - 1, a3, ArgList);
    if ( v7 < 0 || v7 >= v6 )
      *(_WORD *)&v5[2 * v6] = 0;
  }
  if ( a2 != v5 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)&v5[2 * v8] );
    v5 += 2 * v8;
  }
  return v5;
}
