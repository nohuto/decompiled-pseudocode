/*
 * XREFs of RegisterWmi @ 0x1C001FDB4
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001FCC0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00046C0 (memset.c)
 */

__int64 __fastcall RegisterWmi(_DWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r15
  int v4; // eax
  unsigned int v5; // edi
  _DWORD *v6; // rbx
  __int128 *v7; // rax
  __int128 v8; // xmm0
  int v9; // esi
  unsigned int v10; // edi
  __int64 *i; // rbx
  __int128 *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // r14
  __int64 v16; // [rsp+30h] [rbp-A1h]
  int v17; // [rsp+30h] [rbp-A1h]
  _QWORD v18[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v19[8]; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v20[10]; // [rsp+88h] [rbp-49h] BYREF
  void *v21; // [rsp+B0h] [rbp-21h]
  _QWORD v22[5]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v23; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v24; // [rsp+F0h] [rbp+1Fh]
  wchar_t v25; // [rsp+F8h] [rbp+27h]

  memset(v19, 0, sizeof(v19));
  v25 = aProcessorwmi[12];
  v18[1] = &v23;
  v21 = &ProcessorPerfStateEvent_GUID;
  v22[0] = a1 + 162;
  v22[1] = &ProcessorCStateEvent_GUID;
  v22[2] = a1 + 166;
  v22[3] = &ProcessorThrottleStateEvent_GUID;
  v22[4] = a1 + 170;
  v23 = *(_OWORD *)L"PROCESSORWMI";
  v18[0] = 1703960LL;
  v24 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[168] = 0;
  v3 = v2;
  a1[164] = 4;
  a1[172] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v18);
  if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xAu,
      (__int64)&WPP_b538b38e7b6a388d39fd05bc744c7ccf_Traceguids,
      v17);
  }
  v5 = 0;
  v6 = &unk_1C00112F0;
  do
  {
    memset(v20, 0, sizeof(v20));
    v7 = (__int128 *)*((_QWORD *)v6 - 2);
    v20[0] = 40;
    v8 = *v7;
    v20[6] = *v6;
    *(_OWORD *)&v20[1] = v8;
    memset(v19, 0, sizeof(v19));
    v19[2] = v20;
    v19[4] = *((_QWORD *)v6 - 1);
    LODWORD(v19[0]) = 64;
    BYTE1(v19[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v19,
           0LL,
           0LL);
    if ( v9 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v9;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          4u,
          0xBu,
          (__int64)&WPP_b538b38e7b6a388d39fd05bc744c7ccf_Traceguids,
          v16);
      }
      return (unsigned int)v9;
    }
    ++v5;
    v6 += 6;
  }
  while ( v5 < 4 );
  v10 = 0;
  for ( i = v22; ; i += 2 )
  {
    memset(v20, 0, sizeof(v20));
    v12 = (__int128 *)*(i - 1);
    v20[0] = 40;
    v13 = *v12;
    v20[5] = 2;
    *(_OWORD *)&v20[1] = v13;
    memset(v19, 0, sizeof(v19));
    v14 = *i;
    v19[2] = v20;
    LODWORD(v19[0]) = 64;
    BYTE1(v19[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v19,
           0LL,
           v14);
    if ( v9 < 0 )
      break;
    ++v10;
    *(_BYTE *)(v14 + 12) = 1;
    if ( v10 >= 3 )
      return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v16) = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xCu,
      (__int64)&WPP_b538b38e7b6a388d39fd05bc744c7ccf_Traceguids,
      v16);
  }
  return (unsigned int)v9;
}
