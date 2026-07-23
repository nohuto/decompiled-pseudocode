/*
 * XREFs of _CmDeleteDevicePanelWorker @ 0x1408FCE20
 * Callers:
 *     _CmDeleteDevicePanel @ 0x1408FC898 (_CmDeleteDevicePanel.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmRaiseDeleteEvent @ 0x1408FC154 (_CmRaiseDeleteEvent.c)
 *     _CmDeleteDevicePanelRegKey @ 0x1408FC9C4 (_CmDeleteDevicePanelRegKey.c)
 *     _CmGetDevicePanelMappedPropertyKeys @ 0x1408FD100 (_CmGetDevicePanelMappedPropertyKeys.c)
 *     _CmSetDevicePanelMappedProperty @ 0x1408FDA0C (_CmSetDevicePanelMappedProperty.c)
 */

__int64 __fastcall CmDeleteDevicePanelWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  int *v6; // r14
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  PVOID PoolWithTag; // rdi
  unsigned int v14; // ebp
  int DevicePanelMappedPropertyKeys; // eax
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
    v20 = 352;
    v6 = (int *)&v20;
    v7 = 0;
    while ( 1 )
    {
      v8 = CmDeleteDevicePanelRegKey(a1, a2, *v6);
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
      DevicePanelMappedPropertyKeys = CmGetDevicePanelMappedPropertyKeys(
                                        v10,
                                        v9,
                                        v11,
                                        v12,
                                        (__int64)PoolWithTag,
                                        v14,
                                        (__int64)&v20);
      v14 = v20;
      if ( DevicePanelMappedPropertyKeys != -1073741789 )
        goto LABEL_18;
      if ( 20 * (unsigned __int64)v20 > 0xFFFFFFFF )
      {
        DevicePanelMappedPropertyKeys = -1073741811;
        goto LABEL_20;
      }
      v16 = 20 * v20;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v16, 0x52504E50u);
    }
    while ( PoolWithTag );
    DevicePanelMappedPropertyKeys = -1073741801;
LABEL_18:
    if ( DevicePanelMappedPropertyKeys && DevicePanelMappedPropertyKeys != -1073741275 )
    {
LABEL_20:
      v3 = DevicePanelMappedPropertyKeys;
      goto LABEL_36;
    }
    v17 = 0LL;
    if ( v14 )
    {
      while ( 1 )
      {
        v18 = CmSetDevicePanelMappedProperty(5 * (int)v17, v9, v11, 0, (__int64)PoolWithTag + 20 * v17);
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
      DevicePanelMappedPropertyKeys = CmDeleteDevicePanelRegKey(a1, a2, 96);
      if ( DevicePanelMappedPropertyKeys
        && DevicePanelMappedPropertyKeys != -1073741772
        && DevicePanelMappedPropertyKeys != -1073741811 )
      {
        goto LABEL_20;
      }
      CmRaiseDeleteEvent(a1, a2, 6u);
    }
LABEL_36:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v3;
}
