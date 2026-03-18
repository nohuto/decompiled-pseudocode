/*
 * XREFs of ACPIDetectDockDevices @ 0x1C001A3C0
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C009A588 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIGet @ 0x1C0003980 (ACPIGet.c)
 *     ACPIBuildPdo @ 0x1C0010D74 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     ACPIExtListTestElement @ 0x1C001A4B4 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020560 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C00533AC (ACPIExtListIsMemberOfRelation.c)
 */

__int64 __fastcall ACPIDetectDockDevices(__int64 a1, PVOID *a2)
{
  char v2; // bl
  int v4; // r14d
  unsigned int *v5; // rsi
  unsigned int v6; // r15d
  __int64 i; // rax
  __int64 v8; // rdi
  int v9; // edx
  bool v10; // zf
  __int64 v12; // rcx
  NTSTATUS v13; // eax
  void *v14; // rax
  void *v15; // r8
  __int64 v16; // rcx
  unsigned int *PoolWithTag; // rax
  unsigned int *v18; // r14
  unsigned int v19; // edi
  __int64 j; // rax
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // ecx
  PVOID *v26; // r12
  __int64 v27; // r12
  PVOID *v28; // r15
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  void *v31; // rcx
  __int64 v32; // [rsp+30h] [rbp-49h]
  __int64 v33; // [rsp+50h] [rbp-29h] BYREF
  __int64 v34; // [rsp+58h] [rbp-21h]
  PKSPIN_LOCK SpinLock; // [rsp+60h] [rbp-19h]
  KIRQL NewIrql; // [rsp+68h] [rbp-11h]
  __int64 v37; // [rsp+78h] [rbp-1h]
  int v38; // [rsp+80h] [rbp+7h]
  unsigned int *v39; // [rsp+E0h] [rbp+67h]
  __int64 v41; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v42; // [rsp+F8h] [rbp+7Fh]

  v2 = 0;
  v39 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
    v39 = (unsigned int *)*a2;
  }
  v34 = 0LL;
  v42 = a1 + 752;
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
        KeReleaseSpinLock(SpinLock, NewIrql);
      break;
    }
    if ( (*(_QWORD *)(v8 + 8) & 0x200000000000000LL) != 0 )
    {
      v41 = 0LL;
      v4 = ACPIGet((__int64 *)v8, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v41, 0LL);
      if ( (*(_QWORD *)(v8 + 8) & 0x2000000000002LL) == 0
        || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v8 + 952) & 0x200000) != 0 )
      {
        v12 = *(_QWORD *)(v8 + 720);
        if ( v12
          || (v13 = ACPIBuildPdo(
                      *(struct _DRIVER_OBJECT **)(*(_QWORD *)(a1 + 720) + 8LL),
                      v8,
                      *(struct _DEVICE_OBJECT **)(a1 + 720),
                      0),
              v12 = *(_QWORD *)(v8 + 720),
              v4 = v13,
              v12) )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v12, v5) )
            ++v6;
        }
      }
    }
  }
  if ( v4 < 0 )
  {
    v14 = &unk_1C006E28A;
    v15 = &unk_1C006E28A;
    if ( v8 )
    {
      v16 = *(_QWORD *)(v8 + 8);
      v9 = 0;
      v2 = v8;
      if ( (v16 & 0x200000000000LL) != 0 )
      {
        v14 = *(void **)(v8 + 560);
        v9 = 0;
        if ( (v16 & 0x400000000000LL) != 0 )
          v15 = *(void **)(v8 + 568);
      }
    }
    LOBYTE(v9) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      18,
      10,
      (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
      v4,
      v2,
      (__int64)v14,
      (__int64)v15);
    return (unsigned int)v4;
  }
  else
  {
    if ( v5 )
      v10 = v6 == *v5;
    else
      v10 = v6 == 0;
    if ( v10 )
      return 0LL;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 8, 0x44706341u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v6 + 8);
      if ( v5 )
      {
        memmove(v18 + 2, v5 + 2, 8LL * *v5);
        v19 = *v5;
      }
      else
      {
        v19 = 0;
      }
      v33 = v42;
      SpinLock = &AcpiDeviceTreeLock;
      v34 = 0LL;
      v37 = 768LL;
      v38 = 2;
      for ( j = ACPIExtListStartEnum(&v33); ; j = ACPIExtListEnumNext(&v33) )
      {
        v22 = j;
        LOBYTE(v21) = v6 > v19;
        if ( !(unsigned __int8)ACPIExtListTestElement(&v33, v21) )
          break;
        if ( v19 < v6 )
        {
          v23 = *(_QWORD *)(v22 + 8);
          if ( ((v23 & 0x2000000000002LL) == 0
             || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v22 + 952) & 0x200000) != 0)
            && (v23 & 0x200000000000000LL) != 0
            && *(_QWORD *)(v22 + 720) )
          {
            v24 = v19++;
            *(_QWORD *)&v18[2 * v24 + 2] = *(_QWORD *)(v22 + 736);
          }
        }
      }
      *v18 = v19;
      if ( v39 )
        v25 = *v39;
      else
        v25 = 0;
      v26 = a2;
      if ( v25 < v19 )
      {
        v27 = v19 - v25;
        v28 = (PVOID *)&v18[2 * v25 + 2];
        do
        {
          v29 = ObReferenceObjectByPointer(*v28, 0, 0LL, 0);
          if ( v29 < 0 )
          {
            LODWORD(v32) = v29;
            WPP_RECORDER_SF_qD(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              0xBu,
              (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
              *v28,
              v32);
            v30 = --*v18;
            v31 = *(void **)&v18[2 * v30 + 2];
            *(_QWORD *)&v18[2 * v30 + 2] = *v28;
            *v28 = v31;
          }
          ++v28;
          --v27;
        }
        while ( v27 );
        v26 = a2;
      }
      if ( v39 )
        ExFreePoolWithTag(*v26, 0);
      *v26 = v18;
      return 0LL;
    }
    return 3221225626LL;
  }
}
