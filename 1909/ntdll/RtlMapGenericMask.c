/*
 * XREFs of RtlMapGenericMask @ 0x180012690
 * Callers:
 *     RtlpApplyAclToObject @ 0x18000E718 (RtlpApplyAclToObject.c)
 *     RtlpCopyAces @ 0x18000FB7C (RtlpCopyAces.c)
 *     RtlpCopyEffectiveAce @ 0x180012128 (RtlpCopyEffectiveAce.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6F60 (RtlNewSecurityGrantedAccess.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53E0 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMapGenericMask(int *a1, _DWORD *a2)
{
  int v2; // r8d
  __int64 result; // rax

  v2 = *a1;
  if ( *a1 < 0 )
  {
    v2 |= *a2;
    *a1 = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    result = (unsigned int)v2 | a2[1];
    v2 = result;
    *a1 = result;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    result = (unsigned int)v2 | a2[2];
    v2 = result;
    *a1 = result;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= a2[3];
  *a1 = v2 & 0xFFFFFFF;
  return result;
}
