/*
 * XREFs of ?OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x1800EAB7C
 * Callers:
 *     ?OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x1800EAB60 (-OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ButtonProcessor::OnButtonRegistryKeyChange(ButtonProcessor *this, HKEY a2)
{
  LSTATUS v4; // eax
  signed int v5; // ecx
  bool v6; // al
  LSTATUS v7; // eax
  signed int v8; // ecx
  DWORD cbData[4]; // [rsp+30h] [rbp-10h] BYREF
  DWORD Type; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v4 = RegQueryValueExW(a2, L"ButtonsAsVKeys", 0LL, &Type, (LPBYTE)&Data, cbData);
  v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v5 = v4;
  v6 = v5 >= 0 && Type == 4 && Data;
  *((_BYTE *)this + 56) = v6;
  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v7 = RegQueryValueExW(a2, L"HardwareButtonsAsVKeys", 0LL, &Type, (LPBYTE)&Data, cbData);
  v8 = (unsigned __int16)v7 | 0x80070000;
  if ( v7 <= 0 )
    v8 = v7;
  if ( v8 >= 0 && Type == 4 )
  {
    if ( Data )
      *((_BYTE *)this + 57) = 1;
  }
}
