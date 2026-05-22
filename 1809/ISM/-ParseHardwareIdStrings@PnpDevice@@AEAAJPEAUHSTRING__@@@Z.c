/*
 * XREFs of ?ParseHardwareIdStrings@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x180073B90
 * Callers:
 *     ?MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z @ 0x1800736A8 (-MakeAndInitialize@PnpDevice@@CAJPEAUHSTRING__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetInstance@LampArrayTelemetry@@SAPEAV1@XZ @ 0x180078FDC (-GetInstance@LampArrayTelemetry@@SAPEAV1@XZ.c)
 *     ?LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z @ 0x180079220 (-LogPnPDeviceInfo@LampArrayTelemetry@@QEAAXPEBGGGGG@Z.c)
 *     swscanf_s @ 0x18012C6D0 (swscanf_s.c)
 */

__int64 __fastcall PnpDevice::ParseHardwareIdStrings(PnpDevice *this, HSTRING a2)
{
  PCWSTR StringRawBuffer; // rax
  UINT32 v4; // ecx
  const wchar_t *v5; // rdi
  size_t v6; // rsi
  __int16 v7; // ax
  __int16 v8; // cx
  LampArrayTelemetry *v9; // rcx
  bool v10; // zf
  UINT32 length; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+34h] [rbp-Ch] BYREF
  int v14; // [rsp+38h] [rbp-8h] BYREF
  __int16 v15; // [rsp+70h] [rbp+30h] BYREF
  __int16 v16; // [rsp+78h] [rbp+38h] BYREF

  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  v4 = length;
  v5 = StringRawBuffer;
  if ( length )
  {
    do
    {
      if ( !*v5 )
        break;
      v6 = wcsnlen(v5, v4);
      if ( (!*((_WORD *)this + 54) || !*((_WORD *)this + 55))
        && (swscanf_s(v5, L"USB\\VID_%4x&PID_%4x", &v15, &v16) == 2
         || swscanf_s(v5, L"HID\\VID_%4x&PID_%4x", &v15, &v16) == 2
         || swscanf_s(v5, L"HID\\{%*8c-%*4c-%*4c-%*4c-%*12c}_VID&%4x_PID&%4x", &v15, &v16) == 2) )
      {
        *((_WORD *)this + 54) = v15;
        *((_WORD *)this + 55) = v16;
      }
      if ( (!*((_WORD *)this + 56) || !*((_WORD *)this + 57))
        && swscanf_s(v5, L"HID_DEVICE_UP:%4x_U:%4x", &v13, &v14) == 2 )
      {
        v7 = v13;
        v8 = v14;
        *((_WORD *)this + 56) = v13;
        *((_WORD *)this + 57) = v8;
        if ( v7 == 89 && v8 == 1 )
        {
          LampArrayTelemetry::GetInstance();
          LampArrayTelemetry::LogPnPDeviceInfo(
            v9,
            v5,
            *((_WORD *)this + 54),
            *((_WORD *)this + 55),
            *((_WORD *)this + 56),
            *((_WORD *)this + 57));
        }
      }
      v5 += v6 + 1;
      v10 = -1 - (_DWORD)v6 + length == 0;
      v4 = -1 - v6 + length;
      length = v4;
    }
    while ( !v10 );
  }
  return 0LL;
}
