/*
 * XREFs of RegisterPepDevice @ 0x1C001EC68
 * Callers:
 *     InitPep @ 0x1C001EACC (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 *a1)
{
  __int64 v2; // rcx
  int v3; // edi
  _QWORD v5[12]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v6[2]; // [rsp+98h] [rbp+37h] BYREF
  __int64 v7; // [rsp+A8h] [rbp+47h]

  v6[0] = 0LL;
  v6[1] = 0LL;
  v7 = 0LL;
  memset(v5, 0, sizeof(v5));
  v2 = *a1;
  LODWORD(v7) = -1;
  v5[7] = a1;
  v5[0] = 0x100000001LL;
  LODWORD(v5[10]) = 1;
  v5[11] = v6;
  v5[6] = PepDevicePowerControlCallback;
  v3 = PoFxRegisterDevice(v2, v5, a1 + 136);
  if ( v3 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xFu,
      (__int64)&WPP_b2bd489c9f8f3f4d7c770ae62f3187bb_Traceguids,
      v3);
    a1[136] = 0LL;
  }
  else
  {
    PoFxActivateComponent(a1[136], 0LL, 0LL);
    PoFxStartDevicePowerManagement(a1[136]);
  }
  return (unsigned int)v3;
}
