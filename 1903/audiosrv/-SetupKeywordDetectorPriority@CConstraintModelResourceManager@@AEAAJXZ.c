/*
 * XREFs of ?SetupKeywordDetectorPriority@CConstraintModelResourceManager@@AEAAJXZ @ 0x18005E3C0
 * Callers:
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x18005E294 (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CConstraintModelResourceManager::SetupKeywordDetectorPriority(CConstraintModelResourceManager *this)
{
  const BYTE *lpData; // rdi
  LSTATUS v2; // eax
  signed int v3; // ebx
  LSTATUS v4; // eax
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  lpData = (const BYTE *)this + 324;
  hKey = 0LL;
  *((_DWORD *)this + 81) = 32;
  v2 = RegCreateKeyExW(
         HKEY_LOCAL_MACHINE,
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\MMDevices",
         0,
         0LL,
         0,
         0x20006u,
         0LL,
         &hKey,
         0LL);
  v3 = v2;
  if ( v2 > 0 )
    v3 = (unsigned __int16)v2 | 0x80070000;
  if ( v3 >= 0 )
  {
    v4 = RegSetValueExW(hKey, L"KeywordDetectorPriority", 0, 4u, lpData, 4u);
    v3 = v4;
    if ( v4 > 0 )
      v3 = (unsigned __int16)v4 | 0x80070000;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v3;
}
