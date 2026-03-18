/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0051740
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C0015950 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0016610 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0017370 (WPP_RECORDER_SF_qLqss.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // esi
  unsigned int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // esi
  const char *v10; // rax
  const char *v11; // rcx
  __int64 result; // rax
  _DWORD v13[3]; // [rsp+50h] [rbp-38h]
  _DWORD v14[5]; // [rsp+5Ch] [rbp-2Ch] BYREF

  v1 = *(_DWORD *)(a1 + 56);
  v3 = *(__int64 **)(a1 + 40);
  v13[0] = 0;
  v13[1] = 0;
  v14[3] = 0;
  v13[2] = 826951007;
  *(_DWORD *)(a1 + 212) = (v1 >> 5) & 4;
  v4 = *(int *)(a1 + 104);
  v5 = (__int64 *)v3[89];
  qmemcpy(v14, "_EJ2_EJ3_EJ4", 12);
  v6 = v13[v4];
  if ( !AMLIIsNamedChildPresent(v5, v6) )
    KeBugCheckEx(0xA3u, 1uLL, 0xC2620uLL, 0LL, 0LL);
  v7 = ACPIGet(v3, v6, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  v8 = v3[1];
  v9 = v7;
  v10 = (const char *)&unk_1C006FE7D;
  v11 = (const char *)&unk_1C006FE7D;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v10 = (const char *)v3[70];
    if ( (v8 & 0x400000000000LL) != 0 )
      v11 = (const char *)v3[71];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x57u,
      (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
      a1,
      v9,
      (char)v3,
      v10,
      v11);
  result = 259LL;
  if ( v9 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v9, 0LL, a1);
    return 0LL;
  }
  return result;
}
