/*
 * XREFs of ACPIPowerNodeDiscoverDependencies @ 0x1C0027DF4
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x1C0027C20 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0001A78 (WPP_RECORDER_SF_L.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_ @ 0x1C000C948 (WPP_RECORDER_SF_.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0010D04 (ExAllocateFromNPagedLookasideList.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004C6CC (WPP_RECORDER_SF_sL.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0056B14 (ACPIInternalGetDeviceFromNSOBJ.c)
 */

void __fastcall ACPIPowerNodeDiscoverDependencies(_QWORD **a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rbp
  __int64 v4; // rax
  _DWORD *v5; // rcx
  unsigned int v6; // r15d
  __int64 *v7; // r14
  int v8; // eax
  int v9; // edx
  __int64 v10; // r8
  PVOID v11; // rdi
  __int64 DeviceExtension; // r13
  _QWORD *v13; // rdi
  _QWORD *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // al
  int v18; // eax
  _QWORD *v19; // rax
  __int64 **v20; // r8
  __int64 *v21; // rdx
  _QWORD *v22; // rdx
  __int64 v23; // [rsp+28h] [rbp-60h]
  volatile signed __int32 *v24; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object[8]; // [rsp+48h] [rbp-40h] BYREF
  int v26; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+18h]
  char v28; // [rsp+A8h] [rbp+20h] BYREF

  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = (__int64 *)*v2;
      if ( (v3[2] & 0x1000) != 0 )
      {
        v4 = v3[12];
        if ( v4 )
        {
          v5 = *(_DWORD **)(v4 + 32);
          v6 = 0;
          v27 = *v5;
          if ( v27 )
            break;
        }
      }
LABEL_3:
      if ( v2 == &AcpiPowerNodeList )
        goto LABEL_4;
    }
    v7 = (__int64 *)(v5 + 10);
    while ( 1 )
    {
      v8 = AMLIGetNameSpaceObject((_BYTE *)*v7, (__int64 *)v3[4], (unsigned __int64 *)&v24, 0);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_sL(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            21,
            40,
            (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
            *v7,
            v8);
        goto LABEL_31;
      }
      ACPIInternalGetDeviceFromNSOBJ(v24, Object, v10, 0LL);
      AMLIDereferenceHandleEx(v24);
      v11 = Object[0];
      if ( Object[0] )
      {
        DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)Object[0]);
        ObfDereferenceObject(v11);
        Object[0] = 0LL;
        if ( DeviceExtension )
          break;
      }
LABEL_31:
      ++v6;
      v7 += 5;
      if ( v6 >= v27 )
        goto LABEL_3;
    }
    v13 = *a1;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( v13 == a1 )
            goto LABEL_31;
          v14 = v13;
          v13 = (_QWORD *)*v13;
          v15 = v14[5];
          if ( v15 )
          {
            v16 = *(_QWORD *)(v15 + 736);
            if ( v16 )
              break;
          }
        }
        if ( v15 != DeviceExtension )
          break;
        v17 = 1;
        v26 = 1;
LABEL_23:
        if ( (v17 & 3) != 0 )
        {
          v19 = ExAllocateFromNPagedLookasideList(&RequestDependencyLookAsideList);
          if ( v19 )
          {
            v20 = (__int64 **)v3[14];
            v21 = v19 + 2;
            if ( *v20 != v3 + 13
              || (*v21 = (__int64)(v3 + 13),
                  v19[3] = v20,
                  *v20 = v21,
                  v3[14] = (__int64)v21,
                  v22 = (_QWORD *)v14[11],
                  (_QWORD *)*v22 != v14 + 10) )
            {
              __fastfail(3u);
            }
            *v19 = v14 + 10;
            v19[1] = v22;
            *v22 = v19;
            v14[11] = v19;
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              0x2Au,
              (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids);
          }
        }
      }
      v18 = IoTestDependency(*(_QWORD *)(DeviceExtension + 736), v16, &v28, &v26);
      if ( v18 >= 0 )
      {
        v17 = v26;
        goto LABEL_23;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v23) = v18;
        WPP_RECORDER_SF_L(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0x29u,
          (__int64)&WPP_16ea8f8368aa31d784935a69de07acde_Traceguids,
          v23);
      }
    }
  }
LABEL_4:
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
}
