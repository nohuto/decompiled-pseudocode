/*
 * XREFs of LongSub @ 0x1C0250D90
 * Callers:
 *     EngCopyBits @ 0x1C0045EE0 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LongSub(int a1, int a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  v3 = a1 - (__int64)a2;
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
