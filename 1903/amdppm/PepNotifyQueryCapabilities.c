/*
 * XREFs of PepNotifyQueryCapabilities @ 0x1C0033D88
 * Callers:
 *     QueryPepCapabilites @ 0x1C0033AB8 (QueryPepCapabilites.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  char v8; // al
  __int64 v10; // rcx
  int v12; // esi
  __int64 v13; // rax
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+38h] [rbp-50h]

  v16 = 0;
  v15 = 0LL;
  v8 = *(_BYTE *)(a1 + 78);
  v10 = *(_QWORD *)(a1 + 1104);
  HIBYTE(v16) = v8;
  v12 = PoFxProcessorNotification(v10, 1LL, &v15);
  if ( v12 >= 0 )
  {
    *a2 = HIDWORD(v15);
    *a4 = v15;
    *a5 = v16;
    *a6 = BYTE1(v16);
    *a3 = BYTE2(v16);
    v13 = *(_QWORD *)(a1 + 264);
    if ( (v13 & 0x300000300LL) == 0 )
    {
      *a2 = 0;
      v13 = *(_QWORD *)(a1 + 264);
    }
    if ( (v13 & 0x1000000000LL) == 0 )
    {
      *a4 = 0;
      *a5 = 0;
      *a3 = 0;
      v13 = *(_QWORD *)(a1 + 264);
    }
    *a6 &= -((v13 & 0x400) != 0);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x10u,
      (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
      v12);
  }
  return (unsigned int)v12;
}
