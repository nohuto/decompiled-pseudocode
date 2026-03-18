/*
 * XREFs of LongMult @ 0x1C013B718
 * Callers:
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongMult(int a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9

  v3 = a2 * (__int64)a1;
  if ( (unsigned __int64)(v3 + 0x80000000LL) > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 2147942934LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
