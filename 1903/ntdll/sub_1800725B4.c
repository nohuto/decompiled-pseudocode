/*
 * XREFs of sub_1800725B4 @ 0x1800725B4
 * Callers:
 *     RtlExtendCorrelationVector @ 0x180072570 (RtlExtendCorrelationVector.c)
 *     RtlValidateCorrelationVector @ 0x1800F5CE0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     sub_180072FCC @ 0x180072FCC (sub_180072FCC.c)
 */

__int64 __fastcall sub_1800725B4(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v4; // r8d
  int v5; // r9d
  __int64 i; // rdx
  __int64 result; // rax

  v2 = sub_180072FCC(a1, a2, 0LL);
  v5 = v2;
  if ( v2 > 0 )
  {
    for ( i = 0LL; i < v2; ++i )
    {
      if ( !*(_BYTE *)(v3 + i + 1) )
        break;
      ++v4;
    }
  }
  result = 0xFFFFFFFFLL;
  if ( v5 > v4 )
    return (unsigned int)v4;
  return result;
}
