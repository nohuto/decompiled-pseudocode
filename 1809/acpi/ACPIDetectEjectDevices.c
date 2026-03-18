/*
 * XREFs of ACPIDetectEjectDevices @ 0x1C004D880
 * Callers:
 *     ACPIDockIrpQueryEjectRelations @ 0x1C00A81CC (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C00A9CDC (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     ACPIExtListTestElement @ 0x1C001A4B4 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001A96C (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001ACB0 (ACPIExtListEnumNext.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIBuildMissingEjectionRelations @ 0x1C004A010 (ACPIBuildMissingEjectionRelations.c)
 *     ACPIExtListIsMemberOfRelation @ 0x1C00533AC (ACPIExtListIsMemberOfRelation.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C009A7B0 (ACPIDetectCouldExtensionBeInRelation.c)
 */

__int64 __fastcall ACPIDetectEjectDevices(__int64 a1, PVOID *a2, __int64 a3)
{
  unsigned int *v4; // rdi
  unsigned int v5; // esi
  __int64 v8; // r15
  char *i; // rax
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  PVOID *v13; // r12
  __int64 v14; // rcx
  bool v15; // zf
  unsigned int *PoolWithTag; // rax
  unsigned int *v17; // r14
  unsigned int v19; // ebx
  char *j; // rax
  char *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // rbx
  PVOID *v30; // rsi
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  void *v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  __int64 v36; // [rsp+48h] [rbp-38h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-30h]
  KIRQL NewIrql; // [rsp+58h] [rbp-28h]
  __int64 v39; // [rsp+68h] [rbp-18h]
  int v40; // [rsp+70h] [rbp-10h]
  __int64 v41; // [rsp+C0h] [rbp+40h] BYREF
  PVOID *v42; // [rsp+C8h] [rbp+48h]

  v42 = a2;
  v4 = 0LL;
  v5 = 0;
  ACPIBuildMissingEjectionRelations();
  if ( a2 && *a2 )
  {
    v5 = *(_DWORD *)*a2;
    v4 = (unsigned int *)*a2;
  }
  v36 = 0LL;
  v8 = a1 + 784;
  SpinLock = &AcpiDeviceTreeLock;
  v35 = a1 + 784;
  v39 = 800LL;
  v40 = 1;
  for ( i = ACPIExtListStartEnum((__int64)&v35); ; i = ACPIExtListEnumNext((__int64)&v35) )
  {
    v10 = i;
    if ( !ACPIExtListTestElement((__int64)&v35, 1) )
      break;
    if ( (*((_QWORD *)v10 + 1) & 0x2000000000002LL) == 0 )
    {
      if ( *((_QWORD *)v10 + 92) )
      {
        v11 = ACPIDetectCouldExtensionBeInRelation((_DWORD)v10, (_DWORD)v4, 0, 0, (__int64)&v41);
        if ( !v41 && v11 >= 0 )
        {
          v12 = *((_QWORD *)v10 + 92);
          if ( v12 )
          {
            if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v12, v4) )
              ++v5;
          }
        }
      }
    }
  }
  v13 = v42;
  if ( a3 )
  {
    if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
    {
      v14 = *(_QWORD *)(a3 + 736);
      if ( v14 )
      {
        if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v14, v4) )
          ++v5;
      }
    }
  }
  if ( v4 )
    v15 = v5 == *v4;
  else
    v15 = v5 == 0;
  if ( !v15 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v5 + 8, 0x44706341u);
    v17 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    memset(PoolWithTag, 0, 8 * v5 + 8);
    if ( v4 )
    {
      memmove(v17 + 2, v4 + 2, 8LL * *v4);
      v19 = *v4;
    }
    else
    {
      v19 = 0;
    }
    v36 = 0LL;
    SpinLock = &AcpiDeviceTreeLock;
    v35 = v8;
    v39 = 800LL;
    v40 = 1;
    for ( j = ACPIExtListStartEnum((__int64)&v35); ; j = ACPIExtListEnumNext((__int64)&v35) )
    {
      v21 = j;
      if ( !ACPIExtListTestElement((__int64)&v35, v5 > v19) )
        break;
      if ( !v21 )
      {
        if ( v40 == 2 )
          KeReleaseSpinLock(SpinLock, NewIrql);
        break;
      }
      if ( (*((_QWORD *)v21 + 1) & 0x202000000000002LL) == 0 )
      {
        v22 = *((_QWORD *)v21 + 92);
        if ( v22 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v22, v4) && v19 < v5 )
          {
            v24 = v19++;
            *(_QWORD *)&v17[2 * v24 + 2] = v23;
          }
        }
      }
    }
    if ( a3 )
    {
      if ( (*(_QWORD *)(a3 + 8) & 0x2000000000002LL) == 0 )
      {
        v25 = *(_QWORD *)(a3 + 736);
        if ( v25 )
        {
          if ( !(unsigned __int8)ACPIExtListIsMemberOfRelation(v25, v4) && v19 < v5 )
          {
            v27 = v19++;
            *(_QWORD *)&v17[2 * v27 + 2] = v26;
          }
        }
      }
    }
    *v17 = v19;
    if ( v4 )
      v28 = *v4;
    else
      v28 = 0;
    if ( v28 < v19 )
    {
      v29 = v19 - v28;
      v30 = (PVOID *)&v17[2 * v28 + 2];
      do
      {
        v31 = ObReferenceObjectByPointer(*v30, 0, 0LL, 0);
        if ( v31 < 0 )
        {
          LODWORD(v34) = v31;
          WPP_RECORDER_SF_qD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            0xFu,
            (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
            *v30,
            v34);
          v32 = --*v17;
          v33 = *(void **)&v17[2 * v32 + 2];
          *(_QWORD *)&v17[2 * v32 + 2] = *v30;
          *v30 = v33;
        }
        ++v30;
        --v29;
      }
      while ( v29 );
    }
    if ( v4 )
      ExFreePoolWithTag(*v13, 0);
    *v13 = v17;
  }
  return 0LL;
}
