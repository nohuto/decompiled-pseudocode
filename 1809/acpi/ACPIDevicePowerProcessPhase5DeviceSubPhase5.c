/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C001DE20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompletePhase3Common @ 0x1C001C640 (ACPIDeviceCompletePhase3Common.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase5(__int64 a1)
{
  _QWORD *v1; // rdi
  void *v2; // rsi
  char v3; // dl
  _QWORD *v4; // rbp
  const char *v6; // r8
  const char *v7; // rcx
  __int64 v8; // rax
  signed __int32 v9; // edx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  void *v13; // r10
  __int64 v14; // rcx
  char v16; // [rsp+30h] [rbp-38h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C006E28A;
  v3 = 0;
  v4 = (_QWORD *)(a1 + 216);
  v6 = (const char *)&unk_1C006E28A;
  v7 = (const char *)&unk_1C006E28A;
  if ( v1 )
  {
    v8 = v1[1];
    v3 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x4Fu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v3,
    v6,
    v7);
  *(_DWORD *)(a1 + 212) = 8;
  v9 = 2;
  v10 = v4[2];
  if ( (v10 & 9) == 9 && ((v10 & 2) != 0 || (v1[1] & 0x40) != 0) )
  {
    memset(v4, 0, 0x28uLL);
    v11 = *(_QWORD **)(a1 + 40);
    LODWORD(v12) = 0;
    v13 = &unk_1C006E28A;
    if ( v11 )
    {
      v14 = v11[1];
      v12 = *(_QWORD *)(a1 + 40);
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v2 = (void *)v11[70];
        if ( (v14 & 0x400000000000LL) != 0 )
          v13 = (void *)v11[71];
      }
    }
    v16 = v12;
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      10,
      14,
      (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
      0,
      v16,
      (__int64)v2,
      (__int64)v13);
    *(_DWORD *)(a1 + 56) &= 0xEEFFFFFF;
    v9 = *(_DWORD *)(a1 + 212);
  }
  else
  {
    *(_DWORD *)(a1 + 256) = -1073741436;
  }
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a1 + 208), v9);
  return 0LL;
}
