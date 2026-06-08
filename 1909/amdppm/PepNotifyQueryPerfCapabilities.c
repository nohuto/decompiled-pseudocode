/*
 * XREFs of PepNotifyQueryPerfCapabilities @ 0x1C003357C
 * Callers:
 *     InitPepPerfStates @ 0x1C0032C84 (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryPerfCapabilities(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // rcx
  int v11; // ebx
  int v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 1104);
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v11 = PoFxProcessorNotification(v7, 11LL, &v14);
  if ( v11 >= 0 )
  {
    *a2 = v14;
    *a3 = HIDWORD(v14);
    *a4 = v15;
    *a5 = HIDWORD(v15);
    *a6 = v16;
    *a7 = HIDWORD(v16);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = v11;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x20u,
      (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
      v13);
  }
  return (unsigned int)v11;
}
