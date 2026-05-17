/*
 * XREFs of RtlMapGenericMask @ 0x180012690
 * Callers:
 *     sub_18000E718 @ 0x18000E718 (sub_18000E718.c)
 *     sub_18000FB7C @ 0x18000FB7C (sub_18000FB7C.c)
 *     sub_180012128 @ 0x180012128 (sub_180012128.c)
 *     RtlNewSecurityGrantedAccess @ 0x1800D6EA0 (RtlNewSecurityGrantedAccess.c)
 *     sub_1800E52F0 @ 0x1800E52F0 (sub_1800E52F0.c)
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
