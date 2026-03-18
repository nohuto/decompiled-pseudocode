/*
 * XREFs of MiGetSectionStrongImageReference @ 0x140898E90
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x14065C928 (MiValidateImagePfn.c)
 *     MiApplyDriverHotPatch @ 0x14088D4B4 (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408912B4 (MiPromoteControlAreaToStrongCode.c)
 *     MmGetSectionStrongImageReference @ 0x140898EE0 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( qword_1404364F8 )
  {
    result = qword_1404364F8(v3, &v5);
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
