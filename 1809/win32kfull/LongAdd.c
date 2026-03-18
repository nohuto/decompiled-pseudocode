/*
 * XREFs of LongAdd @ 0x1C0250D5C
 * Callers:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongAdd(int a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = a2 + (__int64)a1;
  if ( (unsigned __int64)(v3 + 0x80000000LL) > 0xFFFFFFFF )
  {
    result = 2147942934LL;
    LODWORD(v3) = -1;
  }
  else
  {
    result = 0LL;
  }
  *a3 = v3;
  return result;
}
