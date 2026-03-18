/*
 * XREFs of ACPIDetectDockDevices @ 0x1C0011CE0
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C0096794 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     ACPIBuildPdo @ 0x1C000B7D4 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_qD @ 0x1C000D900 (WPP_RECORDER_SF_qD.c)
 *     ACPIExtListTestElement @ 0x1C0011DE0 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C00123A0 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C0012504 (ACPIExtListStartEnum.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00170E0 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C0054D88 (ACPIExtListIsMemberOfRelation.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // esi
  unsigned int *v5; // r14
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  void *v13; // rax
  void *v14; // rdx
  __int64 v15; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // rsi
  unsigned int v18; // edi
  __int64 j; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // ecx
  PVOID *v25; // r12
  __int64 v26; // r13
  PVOID *v27; // r15
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  void *v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-49h]
  __int64 v32; // [rsp+40h] [rbp-39h]
  __int64 v33; // [rsp+50h] [rbp-29h] BYREF
  __int64 v34; // [rsp+58h] [rbp-21h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-19h]
  KIRQL NewIrql[16]; // [rsp+68h] [rbp-11h]
  __int64 v37; // [rsp+78h] [rbp-1h]
  int v38; // [rsp+80h] [rbp+7h]
  int v39; // [rsp+84h] [rbp+Bh]
  unsigned int *v40; // [rsp+E0h] [rbp+67h]
  __int64 v42; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v43; // [rsp+F8h] [rbp+7Fh]

  v2 = 0;
  v39 = 0;
  v40 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  *(_OWORD *)NewIrql = 0LL;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v40 = (unsigned int *)*a2;
  }
  v34 = 0LL;
  v43 = a1 + 752;
  v33 = a1 + 752;
  SpinLock = &AcpiDeviceTreeLock;
  v37 = 768LL;
  v38 = 1;
  for ( i = ACPIExtListStartEnum(&v33); ; i = ACPIExtListEnumNext(&v33) )
  {
    v8 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(&v33, v4 >= 0) )
      break;
    if ( !v8 )
    {
      if ( v38 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      break;
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000000LL) != 0 )
    {
      v42 = 0LL;
      v4 = ACPIGet((__int64 *)v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v42, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 952) & 0x200000) != 0 )
      {
        v11 = *(_QWORD *)(v8 + 720);
        if ( v11
          || (v12 = ACPIBuildPdo(
                      *(struct _DRIVER_OBJECT **)(*(_QWORD *)(a1 + 720) + 8LL),
                      v8,
                      *(struct _DEVICE_OBJECT **)(a1 + 720),
                      0),
              v11 = *(_QWORD *)(v8 + 720),
              v4 = v12,
              v11) )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v11, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    v13 = &unk_1C006FE7D;
    v14 = &unk_1C006FE7D;
    if ( v8 )
    {
      v15 = *(_QWORD *)(v8 + 8);
      v2 = v8;
      if ( (v15 & 0x200000000000LL) != 0 )
      {
        v13 = *(void **)(v8 + 560);
        if ( (v15 & 0x400000000000LL) != 0 )
          v14 = *(void **)(v8 + 568);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v32 = (__int64)v14;
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        18,
        10,
        (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
        v4,
        v2,
        (__int64)v13,
        v32);
    }
    return (unsigned int)v4;
  }
  else
  {
    if ( v5 )
      v9 = v6 == *v5;
    else
      v9 = v6 == 0;
    if ( v9 )
      return 0LL;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x44706341u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( v5 )
      {
        memmove(v17 + 2, v5 + 2, 8LL * *v5);
        v18 = *v5;
      }
      else
      {
        v18 = 0;
      }
      v33 = v43;
      SpinLock = &AcpiDeviceTreeLock;
      v34 = 0LL;
      v37 = 768LL;
      v38 = 2;
      for ( j = ACPIExtListStartEnum(&v33); ; j = ACPIExtListEnumNext(&v33) )
      {
        v21 = j;
        LOBYTE(v20) = v6 > v18;
        if ( !(unsigned __int8)ACPIExtListTestElement(&v33, v20) )
          break;
        if ( v18 < v6 )
        {
          v22 = *(_QWORD *)(v21 + 8);
          if ( ((v22 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v21 + 952) & 0x200000) != 0)
            && (v22 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v21 + 720) )
          {
            v23 = v18++;
            *(_QWORD *)&v17[2 * v23 + 2] = *(_QWORD *)(v21 + 736);
          }
        }
      }
      *v17 = v18;
      if ( v40 )
        v24 = *v40;
      else
        v24 = 0;
      v25 = a2;
      if ( v24 < v18 )
      {
        v26 = v18 - v24;
        v27 = (PVOID *)&v17[2 * v24 + 2];
        do
        {
          v28 = ObReferenceObjectByPointer(*v27, 0, 0LL, 0);
          if ( v28 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v31) = v28;
              WPP_RECORDER_SF_qD(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                0x15u,
                0xBu,
                (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
                *v27,
                v31);
            }
            v29 = --*v17;
            v30 = *(void **)&v17[2 * v29 + 2];
            *(_QWORD *)&v17[2 * v29 + 2] = *v27;
            *v27 = v30;
          }
          ++v27;
          --v26;
        }
        while ( v26 );
        v25 = a2;
      }
      if ( v40 )
        ExFreePoolWithTag(*v25, 0);
      *v25 = v17;
      return 0LL;
    }
    return 3221225626LL;
  }
}
