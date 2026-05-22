/*
 * XREFs of ?InitEditionOnceCallback@@YAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180001A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InitEditionOnceCallback(PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
  char IsMultiSessionSku; // al
  int v4; // ecx
  BYTE Data[4]; // [rsp+30h] [rbp-18h] BYREF
  DWORD Type; // [rsp+34h] [rbp-14h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-10h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+20h] BYREF

  RtlGetDeviceFamilyInfoEnum(0LL, &gdwDeviceFamily, 0LL);
  if ( gdwDeviceFamily == 6 )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    v4 = gdwDeviceFamily;
    if ( !IsMultiSessionSku )
      v4 = 16;
    gdwDeviceFamily = v4;
  }
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", 0, 1u, &hKey) && hKey )
  {
    cbData = 4;
    RegQueryValueExW(hKey, L"OneCoreNoBootDWM", 0LL, &Type, Data, &cbData);
  }
  return 1LL;
}
