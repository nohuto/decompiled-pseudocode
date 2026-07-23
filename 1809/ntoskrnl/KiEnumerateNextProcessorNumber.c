/*
 * XREFs of KiEnumerateNextProcessorNumber @ 0x140063C4C
 * Callers:
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnumerateNextProcessorNumber(__int64 a1, unsigned __int16 **a2)
{
  unsigned int v3; // r9d
  unsigned __int64 i; // r8
  __int64 result; // rax
  unsigned __int64 v6; // rcx

  if ( *a2 )
    v3 = **a2;
  else
    v3 = *((unsigned __int16 *)a2 + 8) + 1;
  for ( i = (unsigned __int64)a2[1]; !i; a2[1] = (unsigned __int16 *)i )
  {
    if ( (unsigned __int16)++*((_WORD *)a2 + 8) >= v3 )
      return 3221226021LL;
    i = *(_QWORD *)&(*a2)[4 * *((unsigned __int16 *)a2 + 8) + 4];
  }
  _BitScanForward64(&v6, i);
  *(_BYTE *)(a1 + 2) = v6;
  *(_WORD *)a1 = *((_WORD *)a2 + 8);
  result = 0LL;
  a2[1] = (unsigned __int16 *)(i & ~(1LL << v6));
  return result;
}
