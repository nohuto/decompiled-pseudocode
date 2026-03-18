/*
 * XREFs of ACPIBuildDeviceExtension @ 0x1C001B100
 * Callers:
 *     ACPIBuildProcessorExtension @ 0x1C0015CA4 (ACPIBuildProcessorExtension.c)
 *     OSNotifyCreateDevice @ 0x1C001AF60 (OSNotifyCreateDevice.c)
 *     ACPIBuildThermalZoneExtension @ 0x1C002EC0C (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildFixedButtonExtension @ 0x1C003016C (ACPIBuildFixedButtonExtension.c)
 *     ACPIBuildDockExtension @ 0x1C0049AA4 (ACPIBuildDockExtension.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C1C4 (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall ACPIBuildDeviceExtension(volatile signed __int32 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char *v7; // rax
  char *v8; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  if ( a1 && (v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL)) != 0 )
  {
    if ( *(_QWORD *)(v6 + 744) == a2 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    return 3221225486LL;
  }
  else
  {
    v7 = (char *)ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x3C0uLL);
      *((_QWORD *)v8 + 89) = a1;
      ++*((_DWORD *)v8 + 171);
      ++*((_DWORD *)v8 + 170);
      if ( a1 )
      {
        dword_1C0080868 = 0;
        pszDest = 0;
        if ( (gdwfAMLI & 4) != 0 )
          _InterlockedAdd(a1 + 2, 1u);
      }
      *((_QWORD *)v8 + 3) = 0LL;
      *((_DWORD *)v8 + 80) = 0;
      *((_DWORD *)v8 + 4) = 1599293264;
      *((_QWORD *)v8 + 1) = 10LL;
      *((_DWORD *)v8 + 115) = 0;
      *((_DWORD *)v8 + 122) = 0;
      *((_DWORD *)v8 + 123) = 0;
      *((_DWORD *)v8 + 120) = 4;
      *((_DWORD *)v8 + 121) = 4;
      *((_DWORD *)v8 + 116) = 1;
      *((_DWORD *)v8 + 117) = 1;
      *((_DWORD *)v8 + 118) = 1;
      *((_DWORD *)v8 + 119) = 1;
      *((_DWORD *)v8 + 125) = 1;
      *((_QWORD *)v8 + 95) = v8 + 752;
      *((_QWORD *)v8 + 94) = v8 + 752;
      *((_QWORD *)v8 + 99) = v8 + 784;
      *((_QWORD *)v8 + 98) = v8 + 784;
      *((_QWORD *)v8 + 101) = v8 + 800;
      *((_QWORD *)v8 + 100) = v8 + 800;
      *((_QWORD *)v8 + 65) = v8 + 512;
      *((_QWORD *)v8 + 64) = v8 + 512;
      *((_QWORD *)v8 + 68) = v8 + 536;
      *((_QWORD *)v8 + 67) = v8 + 536;
      *((_QWORD *)v8 + 103) = v8 + 816;
      *((_QWORD *)v8 + 102) = v8 + 816;
      *a3 = v8;
      KeInitializeEvent((PRKEVENT)(v8 + 856), SynchronizationEvent, 1u);
      *((_QWORD *)v8 + 110) = 0LL;
      v8[888] = 0;
      *((_QWORD *)v8 + 93) = a2;
      if ( a2 )
      {
        _InterlockedAdd((volatile signed __int32 *)(a2 + 684), 1u);
        v9 = *(_QWORD **)(a2 + 760);
        v10 = v8 + 768;
        if ( *v9 != a2 + 752 )
          __fastfail(3u);
        *v10 = a2 + 752;
        *((_QWORD *)v8 + 97) = v9;
        *v9 = v10;
        *(_QWORD *)(a2 + 760) = v10;
        _InterlockedOr64((volatile signed __int64 *)(a2 + 8), 0x40000000000uLL);
      }
      if ( a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 104LL) = v8;
      *((_DWORD *)v8 + 164) = -1;
      *((_QWORD *)v8 + 84) = v8 + 664;
      *((_QWORD *)v8 + 83) = v8 + 664;
      *(_QWORD *)v8 = &gAcpiTriageInfo;
      return 0LL;
    }
    WPP_RECORDER_SF_L(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      0xAu,
      (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
      (_DWORD)a1);
    return 3221225626LL;
  }
}
