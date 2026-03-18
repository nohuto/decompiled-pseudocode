/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x1C001E480
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001C68C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase2(__int64 a1)
{
  _QWORD *v1; // rax
  void *v2; // rdi
  char v3; // r8
  const char *v5; // r10
  const char *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  void *v11; // r10
  __int64 v12; // rcx
  KIRQL v13; // bl
  char v15; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = &unk_1C006E28A;
  v3 = 0;
  v5 = (const char *)&unk_1C006E28A;
  v6 = (const char *)&unk_1C006E28A;
  if ( v1 )
  {
    v7 = v1[1];
    v3 = (char)v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v1[70];
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x35u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v3,
    v5,
    v6);
  if ( (*(_DWORD *)(a1 + 232) & 1) != 0 )
  {
    v8 = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 256) = 0;
    v8 = 2;
  }
  *(_DWORD *)(a1 + 212) = v8;
  LODWORD(v9) = 0;
  v10 = *(_QWORD **)(a1 + 40);
  v11 = &unk_1C006E28A;
  if ( v10 )
  {
    v12 = v10[1];
    v9 = *(_QWORD *)(a1 + 40);
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v2 = (void *)v10[70];
      if ( (v12 & 0x400000000000LL) != 0 )
        v11 = (void *)v10[71];
    }
  }
  v15 = v9;
  LOBYTE(v9) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v9,
    10,
    14,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    0,
    v15,
    (__int64)v2,
    (__int64)v11);
  *(_DWORD *)(a1 + 56) &= 0xEEFFFFFF;
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), *(_DWORD *)(a1 + 212), 1);
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v13);
  return 0LL;
}
