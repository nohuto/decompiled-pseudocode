/*
 * XREFs of ACPIBuildProcessDevicePhaseEjd @ 0x1C001A1A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D35C (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     ACPIBuildDockExtension @ 0x1C0049AA4 (ACPIBuildDockExtension.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rcx
  int v4; // esi
  __int64 v5; // rdx
  void *v6; // rax
  void *v7; // r8
  __int64 v8; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  void *v13; // rax
  void *v14; // r8

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  *(_DWORD *)(a1 + 32) = (*(_BYTE *)(v1 + 8) & 2) != 0 ? 16 : 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_1C0080868 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1u);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v10 = (_QWORD *)qword_1C0080388;
    v11 = (_QWORD *)(v1 + 800);
    if ( *(__int64 **)qword_1C0080388 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 808) = qword_1C0080388;
    *v11 = &AcpiUnresolvedEjectList;
    *v10 = v11;
    qword_1C0080388 = v1 + 800;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( (unsigned __int8)ACPIDockIsDockDevice(*(_QWORD *)(v1 + 712)) )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v12 = *(_QWORD *)(v1 + 8);
      v13 = &unk_1C006E28A;
      v14 = &unk_1C006E28A;
      if ( (v12 & 0x200000000000LL) != 0 )
      {
        v13 = *(void **)(v1 + 560);
        if ( (v12 & 0x400000000000LL) != 0 )
          v14 = *(void **)(v1 + 568);
      }
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_qss(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        6,
        38,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v1,
        (__int64)v13,
        (__int64)v14);
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v4 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 712));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = &unk_1C006E28A;
  v7 = &unk_1C006E28A;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(void **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(void **)(v1 + 568);
  }
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    6,
    39,
    (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
    v4,
    v1,
    (__int64)v6,
    (__int64)v7);
  v8 = *(unsigned int *)(a1 + 32);
  if ( v4 < 0 )
    *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v8);
  return (unsigned int)v4;
}
