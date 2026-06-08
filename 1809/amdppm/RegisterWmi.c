/*
 * XREFs of RegisterWmi @ 0x1C00231A4
 * Callers:
 *     EvtDevicePrepareHardware @ 0x1C001C2F0 (EvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
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
  unsigned int v10; // ebx
  __int64 *i; // rdi
  __int128 *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // r14
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+30h] [rbp-A1h]
  int v18; // [rsp+30h] [rbp-A1h]
  _QWORD v19[2]; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v20[8]; // [rsp+48h] [rbp-89h] BYREF
  _DWORD v21[10]; // [rsp+88h] [rbp-49h] BYREF
  void *v22; // [rsp+B0h] [rbp-21h]
  _QWORD v23[5]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v24; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v25; // [rsp+F0h] [rbp+1Fh]
  wchar_t v26; // [rsp+F8h] [rbp+27h]

  v26 = aProcessorwmi[12];
  v19[1] = &v24;
  v22 = &ProcessorPerfStateEvent_GUID;
  v23[0] = a1 + 158;
  v23[1] = &ProcessorCStateEvent_GUID;
  v23[2] = a1 + 162;
  v23[3] = &ProcessorThrottleStateEvent_GUID;
  v23[4] = a1 + 166;
  v24 = *(_OWORD *)L"PROCESSORWMI";
  LODWORD(v19[0]) = 1703960;
  v25 = *(_QWORD *)L"RWMI";
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DWORD *))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  a1[164] = 0;
  v3 = v2;
  a1[160] = 4;
  a1[168] = 4;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 328))(
         WdfDriverGlobals,
         v2,
         v19);
  if ( v4 < 0 )
  {
    v18 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xAu,
      (__int64)&WPP_b538b38e7b6a388d39fd05bc744c7ccf_Traceguids,
      v18);
  }
  v5 = 0;
  v6 = &unk_1C000D350;
  do
  {
    memset(v21, 0, sizeof(v21));
    v7 = (__int128 *)*((_QWORD *)v6 - 2);
    v21[0] = 40;
    v8 = *v7;
    v21[6] = *v6;
    *(_OWORD *)&v21[1] = v8;
    memset(v20, 0, sizeof(v20));
    v20[2] = v21;
    v20[4] = *((_QWORD *)v6 - 1);
    LODWORD(v20[0]) = 64;
    BYTE1(v20[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, _QWORD))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v20,
           0LL,
           0LL);
    if ( v9 < 0 )
    {
      v16 = 11;
      goto LABEL_12;
    }
    ++v5;
    v6 += 6;
  }
  while ( v5 < 4 );
  v10 = 0;
  for ( i = v23; ; i += 2 )
  {
    memset(v21, 0, sizeof(v21));
    v12 = (__int128 *)*(i - 1);
    v21[0] = 40;
    v13 = *v12;
    v21[5] = 2;
    *(_OWORD *)&v21[1] = v13;
    memset(v20, 0, sizeof(v20));
    v14 = *i;
    v20[2] = v21;
    LODWORD(v20[0]) = 64;
    BYTE1(v20[3]) = 1;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *, _QWORD, __int64))(WdfFunctions_01015 + 2984))(
           WdfDriverGlobals,
           v3,
           v20,
           0LL,
           v14);
    if ( v9 < 0 )
      break;
    ++v10;
    *(_BYTE *)(v14 + 12) = 1;
    if ( v10 >= 3 )
      return 0LL;
  }
  v16 = 12;
LABEL_12:
  LODWORD(v17) = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    4u,
    v16,
    (__int64)&WPP_b538b38e7b6a388d39fd05bc744c7ccf_Traceguids,
    v17);
  return (unsigned int)v9;
}
