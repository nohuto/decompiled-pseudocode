/*
 * XREFs of _CmGetDeviceSiblings @ 0x14093BEB8
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406283AC (_CmGetDeviceMappedPropertyFromComposite.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpMultiSzGetLen @ 0x1406E2920 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceParent @ 0x1406F3110 (_CmGetDeviceParent.c)
 *     _CmGetDeviceChildren @ 0x14093AF7C (_CmGetDeviceChildren.c)
 *     _PnpMultiSzDeleteString @ 0x14093E268 (_PnpMultiSzDeleteString.c)
 */

__int64 __fastcall CmGetDeviceSiblings(__int64 a1, WCHAR *a2, _WORD *a3, unsigned int *a4)
{
  void *v5; // r15
  unsigned int v8; // esi
  int DeviceParent; // ebx
  wchar_t *PoolWithTag; // rdi
  int DeviceChildren; // eax
  unsigned int Len; // eax
  unsigned int v14[4]; // [rsp+20h] [rbp-1F8h] BYREF
  WCHAR v15[200]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = a3;
  if ( !a3 )
    goto LABEL_4;
  if ( !*a4 )
  {
    v5 = 0LL;
LABEL_4:
    v8 = 0;
    goto LABEL_6;
  }
  *a3 = 0;
  v8 = *a4;
LABEL_6:
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
        goto LABEL_14;
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v14[0], 0x52504E50u);
      if ( !PoolWithTag )
      {
        DeviceParent = -1073741801;
LABEL_14:
        if ( DeviceParent < 0 )
          goto LABEL_24;
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
LABEL_24:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)DeviceParent;
}
