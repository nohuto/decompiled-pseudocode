/*
 * XREFs of ACPIBuildThermalZoneExtension @ 0x1C002F77C
 * Callers:
 *     OSNotifyCreateThermalZone @ 0x1C002F62C (OSNotifyCreateThermalZone.c)
 * Callees:
 *     ACPIBuildDeviceExtension @ 0x1C00104F4 (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001A938 (WPP_RECORDER_SF_Dqss.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIBuildThermalZoneExtension(volatile signed __int32 *a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  char *PoolWithTag; // rax
  char *v8; // rdi
  __int64 v9; // rcx
  void *v10; // rdi
  void *v11; // rax
  __int64 v12; // rax
  void *v13; // rdi
  const char *v14; // rdx
  const char *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx

  result = ACPIBuildDeviceExtension(a1, RootDeviceExtension, a3);
  v5 = result;
  if ( (int)result >= 0 )
  {
    v6 = *a3;
    if ( v6 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x8300000uLL);
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x150uLL, 0x54706341u);
      *(_QWORD *)(v6 + 200) = PoolWithTag;
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x150uLL);
        *((_QWORD *)v8 + 23) = v8 + 176;
        *((_QWORD *)v8 + 22) = v8 + 176;
        KeInitializeEvent((PRKEVENT)(v8 + 248), NotificationEvent, 1u);
        KeInitializeEvent((PRKEVENT)(v8 + 280), NotificationEvent, 1u);
        v9 = *(_QWORD *)(v6 + 8);
        v10 = &unk_1C006FE7D;
        v11 = &unk_1C006FE7D;
        if ( (v9 & 0x200000000000LL) != 0 )
        {
          v10 = *(void **)(v6 + 560);
          if ( (v9 & 0x400000000000LL) != 0 )
            v11 = *(void **)(v6 + 568);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x59u,
            (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
            v5,
            v6,
            (__int64)v10,
            (__int64)v11);
      }
      else
      {
        v12 = *(_QWORD *)(v6 + 8);
        v13 = &unk_1C006FE7D;
        v14 = (const char *)&unk_1C006FE7D;
        v15 = (const char *)&unk_1C006FE7D;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v14 = *(const char **)(v6 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v6 + 568);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x57u,
            (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
            80,
            v6,
            v14,
            v15);
          v12 = *(_QWORD *)(v6 + 8);
        }
        v5 = -1073741670;
        v16 = &unk_1C006FE7D;
        if ( (v12 & 0x200000000000LL) != 0 )
        {
          v13 = *(void **)(v6 + 560);
          if ( (v12 & 0x400000000000LL) != 0 )
            v16 = *(void **)(v6 + 568);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x10u,
            0x58u,
            (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
            154,
            v6,
            (__int64)v13,
            (__int64)v16);
        v17 = *(void **)(v6 + 200);
        if ( v17 )
        {
          ExFreePoolWithTag(v17, 0);
          *(_QWORD *)(v6 + 200) = 0LL;
        }
        _InterlockedOr64((volatile signed __int64 *)(v6 + 8), 0x2000000000000uLL);
      }
      return v5;
    }
  }
  return result;
}
