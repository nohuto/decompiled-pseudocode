/*
 * XREFs of ?IsDeviceAcrylicCapable@@YA_NXZ @ 0x180109750
 * Callers:
 *     ?OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z @ 0x180108830 (-OnMessage@AcrylicPolicyManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180109370 (-SubscribeToServices@AcrylicPolicyManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802C52A4 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 */

char IsDeviceAcrylicCapable(void)
{
  char v0; // bl
  __m128i si128; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[40]; // [rsp+30h] [rbp-38h] BYREF

  v0 = 0;
  memset_0(v3, 0, sizeof(v3));
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( (int)NtDCompositionGetFrameStatistics(v3, &si128) >= 0 && si128.m128i_i32[3] )
    return si128.m128i_i32[2] == 0;
  return v0;
}
