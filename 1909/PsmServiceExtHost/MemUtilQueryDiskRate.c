/*
 * XREFs of MemUtilQueryDiskRate @ 0x18003CDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MemUtilQueryDiskRate(PINIT_ONCE InitOnce, DWORD *Parameter, PVOID *Context)
{
  unsigned int v4; // ebx
  DWORD TickCount; // ecx
  unsigned int v7; // eax
  DWORD Type; // [rsp+30h] [rbp-10h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-8h] BYREF
  DWORD cbData; // [rsp+58h] [rbp+18h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+28h] BYREF

  hKey = 0LL;
  v4 = 0;
  TickCount = GetTickCount();
  if ( TickCount - *Parameter >= 0x36EE80 || !*Parameter )
  {
    *Parameter = TickCount;
    if ( !RegOpenKeyExW(
            HKEY_LOCAL_MACHINE,
            L"SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Winsat",
            0,
            0x20019u,
            &hKey) )
    {
      cbData = 4;
      if ( !RegQueryValueExW(hKey, L"WsSwapThroughput", 0LL, &Type, (LPBYTE)&Data, &cbData) )
      {
        if ( Type == 4 && cbData == 4 )
          v7 = Data;
        else
          v7 = 0;
        v4 = 1;
        if ( !v7 )
          v7 = 61440;
        if ( v7 < 0x7800 )
          v7 = 30720;
        Data = v7;
        Parameter[1] = v7;
      }
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}
