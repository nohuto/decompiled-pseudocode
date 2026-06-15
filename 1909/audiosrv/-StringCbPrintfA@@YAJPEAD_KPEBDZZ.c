/*
 * XREFs of ?StringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1801451F4
 * Callers:
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGH@Z @ 0x180144E54 (-AddKeyValue@JsonWriter@@QEAAJPEBGH@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBGN@Z @ 0x180144F30 (-AddKeyValue@JsonWriter@@QEAAJPEBGN@Z.c)
 *     ?AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z @ 0x180145000 (-AddKeyValue@JsonWriter@@QEAAJPEBG_K@Z.c)
 * Callees:
 *     _vsnprintf @ 0x180065EA4 (_vsnprintf.c)
 */

__int64 StringCbPrintfA(char *Buffer, __int64 a2, const char *a3, ...)
{
  int v3; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v3 = 0;
    v6 = vsnprintf(Buffer, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v3;
}
