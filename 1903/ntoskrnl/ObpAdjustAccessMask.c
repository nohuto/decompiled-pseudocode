/*
 * XREFs of ObpAdjustAccessMask @ 0x14069B41C
 * Callers:
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x1405D6ED0 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1406D4408 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObpAdjustAccessMask(__int64 a1)
{
  _BYTE *v1; // rbx

  v1 = *(_BYTE **)(a1 + 64);
  if ( !v1 )
    return 0LL;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a1 + 64)) )
  {
    if ( (v1[2] & 0x10) != 0 && (*(_DWORD *)(a1 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a1 + 16) |= SeObjectCreateSaclAccessBits(v1);
    return 0LL;
  }
  return 3221225593LL;
}
