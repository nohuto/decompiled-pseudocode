/*
 * XREFs of _CmDeleteDevicePanelWorker @ 0x14093984C
 * Callers:
 *     _CmDeleteDevicePanel @ 0x1409392C4 (_CmDeleteDevicePanel.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmRaiseDeleteEvent @ 0x140938B48 (_CmRaiseDeleteEvent.c)
 *     _CmDeleteDevicePanelRegKey @ 0x1409393E8 (_CmDeleteDevicePanelRegKey.c)
 *     _CmGetDevicePanelMappedPropertyKeys @ 0x140939B44 (_CmGetDevicePanelMappedPropertyKeys.c)
 *     _CmSetDevicePanelMappedProperty @ 0x14093A410 (_CmSetDevicePanelMappedProperty.c)
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
  int i; // eax
  int v15; // edx
  int v16; // r8d
  unsigned int v17; // r14d
  unsigned __int64 v18; // rbp
  int v19; // ecx
  int v20; // r9d
  __int64 v21; // rbp
  int v22; // eax
  unsigned int v24; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v24 = 352;
    v6 = (int *)&v24;
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
    v24 = 0;
    for ( i = CmGetDevicePanelMappedPropertyKeys(v10, v9, v11, v12, 0LL, 0, (__int64)&v24);
          i == -1073741789;
          i = CmGetDevicePanelMappedPropertyKeys(v19, v15, v16, v20, (__int64)PoolWithTag, v17, (__int64)&v24) )
    {
      v17 = v24;
      v18 = 20LL * v24;
      if ( v18 > 0xFFFFFFFF )
      {
        i = -1073741811;
        goto LABEL_21;
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v18, 0x52504E50u);
      if ( !PoolWithTag )
      {
        i = -1073741801;
        goto LABEL_19;
      }
    }
    v17 = v24;
LABEL_19:
    if ( i && i != -1073741275 )
    {
LABEL_21:
      v3 = i;
      goto LABEL_38;
    }
    v21 = 0LL;
    if ( v17 )
    {
      while ( 1 )
      {
        v22 = CmSetDevicePanelMappedProperty(5 * (int)v21, v15, v16, 0, (__int64)PoolWithTag + 20 * v21);
        if ( v22 )
        {
          if ( v22 != -1073741275 && v22 != -1073741790 && v22 != -1073741802 && v22 != -1073741637 )
            break;
        }
        v21 = (unsigned int)(v21 + 1);
        if ( (unsigned int)v21 >= v17 )
          goto LABEL_33;
      }
      v3 = v22;
    }
LABEL_33:
    if ( v3 >= 0 )
    {
      i = CmDeleteDevicePanelRegKey(a1, a2, 96);
      if ( i && i != -1073741772 && i != -1073741811 )
        goto LABEL_21;
      CmRaiseDeleteEvent(a1, a2, 6u);
    }
LABEL_38:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v3;
}
