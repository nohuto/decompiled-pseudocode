/*
 * XREFs of PepNotifyQueryCapabilities @ 0x1C001EEC0
 * Callers:
 *     QueryPepCapabilites @ 0x1C001ED58 (QueryPepCapabilites.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _BYTE *a3, _DWORD *a4, _BYTE *a5, _BYTE *a6)
{
  char v8; // al
  __int64 v10; // rcx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v15; // rax
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+38h] [rbp-50h]

  v17 = 0;
  v16 = 0LL;
  v8 = *(_BYTE *)(a1 + 78);
  v10 = *(_QWORD *)(a1 + 1088);
  HIBYTE(v17) = v8;
  v12 = PoFxProcessorNotification(v10, 1LL, &v16);
  v13 = v12;
  if ( v12 >= 0 )
  {
    *a2 = HIDWORD(v16);
    *a4 = v16;
    *a5 = v17;
    *a6 = BYTE1(v17);
    *a3 = BYTE2(v17);
    v15 = *(_QWORD *)(a1 + 264);
    if ( (v15 & 0x300000300LL) == 0 )
    {
      *a2 = 0;
      v15 = *(_QWORD *)(a1 + 264);
    }
    if ( (v15 & 0x1000000000LL) == 0 )
    {
      *a4 = 0;
      *a5 = 0;
      *a3 = 0;
      v15 = *(_QWORD *)(a1 + 264);
    }
    *a6 &= -((v15 & 0x400) != 0);
  }
  else
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x10u,
      (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
      v12);
  }
  return v13;
}
