/*
 * XREFs of _CmGetDeviceSiblings @ 0x1408FF190
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpMultiSzGetLen @ 0x14059E928 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceParent @ 0x1406EA8C4 (_CmGetDeviceParent.c)
 *     _CmGetDeviceChildren @ 0x1408FE818 (_CmGetDeviceChildren.c)
 *     _PnpMultiSzDeleteString @ 0x1409016D0 (_PnpMultiSzDeleteString.c)
 */

__int64 __fastcall CmGetDeviceSiblings(__int64 a1, WCHAR *a2, _WORD *a3, unsigned int *a4)
{
  void *v5; // r14
  unsigned int v8; // ebp
  int DeviceParent; // ebx
  wchar_t *PoolWithTag; // rdi
  int DeviceChildren; // eax
  unsigned int Len; // eax
  unsigned int v14[4]; // [rsp+20h] [rbp-1F8h] BYREF
  WCHAR v15[200]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = a3;
  if ( !a3 )
  {
    *a4 = 0;
LABEL_5:
    v8 = 0;
    goto LABEL_7;
  }
  if ( !*a4 )
  {
    v5 = 0LL;
    goto LABEL_5;
  }
  *a3 = 0;
  v8 = *a4;
LABEL_7:
  *a4 = 0;
  v14[0] = 200;
  DeviceParent = CmGetDeviceParent(a1, a2, v15, v14);
  if ( DeviceParent >= 0 )
  {
    PoolWithTag = 0LL;
    v14[0] = 0;
    while ( 1 )
    {
      DeviceChildren = CmGetDeviceChildren(a1, v15, PoolWithTag, v14);
      DeviceParent = DeviceChildren;
      if ( !DeviceChildren )
        break;
      if ( DeviceChildren != -1073741789 )
        goto LABEL_15;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v14[0], 0x52504E50u);
      if ( !PoolWithTag )
      {
        DeviceParent = -1073741801;
LABEL_15:
        if ( DeviceParent < 0 )
          goto LABEL_25;
        break;
      }
    }
    if ( !PoolWithTag )
      return (unsigned int)-1073741275;
    if ( (unsigned __int8)PnpMultiSzDeleteString(PoolWithTag, a2) )
    {
      Len = PnpMultiSzGetLen(PoolWithTag);
      if ( Len > 1 )
      {
        *a4 = Len;
        if ( v8 >= Len )
          memmove(v5, PoolWithTag, 2LL * Len);
        else
          DeviceParent = -1073741789;
      }
      else
      {
        DeviceParent = -1073741275;
      }
    }
    else
    {
      DeviceParent = -1073741595;
    }
LABEL_25:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)DeviceParent;
}
