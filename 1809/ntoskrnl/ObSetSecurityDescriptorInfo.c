/*
 * XREFs of ObSetSecurityDescriptorInfo @ 0x1405C9A30
 * Callers:
 *     SeDefaultObjectMethod @ 0x1405CAC30 (SeDefaultObjectMethod.c)
 *     WmipSecurityMethod @ 0x1406ABD20 (WmipSecurityMethod.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
 *     ObAdjustSecurityQuota @ 0x1405CA9A4 (ObAdjustSecurityQuota.c)
 *     SeComputeQuotaInformationSize @ 0x1405CABB0 (SeComputeQuotaInformationSize.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 *     SeSetSecurityDescriptorInfo @ 0x1405CB200 (SeSetSecurityDescriptorInfo.c)
 */

__int64 __fastcall ObSetSecurityDescriptorInfo(
        _QWORD *Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        __int64 a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // esi
  void *v11; // r14
  NTSTATUS v12; // ebx
  char v13; // al
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+30h] [rbp-10h] BYREF
  __int64 v16; // [rsp+38h] [rbp-8h]
  unsigned int v17; // [rsp+70h] [rbp+30h] BYREF

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  v16 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object - 4), 0LL);
  v11 = (void *)(*(Object - 1) & 0xFFFFFFFFFFFFFFF0uLL);
  ObjectsSecurityDescriptor = v11;
  v12 = SeSetSecurityDescriptorInfo(
          Object,
          SecurityInformation,
          ModificationDescriptor,
          &ObjectsSecurityDescriptor,
          PoolType,
          GenericMapping);
  if ( v12 < 0 )
  {
    ObjectsSecurityDescriptor = 0LL;
  }
  else
  {
    v12 = ObLogSecurityDescriptor(ObjectsSecurityDescriptor);
    if ( v12 >= 0 )
    {
      v12 = SeComputeQuotaInformationSize(ObjectsSecurityDescriptor, &v17);
      if ( v12 >= 0 )
      {
        v12 = ObAdjustSecurityQuota(Object, v17);
        if ( v12 >= 0 )
        {
          v13 = _InterlockedExchange64(Object - 1, (v16 | 0xF) & -(__int64)(v16 != 0));
          v16 = 0LL;
          if ( v11 )
            v7 = (v13 & 0xF) + 1;
        }
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)(Object - 4), 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v16 )
    ObDereferenceSecurityDescriptor(v16, 16LL);
  if ( v11 && v7 )
    ObDereferenceSecurityDescriptor(v11, v7);
  if ( ObjectsSecurityDescriptor )
    ExFreePoolWithTag(ObjectsSecurityDescriptor, 0);
  return (unsigned int)v12;
}
