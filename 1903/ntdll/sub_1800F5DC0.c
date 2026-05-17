/*
 * XREFs of sub_1800F5DC0 @ 0x1800F5DC0
 * Callers:
 *     RtlValidateCorrelationVector @ 0x1800F5CE0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     sub_180072FCC @ 0x180072FCC (sub_180072FCC.c)
 */

__int64 __fastcall sub_1800F5DC0(_BYTE *a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r8d
  unsigned int v3; // r9d
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned int v6; // r10d
  char v7; // cl
  __int64 v8; // rdi

  v1 = (int)sub_180072FCC(a1);
  v5 = 0LL;
  do
  {
    v6 = v2;
    if ( v5 >= v1 )
      break;
    v7 = *(_BYTE *)(v5 + v4 + 1);
    if ( !v7 )
      break;
    if ( (unsigned __int8)(v7 - 43) <= 0x2Fu && (v8 = 0xFFFFFFC07FF1LL, _bittest64(&v8, (char)(v7 - 43)))
      || (unsigned __int8)(v7 - 97) <= 0x19u )
    {
      v3 = v2;
    }
    ++v2;
    ++v5;
  }
  while ( v3 == v6 );
  return v3;
}
