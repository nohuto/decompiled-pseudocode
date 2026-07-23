/*
 * XREFs of RtlStringVPrintfWorkerW @ 0x18004FDF0
 * Callers:
 *     RtlStringCchPrintfExW @ 0x18004FCCC (RtlStringCchPrintfExW.c)
 * Callees:
 *     _vsnwprintf @ 0x1800917F0 (_vsnwprintf.c)
 */

__int64 __fastcall RtlStringVPrintfWorkerW(
        wchar_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        const wchar_t *a4,
        va_list Args)
{
  unsigned __int64 v5; // rbx
  unsigned int v8; // ebp
  int v9; // eax

  v5 = a2 - 1;
  v8 = 0;
  v9 = vsnwprintf(a1, a2 - 1, a4, Args);
  if ( v9 < 0 )
  {
LABEL_8:
    v8 = -2147483643;
    goto LABEL_9;
  }
  if ( v9 != v5 )
  {
    if ( v9 <= v5 )
    {
      v5 = v9;
      goto LABEL_5;
    }
    goto LABEL_8;
  }
LABEL_9:
  a1[v5] = 0;
LABEL_5:
  if ( a3 )
    *a3 = v5;
  return v8;
}
