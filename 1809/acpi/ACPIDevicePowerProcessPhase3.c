/*
 * XREFs of ACPIDevicePowerProcessPhase3 @ 0x1C0013188
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001FAE0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     ACPIIsPowerNodeMissingDependencies @ 0x1C00141E4 (ACPIIsPowerNodeMissingDependencies.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qsL @ 0x1C001D0D4 (WPP_RECORDER_SF_qsL.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C002BF70 (ACPIDeviceCompletePhase3Off.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPIDevicePowerProcessPhase3()
{
  char v0; // bp
  char v1; // r9
  char v2; // r15
  __int64 *v3; // r12
  char v4; // cl
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 *v7; // rbx
  unsigned int v8; // eax
  __int64 *v10; // r9
  __int32 v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(); // r14
  const char *v16; // r13
  int v17; // edx
  unsigned int v18; // edi
  __int64 v19; // rax
  __int64 *v20; // r8
  __int64 v21; // rdx
  int v22; // eax
  int v23; // edx
  unsigned int v24; // esi
  char v25; // [rsp+80h] [rbp+8h]

  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    4,
    10,
    67,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids);
  v0 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  while ( 1 )
  {
LABEL_2:
    if ( Phase3PendingOffWorkCount )
    {
      v1 = 1;
      v25 = 1;
    }
    else
    {
      Phase3CurrentOffResourceOrder = -1;
      v1 = 0;
      v25 = 0;
    }
    if ( Phase3PendingOnWorkCount )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( !Phase3PendingOnWorkCount && !Phase3PendingOffWorkCount )
      v0 = 1;
    v3 = (__int64 *)AcpiPowerNodeList;
    ++Phase3PendingOnWorkCount;
    v4 = 0;
    if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
    {
      while ( 1 )
      {
        v5 = v3;
        v3 = (__int64 *)*v3;
        if ( v2 && *((unsigned __int8 *)v5 + 40) > (unsigned int)Phase3CurrentOnResourceOrder )
        {
LABEL_14:
          v4 = 0;
          goto LABEL_15;
        }
        if ( v1
          && *((unsigned __int8 *)v5 + 40) > (unsigned int)Phase3CurrentOffResourceOrder
          && _InterlockedCompareExchange((volatile signed __int32 *)v5 + 16, 1, 1) == 3 )
        {
          break;
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)v5 + 16, 4, 3) == 3 )
        {
          v0 = 0;
          v10 = (__int64 *)v5[6];
          v11 = 0;
          while ( v10 != v5 + 6 )
          {
            v20 = v10;
            v21 = *(v10 - 1);
            v10 = (__int64 *)*v10;
            if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v21 + 504), 0, 0) || !*((_BYTE *)v20 - 16) )
            {
              v22 = *(_DWORD *)(v21 + 496);
              if ( v22 != *((_DWORD *)v20 - 5)
                || v22 == 4 && ((*(_DWORD *)(v21 + 8) & 0x800LL) == 0 || (*(_DWORD *)(v21 + 952) & 0x10000000) != 0) )
              {
                continue;
              }
            }
            ++v11;
          }
          _InterlockedExchange((volatile __int32 *)v5 + 6, v11);
          v12 = v5[2];
          if ( (v12 & 0x440) == 0 && ((v12 & 0x2220) != 0 || v11) )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v5 + 16, 1, 4);
            ++Phase3PendingOnWorkCount;
            *((_DWORD *)v5 + 17) = 0;
            KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
            v13 = v5[2] & 0x2000;
            if ( (v5[2] & 0x2000) != 0 )
              v14 = v5[11];
            else
              v14 = v5[9];
            v15 = ACPIDeviceCompletePhase3Reset;
            if ( !v13 )
              v15 = ACPIDeviceCompletePhase3On;
            v16 = "_RST";
            if ( !v13 )
              v16 = "_ON";
            if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v5) )
            {
              v18 = -1073741661;
            }
            else
            {
              v18 = AMLIAsyncEvalObject(v14, 0LL, 0LL, 0LL, v15, v5);
              v19 = v5[2];
              if ( (v19 & 0x2000) != 0 )
                v5[2] = v19 & 0xFFFFFFFFFFFFDFFFuLL;
            }
            WPP_RECORDER_SF_qsL(
              WPP_GLOBAL_Control->DeviceExtension,
              v17,
              10,
              68,
              (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
              (char)v5,
              (__int64)v16,
              v18);
            if ( v18 != 259 )
              ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))v15)(v14, v18, 0LL, v5);
            KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
            v1 = v25;
            if ( v18 == 259 && !v2 )
            {
              v2 = 1;
              Phase3CurrentOnResourceOrder = *((unsigned __int8 *)v5 + 40);
            }
          }
          else
          {
            v1 = v25;
          }
        }
        if ( v3 == &AcpiPowerNodeList )
          goto LABEL_14;
      }
      v4 = 1;
    }
LABEL_15:
    if ( !--Phase3PendingOnWorkCount )
    {
      v2 = 0;
      Phase3CurrentOnResourceOrder = 0;
    }
    if ( v2 )
      break;
    if ( v3 == &AcpiPowerNodeList || v4 )
    {
      while ( 1 )
      {
        ++Phase3PendingOffWorkCount;
        v6 = (__int64 *)qword_1C0080198;
        while ( v6 != &AcpiPowerNodeList )
        {
          v7 = v6;
          v6 = (__int64 *)v6[1];
          v8 = *((unsigned __int8 *)v7 + 40);
          if ( v8 <= Phase3CurrentOffResourceOrder )
          {
            if ( v1 && v8 < Phase3CurrentOffResourceOrder )
              break;
            if ( _InterlockedCompareExchange((volatile signed __int32 *)v7 + 16, 1, 4) == 4 )
            {
              ++Phase3PendingOffWorkCount;
              v0 = 0;
              *((_DWORD *)v7 + 17) = 0;
              KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
              if ( (unsigned __int8)ACPIIsPowerNodeMissingDependencies(v7) )
                v24 = -1073741661;
              else
                v24 = AMLIAsyncEvalObject(v7[10], 0LL, 0LL, 0LL, ACPIDeviceCompletePhase3Off, v7);
              LOBYTE(v23) = 4;
              WPP_RECORDER_SF_qD(
                WPP_GLOBAL_Control->DeviceExtension,
                v23,
                10,
                69,
                (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
                (char)v7,
                v24);
              if ( v24 != 259 )
                ACPIDeviceCompletePhase3Off(v7[10], v24, 0LL, v7);
              KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
              if ( v24 == 259 )
              {
                v1 = 1;
                Phase3CurrentOffResourceOrder = *((unsigned __int8 *)v7 + 40);
                v25 = 1;
              }
              else
              {
                v1 = v25;
              }
            }
          }
        }
        if ( !--Phase3PendingOffWorkCount )
        {
          Phase3CurrentOffResourceOrder = -1;
          v1 = 0;
          v25 = 0;
        }
        if ( v1 )
          goto LABEL_32;
        if ( v6 == &AcpiPowerNodeList )
        {
          if ( !v0 )
            goto LABEL_2;
          goto LABEL_32;
        }
      }
    }
  }
LABEL_32:
  if ( Phase3PendingOnWorkCount > 0 || Phase3PendingOffWorkCount > 0 )
    v0 = 0;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  return v0 == 0 ? 0x103 : 0;
}
