/*
 * XREFs of ACPIBuildDockExtension @ 0x1C004B10C
 * Callers:
 *     ACPIBuildProcessDevicePhaseEjd @ 0x1C000F920 (ACPIBuildProcessDevicePhaseEjd.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001B40 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C0005788 (RtlStringCchPrintfA.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000BD28 (ACPIAmliBuildObjectPathname.c)
 *     ACPIBuildDeviceExtension @ 0x1C00104F4 (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildDockExtension(__int64 a1)
{
  PVOID v2; // r14
  __int64 result; // rax
  __int64 v4; // rbx
  char *PoolWithTag; // rax
  void *v6; // rdi
  char *v7; // r15
  int v8; // esi
  void **v9; // r13
  _QWORD *v10; // r14
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rax
  void *v16; // rax
  __int64 v17; // [rsp+98h] [rbp+10h] BYREF
  PVOID P; // [rsp+A0h] [rbp+18h] BYREF
  void **v19; // [rsp+A8h] [rbp+20h]

  v17 = 0LL;
  v2 = 0LL;
  P = 0LL;
  result = ACPIBuildDeviceExtension(0LL, RootDeviceExtension, &v17);
  if ( (int)result >= 0 )
  {
    v4 = v17;
    if ( v17 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x15uLL, 0x53706341u);
      v6 = &unk_1C006FE7D;
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        RtlStringCchPrintfA(PoolWithTag, 0x15uLL, "ACPI\\DockDevice");
        v19 = (void **)(v4 + 560);
        *(_QWORD *)(v4 + 560) = v7;
        v8 = ACPIAmliBuildObjectPathname(a1, (char **)&P, 0);
        if ( v8 >= 0 )
        {
          *(_QWORD *)(v4 + 568) = P;
          *(_QWORD *)(v4 + 184) = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
          *(_DWORD *)(v4 + 192) = 4;
          *(_DWORD *)(v4 + 200) = 0;
          v10 = (_QWORD *)(v4 + 8);
          _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x209E00000020008uLL);
          v4 = v17;
          v9 = v19;
        }
        else
        {
          v9 = v19;
          v10 = (_QWORD *)(v4 + 8);
          v11 = *(_QWORD *)(v4 + 8);
          v12 = &unk_1C006FE7D;
          v13 = &unk_1C006FE7D;
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v12 = *v19;
            if ( (v11 & 0x400000000000LL) != 0 )
              v13 = *(void **)(v4 + 568);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              0x15u,
              0x53u,
              (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
              v8,
              v4,
              (__int64)v12,
              (__int64)v13);
        }
        if ( v8 >= 0 )
        {
          v16 = &unk_1C006FE7D;
          if ( (*v10 & 0x200000000000LL) != 0 )
          {
            v6 = *v9;
            if ( (*v10 & 0x400000000000LL) != 0 )
              v16 = *(void **)(v4 + 568);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              6u,
              0x55u,
              (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
              v8,
              v4,
              (__int64)v6,
              (__int64)v16);
          return (unsigned int)v8;
        }
        v2 = P;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x52u,
            (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
            21);
        v8 = -1073741670;
      }
      v14 = *(_QWORD *)(v4 + 8);
      v15 = &unk_1C006FE7D;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v6 = *(void **)(v4 + 560);
        if ( (v14 & 0x400000000000LL) != 0 )
          v15 = *(void **)(v4 + 568);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x54u,
          (__int64)&WPP_7da7a47bb83432ecae707d7e950ce950_Traceguids,
          v8,
          v4,
          (__int64)v6,
          (__int64)v15);
      if ( v2 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(P, 0);
        *(_QWORD *)(v17 + 568) = 0LL;
      }
      if ( v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(v7, 0);
        *(_QWORD *)(v17 + 560) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v4 + 8), 0x2000000000000uLL);
      return (unsigned int)v8;
    }
  }
  return result;
}
