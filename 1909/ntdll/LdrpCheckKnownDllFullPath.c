/*
 * XREFs of LdrpCheckKnownDllFullPath @ 0x18002A8BC
 * Callers:
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x180022950 (RtlEqualUnicodeString.c)
 */

BOOLEAN __fastcall LdrpCheckKnownDllFullPath(unsigned __int16 *a1, __int64 a2)
{
  BOOLEAN result; // al
  _WORD *i; // rax
  __int16 v5; // cx
  __int16 v6; // ax
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  result = 0;
  if ( LdrpKnownDllPath.Length )
  {
    for ( i = (_WORD *)(*a1 + *((_QWORD *)a1 + 1) - 2LL); ; --i )
    {
      *(_QWORD *)(a2 + 8) = i;
      if ( (unsigned __int64)i <= *((_QWORD *)a1 + 1) )
        break;
      if ( *i == 92 || *i == 47 )
      {
        *(_QWORD *)(a2 + 8) = i + 1;
        break;
      }
    }
    v5 = *(_WORD *)(a2 + 8) - a1[4];
    v6 = *a1 - v5;
    String1.MaximumLength = *(_WORD *)(a2 + 8) - a1[4];
    *(_WORD *)a2 = v6;
    *(_WORD *)(a2 + 2) = a1[1] - v5;
    String1.Buffer = (wchar_t *)*((_QWORD *)a1 + 1);
    String1.Length = v5 - 2;
    return RtlEqualUnicodeString(&String1, &LdrpKnownDllPath, 1u);
  }
  return result;
}
