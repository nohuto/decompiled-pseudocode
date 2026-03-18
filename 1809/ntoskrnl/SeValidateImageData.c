/*
 * XREFs of SeValidateImageData @ 0x1405A8A20
 * Callers:
 *     MiValidateInPage @ 0x14002EC10 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x1405A8854 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_14040DDA8 )
    return qword_14040DDA8(a1);
  else
    return 3221226536LL;
}
