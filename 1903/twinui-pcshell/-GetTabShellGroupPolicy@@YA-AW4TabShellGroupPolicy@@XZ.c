/*
 * XREFs of ?GetTabShellGroupPolicy@@YA?AW4TabShellGroupPolicy@@XZ @ 0x180244A0C
 * Callers:
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x180237560 (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 GetTabShellGroupPolicy()
{
  unsigned int v0; // ebx
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  DWORD v4; // [rsp+60h] [rbp+18h] BYREF

  v0 = 0;
  pvData = 0;
  pcbData = 4;
  v4 = 4;
  if ( !RegGetValueW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
          L"AllowSets",
          0x10u,
          0LL,
          &pvData,
          &pcbData)
    || !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\Explorer",
          L"AllowSets",
          0x10u,
          0LL,
          &pvData,
          &v4) )
  {
    LOBYTE(v0) = pvData != 1;
    ++v0;
  }
  return v0;
}
