/*
 * XREFs of IsOpenStateExplicitPresent @ 0x1800C7CD4
 * Callers:
 *     ?GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z @ 0x1800A4FD0 (-GetSoftLandingFolderForUser@@YAJPEAXPEA_W_K@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800C7DD0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsOpenStateExplicitPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180184C24 == 1 )
    return 1;
  if ( dword_180184C24 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"HJ", &v1) < 0 )
    return 0;
  result = v1;
  dword_180184C24 = 2 - (v1 != 0);
  return result;
}
