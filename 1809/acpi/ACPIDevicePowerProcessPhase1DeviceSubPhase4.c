/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C001BD30
 * Callers:
 *     <none>
 * Callees:
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     ACPIDevicePowerEnumerateAssociatedPowerNodes @ 0x1C001BC14 (ACPIDevicePowerEnumerateAssociatedPowerNodes.c)
 *     ACPIPowerScheduleDpc @ 0x1C001C68C (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001DB18 (WPP_RECORDER_SF_qqss.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase4(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // rax
  void *v3; // rbx
  char v5; // r8
  void *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  KIRQL v11; // bl
  KIRQL v12; // bl
  __int64 v14; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C006E28A;
  v3 = (void *)(a1 + 216);
  v5 = 0;
  v6 = &unk_1C006E28A;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(void **)(v1 + 568);
    }
  }
  v14 = (__int64)v6;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    10,
    61,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v5,
    (__int64)v2,
    v14);
  dword_1C0080868 = 0;
  pszDest = 0;
  FreeData((__int64)v3, v8, v9, v10);
  memset(v3, 0, 0x28uLL);
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  ACPIDevicePowerEnumerateAssociatedPowerNodes(
    a1,
    (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes,
    a1);
  *(_DWORD *)(v1 + 496) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(v1 + 336);
  *(_DWORD *)(v1 + 336) = 0;
  KeReleaseSpinLock(&AcpiPowerLock, v11);
  _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 208), 0, 1);
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v12);
  return 0LL;
}
