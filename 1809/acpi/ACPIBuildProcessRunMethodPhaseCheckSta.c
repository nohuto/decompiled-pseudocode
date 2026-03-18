/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EB30
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C001422C (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A29C (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001D35C (WPP_RECORDER_SF_qss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002D678 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckSta(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // r14
  int v3; // esi
  __int64 v5; // rdx
  int v6; // edx
  signed __int32 v7; // ecx
  KIRQL v8; // bl
  int v9; // edx
  int v11; // eax
  int v12; // edx
  __int64 v13; // rcx
  void *v14; // rax
  int v15; // eax
  __int64 v16; // rax
  void *v17; // rdx
  void *v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C006E28A;
  *(_DWORD *)(a1 + 32) = 6;
  v3 = 0;
  v5 = *(_QWORD *)(v1 + 952);
  if ( (v5 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 600) && (v5 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v15 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712), a1 + 88, v1 + 600);
    dword_1C0080868 = 0;
    pszDest = 0;
    v3 = v15;
    FreeDataBuffs(a1 + 88, 1u);
    if ( v3 < 0 )
    {
      v16 = *(_QWORD *)(v1 + 8);
      v17 = &unk_1C006E28A;
      v18 = &unk_1C006E28A;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v17 = *(void **)(v1 + 560);
        if ( (v16 & 0x400000000000LL) != 0 )
          v18 = *(void **)(v1 + 568);
      }
      v21 = (__int64)v17;
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v17,
        6,
        62,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v3,
        v1,
        v21,
        (__int64)v18);
    }
    else
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x20uLL);
    }
  }
  v6 = *(_DWORD *)(a1 + 84);
  if ( (v6 & 8) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 952) & 0x2000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 952), 0xFFFFFFFFFFFFCFFFuLL);
      v6 = *(_DWORD *)(a1 + 84);
    }
    else if ( ACPIDeviceHasFirmwareDependencies(v1) )
    {
      *(_DWORD *)(a1 + 32) = 0;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 952), 0x1000uLL);
      v19 = *(_QWORD *)(v1 + 8);
      v20 = (const char *)&unk_1C006E28A;
      if ( (v19 & 0x200000000000LL) != 0 )
      {
        v2 = *(const char **)(v1 + 560);
        if ( (v19 & 0x400000000000LL) != 0 )
          v20 = *(const char **)(v1 + 568);
      }
      WPP_RECORDER_SF_qss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x3Fu,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v1,
        v2,
        v20);
      goto LABEL_5;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v11 = ACPIGet(
            (__int64 *)v1,
            1096045407,
            -1610348542,
            0LL,
            0,
            (__int64)ACPIBuildCompleteMustSucceed,
            a1,
            a1 + 128,
            0LL);
    v13 = *(_QWORD *)(v1 + 8);
    v3 = v11;
    v14 = &unk_1C006E28A;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 560);
      if ( (v13 & 0x400000000000LL) != 0 )
        v14 = *(void **)(v1 + 568);
    }
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      6,
      64,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      v3,
      v1,
      (__int64)v2,
      (__int64)v14);
    if ( v3 == 259 )
      return 259LL;
  }
LABEL_5:
  v7 = *(_DWORD *)(a1 + 32);
  if ( v3 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
  }
  else
  {
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v3;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v3, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v7, 1);
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v9 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v9;
    if ( (v9 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v9 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v8);
  }
  return (unsigned int)v3;
}
