/*
 * XREFs of SeValidateImageData @ 0x140641FFC
 * Callers:
 *     MiValidateInPage @ 0x14008D440 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x140641E24 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_140436428 )
    return qword_140436428(a1);
  else
    return 3221226536LL;
}
