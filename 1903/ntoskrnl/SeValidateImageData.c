/*
 * XREFs of SeValidateImageData @ 0x14065CB00
 * Callers:
 *     MiValidateInPage @ 0x140098340 (MiValidateInPage.c)
 *     MiValidateImagePfn @ 0x14065C928 (MiValidateImagePfn.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SeValidateImageData(__int64 a1)
{
  if ( qword_1404364A8 )
    return qword_1404364A8(a1);
  else
    return 3221226536LL;
}
