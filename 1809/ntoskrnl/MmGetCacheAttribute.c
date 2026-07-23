/*
 * XREFs of MmGetCacheAttribute @ 0x1402A9D50
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttribute(unsigned __int64 a1, _DWORD *a2)
{
  ULONG_PTR v2; // rcx
  unsigned __int8 v3; // al
  int v4; // eax

  v2 = a1 >> 12;
  if ( v2 > 0xFFFFFFFFFLL || ((*(_QWORD *)(48 * v2 - 0x57FFFFFFFD8LL) >> 53) & 1) == 0 )
    return 3221225793LL;
  v3 = *(_BYTE *)(48 * v2 - 0x57FFFFFFFDELL);
  if ( !*(_WORD *)(48 * v2 - 0x57FFFFFFFE0LL) )
    KeBugCheckEx(0x1Au, 0x1232uLL, v2, v3 & 7, 0LL);
  v4 = v3 >> 6;
  switch ( v4 )
  {
    case 1:
      *a2 = 1;
      return 0LL;
    case 0:
      *a2 = 0;
      return 0LL;
    case 2:
      *a2 = 2;
      return 0LL;
  }
  return 3221225711LL;
}
