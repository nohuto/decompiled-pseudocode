/*
 * XREFs of ACPIDeviceRecordDependencies @ 0x1C0028878
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001FAE0 (ACPIDevicePowerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C00025B8 (WPP_RECORDER_SF_L.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C001C1C4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0028A64 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C0028B04 (ACPIPowerNodeDiscoverDependencies.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDeviceRecordDependencies(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // r12d
  _QWORD *v6; // r13
  __int64 v7; // rcx
  _QWORD **v9; // r8
  _QWORD *v10; // rsi
  __int64 v11; // r14
  _QWORD *v12; // r15
  __int64 v13; // rdx
  int v14; // eax
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  unsigned __int16 v20; // r9
  int v21; // eax
  _QWORD *v22; // r8
  _QWORD *v23; // rdx
  __int64 v24; // [rsp+30h] [rbp-31h]
  _QWORD **v25; // [rsp+38h] [rbp-29h]
  _BYTE v26[4]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v27[4]; // [rsp+44h] [rbp-1Dh] BYREF
  __int64 v28; // [rsp+48h] [rbp-19h]
  _QWORD *v29; // [rsp+50h] [rbp-11h]
  _QWORD v30[7]; // [rsp+58h] [rbp-9h] BYREF

  v1 = *a1;
  v30[0] = &AcpiPowerPhase0List;
  v3 = v1;
  v30[1] = &AcpiPowerBlockedOnDependencyList;
  v30[2] = &AcpiPowerPhase1List;
  v30[3] = &AcpiPowerPhase2List;
  v30[4] = &AcpiPowerPhase3List;
  v30[5] = &AcpiPowerPhase4List;
  v30[6] = &AcpiPowerPhase5List;
  if ( v1 != a1 )
  {
    do
    {
      v4 = v3[5];
      if ( !*(_QWORD *)(v4 + 736)
        && (*(_QWORD *)(v4 + 600) || (*(_DWORD *)(v4 + 952) & 0x400000LL) != 0)
        && (*(_QWORD *)(v4 + 8) & 0xA00000000000LL) == 0 )
      {
        *((_DWORD *)v3 + 14) |= 0x4000000u;
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != a1 );
LABEL_11:
    if ( v1 != a1 )
    {
      v29 = (_QWORD *)*v1;
      ACPIDeviceDiscoverDependencies(v1, a1);
      v5 = 0;
      v6 = v30;
      while ( 1 )
      {
        v7 = v1[5];
        v28 = v7;
        if ( *(_QWORD *)(v7 + 736) )
          break;
LABEL_9:
        ++v5;
        ++v6;
        if ( v5 >= 7 )
        {
          v1 = v29;
          goto LABEL_11;
        }
      }
      v9 = (_QWORD **)*v6;
      v25 = (_QWORD **)*v6;
      v10 = *(_QWORD **)*v6;
      while ( 1 )
      {
        if ( v10 == v9 )
          goto LABEL_9;
        v11 = v10[5];
        v12 = v10;
        v10 = (_QWORD *)*v10;
        if ( v1 != v12 && (v12[7] & 0x4000000) == 0 )
        {
          v13 = *(_QWORD *)(v11 + 736);
          if ( v13 )
            break;
        }
LABEL_20:
        v7 = v28;
      }
      if ( (*(_BYTE *)(v7 + 952) & 0x40) != 0 )
      {
        v14 = IoTestDependency(*(_QWORD *)(v7 + 736), v13, v27, v26);
        if ( v14 < 0 )
        {
          LODWORD(v24) = v14;
          WPP_RECORDER_SF_L(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x15u,
            0x14u,
            (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
            v24);
        }
        else if ( (v26[0] & 1) != 0 )
        {
          v15 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( v15 )
          {
            v16 = (_QWORD *)v1[9];
            v17 = v15 + 2;
            if ( (_QWORD *)*v16 != v1 + 8 )
              goto LABEL_40;
            *v17 = v1 + 8;
            v15[3] = v16;
            *v16 = v17;
            v1[9] = v17;
            v18 = v12 + 10;
LABEL_30:
            v19 = (_QWORD *)v18[1];
            if ( (_QWORD *)*v19 != v18 )
              goto LABEL_40;
            *v15 = v18;
            v15[1] = v19;
            *v19 = v15;
            v18[1] = v15;
            goto LABEL_42;
          }
          v20 = 19;
          goto LABEL_34;
        }
        v9 = v25;
        v7 = v28;
      }
      if ( (*(_BYTE *)(v11 + 952) & 0x40) == 0 )
        goto LABEL_20;
      v21 = IoTestDependency(*(_QWORD *)(v11 + 736), *(_QWORD *)(v7 + 736), v27, v26);
      if ( v21 < 0 )
      {
        LODWORD(v24) = v21;
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0x16u,
          (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
          v24);
        goto LABEL_42;
      }
      if ( (v26[0] & 1) == 0 )
      {
LABEL_42:
        v9 = v25;
        goto LABEL_20;
      }
      v15 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
      if ( v15 )
      {
        v22 = (_QWORD *)v12[9];
        v23 = v15 + 2;
        if ( (_QWORD *)*v22 != v12 + 8 )
LABEL_40:
          __fastfail(3u);
        *v23 = v12 + 8;
        v15[3] = v22;
        *v22 = v23;
        v12[9] = v23;
        v18 = v1 + 10;
        goto LABEL_30;
      }
      v20 = 21;
LABEL_34:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x15u,
        v20,
        (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids);
      goto LABEL_42;
    }
  }
  return ACPIPowerNodeDiscoverDependencies(a1);
}
