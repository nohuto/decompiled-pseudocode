/*
 * XREFs of PepGetParkingPageInfo @ 0x1C002BC68
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C0009BF0 (PepDevicePowerControlCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PepGetParkingPageInfo(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]
  int v10; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  LODWORD(v7) = *(_DWORD *)(a1 + 56);
  v10 = 24;
  v3 = ((__int64 (__fastcall *)(__int64, __int64, __int64 *, int *))HalDispatchTable->HalQuerySystemInformation)(
         29LL,
         24LL,
         &v7,
         &v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = v8;
    a2[1] = v9;
  }
  else
  {
    v6 = v3;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x15u,
      (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
      v6);
  }
  return v4;
}
