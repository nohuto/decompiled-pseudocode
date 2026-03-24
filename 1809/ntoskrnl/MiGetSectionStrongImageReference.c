/*
 * XREFs of MiGetSectionStrongImageReference @ 0x14085C2F8
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1405A8854 (MiValidateImagePfn.c)
 *     MiApplyDriverHotPatch @ 0x140854080 (MiApplyDriverHotPatch.c)
 *     MiPromoteControlAreaToStrongCode @ 0x1408578A0 (MiPromoteControlAreaToStrongCode.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A37C (MiLoadSectionIntoVsmEnclave.c)
 *     MmGetSectionStrongImageReference @ 0x14085C348 (MmGetSectionStrongImageReference.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiGetSectionStrongImageReference(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( qword_14040DDD8 )
  {
    result = qword_14040DDD8(v3, &v5);
    if ( (int)result < 0 )
      return result;
    v2 = v5;
  }
  else
  {
    result = 0LL;
  }
  *(_QWORD *)(a1 + 48) = v2;
  return result;
}
