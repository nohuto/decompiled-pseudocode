/*
 * XREFs of _CmGetDeviceMappedPropertyFromRegProp @ 0x14059CFC8
 * Callers:
 *     _CmGetDeviceMappedProperty @ 0x14059C184 (_CmGetDeviceMappedProperty.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1408FED80 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     _PnpMultiSzGetLen @ 0x14059E928 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _PnpParseIndirectResourceString @ 0x1406969B4 (_PnpParseIndirectResourceString.c)
 *     _PnpParseIndirectInfString @ 0x1406B8FD8 (_PnpParseIndirectInfString.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        GUID *a6,
        unsigned int a7,
        int *a8,
        int a9)
{
  GUID *v10; // r12
  unsigned int v11; // r13d
  int v12; // r11d
  DEVPROPKEY **v13; // rdx
  unsigned int i; // r8d
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // rsi
  __int64 v17; // rcx
  int v18; // r15d
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  GUID *PoolWithTag; // r13
  NTSTATUS DeviceRegProp; // ebx
  int v24; // eax
  int v25; // eax
  unsigned int Len; // r9d
  int v28; // r15d
  int v29; // esi
  SIZE_T v30; // rax
  GUID *v31; // rsi
  int v32; // r9d
  int v33; // r9d
  int v34; // eax
  NTSTATUS v35; // eax
  int v36; // [rsp+40h] [rbp-B9h] BYREF
  int v37; // [rsp+44h] [rbp-B5h] BYREF
  __int64 v38; // [rsp+48h] [rbp-B1h]
  int v39; // [rsp+50h] [rbp-A9h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A1h]
  __int64 v41; // [rsp+60h] [rbp-99h]
  int v42; // [rsp+68h] [rbp-91h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-89h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-81h] BYREF
  GUID Guid; // [rsp+88h] [rbp-71h] BYREF
  WCHAR SourceString[40]; // [rsp+A0h] [rbp-59h] BYREF

  v10 = a6;
  v41 = a3;
  v40 = a2;
  v38 = a1;
  v37 = 0;
  v42 = 0;
  v39 = 0;
  Handle = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  *a8 = 0;
  if ( a6 )
  {
    v11 = a7;
    v10 = (GUID *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v11 = 0;
  }
  v12 = *(_DWORD *)(a4 + 16);
  v13 = &CmDeviceRegPropMap;
  for ( i = 0; i < 0x21; ++i )
  {
    v15 = *v13;
    v16 = v13;
    if ( v12 == (*v13)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v13 += 3;
    v16 = 0LL;
  }
  if ( !v16 )
    return (unsigned int)-1073741802;
  v18 = *((_DWORD *)v16 + 3);
  switch ( v18 )
  {
    case 9:
      goto LABEL_44;
    case 25:
      return (unsigned int)-1073741637;
    case 27:
      v28 = v40;
      v36 = 4;
      DeviceRegProp = CmGetDeviceRegProp(v38, v40, v41, 27, (__int64)&v37, (__int64)&v39, (__int64)&v36, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v37 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 1;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        LOBYTE(v10->Data1) = -(v39 != 0);
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
    case 37:
LABEL_44:
      v32 = *((_DWORD *)v16 + 3);
      v28 = v40;
      v36 = 78;
      DeviceRegProp = CmGetDeviceRegProp(v38, v40, v41, v32, (__int64)&v37, (__int64)SourceString, (__int64)&v36, a9);
      if ( DeviceRegProp < 0 )
        goto LABEL_26;
      if ( v37 != *((_DWORD *)v16 + 4) )
        return (unsigned int)-1073741811;
      *a8 = 16;
      *a5 = *((_DWORD *)v16 + 2);
      if ( v11 >= *a8 )
      {
        SourceString[38] = 0;
        DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, SourceString);
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = RtlGUIDFromString(&DestinationString, &Guid);
          if ( DeviceRegProp >= 0 )
            *v10 = Guid;
        }
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
  }
  v19 = v41;
  v20 = v40;
  v21 = v38;
  *a8 = v11;
  PoolWithTag = 0LL;
  DeviceRegProp = CmGetDeviceRegProp(v21, v20, v19, v18, (__int64)&v37, (__int64)v10, (__int64)a8, a9);
  if ( DeviceRegProp && DeviceRegProp != -1073741789 )
    goto LABEL_19;
  if ( v37 != *((_DWORD *)v16 + 4) )
    return (unsigned int)-1073741811;
  v24 = *((_DWORD *)v16 + 2);
  *a5 = v24;
  if ( v24 == 18 )
  {
    v30 = (unsigned int)*a8;
    v36 = *a8;
    if ( DeviceRegProp )
    {
      PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, v30, 0x52504E50u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      v33 = v18;
      v28 = v40;
      v29 = v38;
      v34 = CmGetDeviceRegProp(v38, v40, v41, v33, (__int64)&v42, (__int64)PoolWithTag, (__int64)&v36, a9);
      if ( v34 < 0 )
      {
        DeviceRegProp = v34;
        ExFreePoolWithTag(PoolWithTag, 0);
LABEL_27:
        if ( DeviceRegProp == -1073741810 )
        {
          v35 = CmOpenDeviceRegKey(v29, v28, 16, 0, 1, 0, (__int64)&Handle, 0LL);
          DeviceRegProp = v35;
          if ( !v35 )
          {
            ZwClose(Handle);
            return (unsigned int)-1073741275;
          }
          if ( v35 != -1073741810 && v35 != -1073741632 )
            return (unsigned int)-1073741823;
        }
        return (unsigned int)DeviceRegProp;
      }
      LODWORD(v30) = v36;
      v31 = PoolWithTag;
    }
    else
    {
      v31 = v10;
    }
    if ( v31
      && (unsigned int)v30 >= 2
      && ((unsigned __int8)PnpParseIndirectInfString(v31) || (unsigned __int8)PnpParseIndirectResourceString(v31)) )
    {
      *a5 = 25;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
LABEL_19:
  if ( DeviceRegProp )
  {
    v28 = v40;
LABEL_26:
    v29 = v38;
    goto LABEL_27;
  }
  v25 = *a5;
  if ( *a5 == 8210 )
  {
    Len = PnpMultiSzGetLen(v10);
    if ( 2 * (unsigned __int64)Len > (unsigned int)*a8 )
    {
      DeviceRegProp = -1073741595;
      *a8 = 0;
      return (unsigned int)DeviceRegProp;
    }
    *a8 = 2 * Len;
    v25 = *a5;
  }
  if ( v25 == 18 && !*a8 )
  {
    *a8 = 0;
    *a5 = 0;
    return (unsigned int)-1073741275;
  }
  return (unsigned int)DeviceRegProp;
}
