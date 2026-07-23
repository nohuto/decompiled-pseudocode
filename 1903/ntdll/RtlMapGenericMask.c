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

void __cdecl RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // r8d

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
