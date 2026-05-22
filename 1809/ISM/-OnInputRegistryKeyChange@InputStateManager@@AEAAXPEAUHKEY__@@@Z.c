/*
 * XREFs of ?OnInputRegistryKeyChange@InputStateManager@@AEAAXPEAUHKEY__@@@Z @ 0x180053F1C
 * Callers:
 *     ?OnInputRegistryKeyChangeStatic@InputStateManager@@SAXPEAXPEAUHKEY__@@@Z @ 0x180053F00 (-OnInputRegistryKeyChangeStatic@InputStateManager@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InputStateManager::OnInputRegistryKeyChange(InputStateManager *this, HKEY a2)
{
  LSTATUS v4; // eax
  signed int v5; // ecx
  LSTATUS v6; // eax
  signed int v7; // ecx
  DWORD cbData[4]; // [rsp+30h] [rbp-10h] BYREF
  DWORD Type; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v4 = RegQueryValueExW(a2, L"WakeOnInputDeviceTypes", 0LL, &Type, (LPBYTE)&Data, cbData);
  v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v5 = v4;
  if ( v5 >= 0 && Type == 4 )
    *((_DWORD *)this + 44) = Data;
  else
    *((_DWORD *)this + 44) = 6;
  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v6 = RegQueryValueExW(a2, L"UnDimOnInputDeviceTypes", 0LL, &Type, (LPBYTE)&Data, cbData);
  v7 = (unsigned __int16)v6 | 0x80070000;
  if ( v6 <= 0 )
    v7 = v6;
  if ( v7 >= 0 && Type == 4 )
    *((_DWORD *)this + 45) = Data;
  else
    *((_DWORD *)this + 45) = -1;
}
