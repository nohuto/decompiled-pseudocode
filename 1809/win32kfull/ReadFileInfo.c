/*
 * XREFs of ReadFileInfo @ 0x1C0091AA8
 * Callers:
 *     ?LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTOR@@K@Z @ 0x1C009172C (-LookUpFNTCacheTable@@YAHKPEAGPEAK1PEAPEAVPDEV@@1HPEAH3PEAPEAU_FONTFILEVIEW@@KPEAUtagDESIGNVECTO.c)
 * Callees:
 *     Win32FileInfo @ 0x1C0091B10 (Win32FileInfo.c)
 */

__int64 __fastcall ReadFileInfo(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  int v7; // [rsp+40h] [rbp+18h]

  v2 = 0;
  if ( !a2 )
    return 1LL;
  while ( (unsigned int)Win32FileInfo(*(PCWSTR *)(*a1 + 80)) )
  {
    v5 = *a1;
    ++v2;
    ++a1;
    *(_DWORD *)(v5 + 24) = v7;
    if ( v2 >= a2 )
      return 1LL;
  }
  return 0LL;
}
