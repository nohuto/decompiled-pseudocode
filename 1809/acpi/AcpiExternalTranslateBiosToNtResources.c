/*
 * XREFs of AcpiExternalTranslateBiosToNtResources @ 0x1C00AB48C
 * Callers:
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C00AFF3C (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C00B0014 (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00195FC (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     AcpiCheckExternalConnection @ 0x1C009A520 (AcpiCheckExternalConnection.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AB960 (ExternalRequestBiosNameDeviceAssociation.c)
 */

__int64 __fastcall AcpiExternalTranslateBiosToNtResources(
        ULONG_PTR a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5)
{
  __int64 DeviceExtension; // rbp
  char *v9; // rdi
  int v10; // ebx
  __int64 (__fastcall *v11)(_QWORD, ULONG_PTR, __int64, _QWORD, unsigned int, char *, SIZE_T *); // r14
  int v12; // esi
  unsigned int v13; // eax
  char *PoolWithTag; // rax
  int v15; // ecx
  unsigned int v16; // r8d
  __int64 v17; // rax
  int v18; // eax
  __int64 v20; // [rsp+30h] [rbp-48h]
  SIZE_T NumberOfBytes[2]; // [rsp+40h] [rbp-38h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LODWORD(NumberOfBytes[0]) = 120;
  v9 = 0LL;
  AcpiCheckExternalConnection();
  v10 = -1073741822;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  if ( ExternalTranslationInterface )
  {
    v11 = (__int64 (__fastcall *)(_QWORD, ULONG_PTR, __int64, _QWORD, unsigned int, char *, SIZE_T *))*((_QWORD *)ExternalTranslationInterface + 7);
    v12 = 0;
    v13 = NumberOfBytes[0];
    while ( 1 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v13, 0x58706341u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      v10 = v11(*((_QWORD *)ExternalTranslationInterface + 5), a1, a2, a3, a4, PoolWithTag, NumberOfBytes);
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(v9, 0x58706341u);
        v9 = 0LL;
      }
      if ( v10 == -1073741789 )
      {
        v13 = NumberOfBytes[0];
        if ( LODWORD(NumberOfBytes[0]) )
        {
          if ( (unsigned int)++v12 < 2 )
            continue;
        }
      }
      goto LABEL_11;
    }
    v10 = -1073741670;
  }
LABEL_11:
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v10 >= 0 )
  {
    v15 = NumberOfBytes[0];
    if ( LODWORD(NumberOfBytes[0]) < 0x38 )
    {
LABEL_13:
      v10 = -1073741637;
      goto LABEL_19;
    }
    *a5 = *(_OWORD *)(v9 + 8);
    a5[1] = *(_OWORD *)(v9 + 24);
    v16 = *((_DWORD *)v9 + 11);
    if ( v16 )
    {
      v17 = *((unsigned int *)v9 + 10);
      if ( v16 > v15 - (int)v17 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0xAu,
          (__int64)&WPP_05a11f23d0943a3100389a2588cd23f4_Traceguids);
        goto LABEL_13;
      }
      v18 = ExternalRequestBiosNameDeviceAssociation(&v9[v17], DeviceExtension, a4);
      v10 = v18;
      if ( v18 < 0 )
      {
        LODWORD(v20) = v18;
        WPP_RECORDER_SF_qD(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0xBu,
          (__int64)&WPP_05a11f23d0943a3100389a2588cd23f4_Traceguids,
          DeviceExtension,
          v20);
        v10 = 0;
      }
    }
  }
LABEL_19:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706341u);
  return (unsigned int)v10;
}
