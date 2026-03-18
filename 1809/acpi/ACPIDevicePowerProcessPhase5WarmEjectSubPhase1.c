/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001DC64 (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C001ED60 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001F050 (ACPIDeviceCompleteGenericPhase.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // esi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // esi
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
    KeBugCheckEx(0xA3u, 1uLL, 0xC261FuLL, 0LL, 0LL);
  v7 = ACPIGet(v3, v6, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  v8 = v3[1];
  v9 = v7;
  v10 = (const char *)&unk_1C006E28A;
  v11 = (const char *)&unk_1C006E28A;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v10 = (const char *)v3[70];
    if ( (v8 & 0x400000000000LL) != 0 )
      v11 = (const char *)v3[71];
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x57u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
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
