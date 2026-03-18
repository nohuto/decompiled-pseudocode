/*
 * XREFs of ACPIBuildProcessorExtension @ 0x1C0015CA4
 * Callers:
 *     OSNotifyCreateProcessor @ 0x1C0015E8C (OSNotifyCreateProcessor.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C604 (RtlStringCchPrintfA.c)
 *     ACPIBuildDeviceExtension @ 0x1C001B100 (ACPIBuildDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D498 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall ACPIBuildProcessorExtension(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  char v9; // r15
  char *v10; // rax
  char *v11; // rax
  int v12; // edx
  __int64 v13; // rcx
  void *v14; // rsi
  void *v15; // rax
  __int64 v16; // rax
  void *v17; // rsi
  void *v18; // rdx
  void *v19; // rcx
  unsigned __int16 v20; // r8
  void *DeviceExtension; // r10
  char v22; // al
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rcx
  void *v26; // rax
  __int64 v27; // [rsp+38h] [rbp-30h]

  if ( !Src )
    return 3221225524LL;
  result = ACPIBuildDeviceExtension();
  v6 = result;
  if ( (int)result >= 0 )
  {
    v7 = *a3;
    if ( v7 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x1000300000uLL);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)AcpiProcessorString, 0x53706341u);
      *(_QWORD *)(v7 + 560) = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src, (unsigned __int16)AcpiProcessorString);
        v9 = 15;
        v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x53706341u);
        *(_QWORD *)(v7 + 184) = v10;
        if ( v10 )
        {
          strcpy(v10, "ACPI\\Processor");
          v11 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
          *(_QWORD *)(v7 + 568) = v11;
          if ( !v11 )
            return 3221225626LL;
          RtlStringCchPrintfA(v11, 0xBuLL, "%2x", *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 96LL) + 8LL));
          _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x8001E00000000000uLL);
          v13 = *(_QWORD *)(v7 + 8);
          v14 = &unk_1C006E28A;
          v15 = &unk_1C006E28A;
          if ( (v13 & 0x200000000000LL) != 0 )
          {
            v14 = *(void **)(v7 + 560);
            if ( (v13 & 0x400000000000LL) != 0 )
              v15 = *(void **)(v7 + 568);
          }
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            6,
            55,
            (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
            v6,
            v7,
            (__int64)v14,
            (__int64)v15);
          return v6;
        }
        v23 = *(_QWORD *)(v7 + 8);
        v17 = &unk_1C006E28A;
        v18 = &unk_1C006E28A;
        v19 = &unk_1C006E28A;
        if ( (v23 & 0x200000000000LL) != 0 )
        {
          v18 = *(void **)(v7 + 560);
          if ( (v23 & 0x400000000000LL) != 0 )
            v19 = *(void **)(v7 + 568);
        }
        v20 = 53;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v22 = 2;
      }
      else
      {
        v16 = *(_QWORD *)(v7 + 8);
        v17 = &unk_1C006E28A;
        v18 = &unk_1C006E28A;
        v19 = &unk_1C006E28A;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v18 = 0LL;
          if ( (v16 & 0x400000000000LL) != 0 )
            v19 = *(void **)(v7 + 568);
        }
        v20 = 52;
        v9 = AcpiProcessorString;
        DeviceExtension = WPP_GLOBAL_Control->DeviceExtension;
        v22 = 4;
      }
      v27 = (__int64)v18;
      LOBYTE(v18) = v22;
      WPP_RECORDER_SF_Dqss(
        (_DWORD)DeviceExtension,
        (_DWORD)v18,
        6,
        v20,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        v9,
        v7,
        v27,
        (__int64)v19);
      v25 = *(_QWORD *)(v7 + 8);
      v26 = &unk_1C006E28A;
      if ( (v25 & 0x200000000000LL) != 0 )
      {
        v17 = *(void **)(v7 + 560);
        if ( (v25 & 0x400000000000LL) != 0 )
          v26 = *(void **)(v7 + 568);
      }
      LOBYTE(v24) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v24,
        6,
        54,
        (__int64)&WPP_4ce29eefff463349a5cccb0b7ee92c40_Traceguids,
        154,
        v7,
        (__int64)v17,
        (__int64)v26);
      if ( *(_QWORD *)(v7 + 568) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFEBFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 568), 0);
        *(_QWORD *)(v7 + 568) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 560) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0xFFFF5FFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 560), 0);
        *(_QWORD *)(v7 + 560) = 0LL;
      }
      if ( *(_QWORD *)(v7 + 184) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 8), 0x7FFFFFFFFFFFFFFFuLL);
        ExFreePoolWithTag(*(PVOID *)(v7 + 184), 0);
        *(_QWORD *)(v7 + 184) = 0LL;
      }
      _InterlockedOr64((volatile signed __int64 *)(v7 + 8), 0x2000000000000uLL);
      return (unsigned int)-1073741670;
    }
  }
  return result;
}
