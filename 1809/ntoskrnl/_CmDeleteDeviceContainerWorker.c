/*
 * XREFs of _CmDeleteDeviceContainerWorker @ 0x1408F9F78
 * Callers:
 *     _CmDeleteDeviceContainer @ 0x1408F9AA4 (_CmDeleteDeviceContainer.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmSetDeviceContainerMappedProperty @ 0x1406D7284 (_CmSetDeviceContainerMappedProperty.c)
 *     _CmDeleteDeviceContainerRegKey @ 0x1408F9BD0 (_CmDeleteDeviceContainerRegKey.c)
 *     _CmGetDeviceContainerMappedPropertyKeys @ 0x1408FA5EC (_CmGetDeviceContainerMappedPropertyKeys.c)
 *     _CmRaiseDeleteEvent @ 0x1408FC154 (_CmRaiseDeleteEvent.c)
 */

__int64 __fastcall CmDeleteDeviceContainerWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  int *v6; // r14
  int v7; // edi
  int v8; // eax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // r9d
  PVOID PoolWithTag; // rdi
  unsigned int v14; // ebp
  int DeviceContainerMappedPropertyKeys; // eax
  unsigned int v16; // r14d
  __int64 v17; // r14
  int v18; // eax
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v20 = 336;
    v6 = (int *)&v20;
    v7 = 0;
    while ( 1 )
    {
      v8 = CmDeleteDeviceContainerRegKey(a1, a2, *v6);
      if ( v8 )
      {
        if ( v8 != -1073741772 && v8 != -1073741811 && v8 != -1073741637 )
          break;
      }
      ++v7;
      ++v6;
      if ( v7 )
        goto LABEL_11;
    }
    v3 = v8;
    if ( v8 < 0 )
      return (unsigned int)v3;
LABEL_11:
    PoolWithTag = 0LL;
    v14 = 0;
    v20 = 0;
    do
    {
      DeviceContainerMappedPropertyKeys = CmGetDeviceContainerMappedPropertyKeys(
                                            v10,
                                            v9,
                                            v11,
                                            v12,
                                            (__int64)PoolWithTag,
                                            v14,
                                            (__int64)&v20);
      v14 = v20;
      if ( DeviceContainerMappedPropertyKeys != -1073741789 )
        goto LABEL_18;
      if ( 20 * (unsigned __int64)v20 > 0xFFFFFFFF )
      {
        DeviceContainerMappedPropertyKeys = -1073741811;
        goto LABEL_20;
      }
      v16 = 20 * v20;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x52504E50u);
    }
    while ( PoolWithTag );
    DeviceContainerMappedPropertyKeys = -1073741801;
LABEL_18:
    if ( DeviceContainerMappedPropertyKeys && DeviceContainerMappedPropertyKeys != -1073741275 )
    {
LABEL_20:
      v3 = DeviceContainerMappedPropertyKeys;
      goto LABEL_36;
    }
    v17 = 0LL;
    if ( v14 )
    {
      while ( 1 )
      {
        v18 = CmSetDeviceContainerMappedProperty(5 * v17, v9, v11, 0LL, (__int64)PoolWithTag + 20 * v17);
        if ( v18 )
        {
          if ( v18 != -1073741275 && v18 != -1073741790 && v18 != -1073741802 && v18 != -1073741637 )
            break;
        }
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v14 )
          goto LABEL_31;
      }
      v3 = v18;
    }
LABEL_31:
    if ( v3 >= 0 )
    {
      DeviceContainerMappedPropertyKeys = CmDeleteDeviceContainerRegKey(a1, a2, 80);
      if ( DeviceContainerMappedPropertyKeys
        && DeviceContainerMappedPropertyKeys != -1073741772
        && DeviceContainerMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_20;
      }
      CmRaiseDeleteEvent(a1, a2, 5LL);
    }
LABEL_36:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v3;
}
