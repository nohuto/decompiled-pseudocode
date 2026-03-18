/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0015700
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C0009900 (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FA30 (ACPIBuildCompleteCommon.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_qss @ 0x1C001AA84 (WPP_RECORDER_SF_qss.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002E608 (ACPIVerifyAndCopyFirmwareDependencies.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckSta(__int64 a1)
{
  __int64 v1; // rdi
  void *v2; // r14
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
  __int64 v19; // r8
  __int64 v20; // rcx
  void *v21; // rax
  __int64 v22; // [rsp+38h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C006FE7D;
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
    v15 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 712));
    dword_1C0082858 = 0;
    pszDest = 0;
    v3 = v15;
    FreeDataBuffs(a1 + 88, 1u);
    if ( v3 < 0 )
    {
      v16 = *(_QWORD *)(v1 + 8);
      v17 = &unk_1C006FE7D;
      v18 = &unk_1C006FE7D;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v17 = *(void **)(v1 + 560);
        if ( (v16 & 0x400000000000LL) != 0 )
          v18 = *(void **)(v1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = (__int64)v17;
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v17,
          6,
          62,
          (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
          v3,
          v1,
          v22,
          (__int64)v18);
      }
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
      v20 = *(_QWORD *)(v1 + 8);
      v21 = &unk_1C006FE7D;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v2 = *(void **)(v1 + 560);
        if ( (v20 & v19) != 0 )
          v21 = *(void **)(v1 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = 4;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          v6,
          6,
          63,
          (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
          v1,
          (__int64)v2,
          (__int64)v21);
      }
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
    v14 = &unk_1C006FE7D;
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v2 = *(void **)(v1 + 560);
      v12 = 0;
      if ( (v13 & 0x400000000000LL) != 0 )
        v14 = *(void **)(v1 + 568);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        6,
        64,
        (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
        v3,
        v1,
        (__int64)v2,
        (__int64)v14);
    }
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
