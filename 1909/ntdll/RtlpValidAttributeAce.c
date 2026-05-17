/*
 * XREFs of RtlpValidAttributeAce @ 0x1800E858C
 * Callers:
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
 * Callees:
 *     RtlpValidRelativeAttribute @ 0x1800E86FC (RtlpValidRelativeAttribute.c)
 */

bool __fastcall RtlpValidAttributeAce(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // r9d
  bool result; // al

  result = 0;
  if ( a1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 2);
    if ( ((v1 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v1
      && (unsigned int)v1 >= 0x10
      && *(_BYTE *)(a1 + 8) == 1
      && *(_BYTE *)(a1 + 9) <= 0xFu
      && v1 >= (unsigned __int64)(4 * (unsigned int)*(unsigned __int8 *)(a1 + 9) + 16) + 20 )
    {
      v2 = 4 * *(unsigned __int8 *)(a1 + 9) + 8;
      if ( (unsigned __int8)RtlpValidRelativeAttribute(a1 + 8 + v2, (unsigned int)v1 - v2 - 8) )
        return 1;
    }
  }
  return result;
}
