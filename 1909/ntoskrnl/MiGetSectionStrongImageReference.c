/*
 * XREFs of MiGetSectionStrongImageReference @ 0x1408986B0
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x14008D440 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140641E24 (MiValidateImagePfn.c)
 *     MiApplyDriverHotPatch @ 0x14088CCD4 (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x140890AD4 (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x140898700 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( qword_140436478 )
  {
    result = qword_140436478(v3, &v5);
    if ( (int)result < 0 )
      return result;
    v2 = v5;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v2;
  return result;
}
