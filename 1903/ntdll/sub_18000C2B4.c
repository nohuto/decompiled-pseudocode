/*
 * XREFs of sub_18000C2B4 @ 0x18000C2B4
 * Callers:
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7840 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E7BB0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     sub_1800E80D0 @ 0x1800E80D0 (sub_1800E80D0.c)
 *     sub_1800E860C @ 0x1800E860C (sub_1800E860C.c)
 *     sub_1800FF0C8 @ 0x1800FF0C8 (sub_1800FF0C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000C2B4(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
