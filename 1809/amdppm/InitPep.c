/*
 * XREFs of InitPep @ 0x1C002B58C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

__int64 __fastcall InitPep(__int64 *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rsi
  int v4; // eax
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  char v9; // dl
  __int64 v11; // [rsp+30h] [rbp-51h]
  char v12[16]; // [rsp+38h] [rbp-49h] BYREF
  _QWORD v13[12]; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v14[2]; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+37h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    a1[26],
    0LL);
  v14[0] = 0LL;
  v14[1] = 0LL;
  v15 = 0LL;
  memset(v13, 0, sizeof(v13));
  v2 = *a1;
  LODWORD(v15) = -1;
  v3 = a1 + 136;
  v13[11] = v14;
  v13[0] = 0x100000001LL;
  v13[6] = PepDevicePowerControlCallback;
  LODWORD(v13[10]) = 1;
  v13[7] = a1;
  v4 = PoFxRegisterDevice(v2, v13, a1 + 136);
  v5 = v4;
  if ( v4 >= 0 )
  {
    PoFxActivateComponent(a1[136], 0LL, 0LL);
    PoFxStartDevicePowerManagement(*v3);
  }
  else
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xFu,
      (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
      v4);
    a1[136] = 0LL;
  }
  if ( v5 >= 0 )
  {
    if ( !*((_BYTE *)a1 + 78) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_1C0011668)(*((unsigned int *)a1 + 14), *v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C00113E8,
      0LL);
    if ( !PepLpiInitialized )
    {
      v6 = a1[33];
      if ( (v6 & 0x100000000000LL) != 0 && (v6 & 0xE0000000000LL) != 0 )
      {
        v7 = *v3;
        v12[0] = 0;
        v8 = PoFxProcessorNotification(v7, 34LL, v12);
        v9 = 0;
        if ( v8 >= 0 )
          v9 = v12[0];
        PepLpiDisabled = v9;
      }
      PepLpiInitialized = 1;
    }
    if ( PepLpiDisabled )
      a1[33] &= 0xFFFFE1FFFFFFFFFFuLL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00113E8);
  }
  else
  {
    LODWORD(v11) = v5;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xAu,
      (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
      v11);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, a1[26]);
  return (unsigned int)v5;
}
