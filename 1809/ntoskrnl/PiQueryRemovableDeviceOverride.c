/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x140701018
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     PipFindDeviceOverrideEntry @ 0x1406DA434 (PipFindDeviceOverrideEntry.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1406EC740 (PnpDeviceObjectToDeviceInstance.c)
 *     PnpGetDeviceLocationStrings @ 0x1406F9DD0 (PnpGetDeviceLocationStrings.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140829114 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, _WORD *a2, _WORD *a3, void *a4)
{
  int v4; // r12d
  _WORD *v5; // r14
  _BYTE *v6; // r13
  char v10; // cl
  const wchar_t *v11; // r9
  int DeviceRegProp; // ebx
  __int64 v13; // rdx
  int DeviceOverrideEntry; // eax
  char v15; // r8
  __int64 v16; // rcx
  int *v17; // r12
  int v18; // esi
  unsigned int v19; // eax
  unsigned int i; // r15d
  _WORD *PoolWithTag; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // cl
  int v26; // eax
  int v27; // eax
  _WORD *v28; // rax
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  int NumberOfBytes_4; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v35[4]; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v37[2]; // [rsp+98h] [rbp-68h] BYREF
  ULONG ResultLength; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  char KeyValueInformation[4]; // [rsp+D8h] [rbp-28h] BYREF
  int v41; // [rsp+DCh] [rbp-24h]
  int v42; // [rsp+E0h] [rbp-20h]
  int v43; // [rsp+E4h] [rbp-1Ch]

  v4 = 0;
  P = a4;
  v5 = 0LL;
  NumberOfBytes_4 = 0;
  v6 = a4;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)-1073741772;
  memset(v35, 0, sizeof(v35));
  v10 = *(_BYTE *)(a1 + 680);
  v11 = L"ChildLocationPaths";
  DeviceRegProp = -1073741772;
  LOBYTE(v13) = v10;
  DeviceOverrideEntry = -1073741772;
  if ( (v10 & 1) == 0 )
  {
    LODWORD(v35[0]) = 2490404;
    v15 = v10;
    v35[1] = L"ChildLocationPaths";
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2, v13, (__int64)v35, L"ChildLocationPaths");
      LOBYTE(v13) = *(_BYTE *)(a1 + 680);
      v15 = v13;
    }
    v10 = v15;
    if ( DeviceOverrideEntry >= 0 )
      goto LABEL_41;
    if ( a3 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a3, v13, (__int64)v35, v11);
      v10 = *(_BYTE *)(a1 + 680);
      LOBYTE(v13) = v10;
    }
    if ( DeviceOverrideEntry >= 0 )
    {
LABEL_41:
      ZwClose((HANDLE)v35[2]);
      *(_BYTE *)(a1 + 680) |= 4u;
      v10 = *(_BYTE *)(a1 + 680);
      LOBYTE(v13) = v10;
    }
  }
  if ( (v10 & 3) != 1 )
  {
    LODWORD(v35[0]) = 1835034;
    v35[1] = L"LocationPaths";
    if ( a2 )
    {
      v26 = PipFindDeviceOverrideEntry(a2, v13, (__int64)v35, v11);
      v10 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v26;
      LOBYTE(v13) = v10;
    }
    if ( DeviceRegProp >= 0 )
      goto LABEL_42;
    if ( a3 )
    {
      v27 = PipFindDeviceOverrideEntry(a3, v13, (__int64)v35, v11);
      v10 = *(_BYTE *)(a1 + 680);
      DeviceRegProp = v27;
      LOBYTE(v13) = v10;
    }
    if ( DeviceRegProp >= 0 )
    {
LABEL_42:
      v10 = v13 | 2;
      *(_BYTE *)(a1 + 680) = v13 | 2;
    }
  }
  *(_BYTE *)(a1 + 680) = v10 | 1;
  if ( DeviceRegProp < 0 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v16 + 680) & 5) != 1 )
    {
      LODWORD(v35[0]) = 2490404;
      v35[1] = L"ChildLocationPaths";
      DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v16 + 32), (__int64)&Handle, 131097);
      if ( DeviceRegProp < 0 )
        return (unsigned int)DeviceRegProp;
      v37[0] = 2;
      v17 = v37;
      v18 = 256;
      v37[1] = 3;
      NumberOfBytes = 256;
      v19 = 256;
      for ( i = 0; i < 2; ++i )
      {
        DeviceRegProp = 0;
        if ( !v5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x6E697050u);
          v18 = NumberOfBytes;
          v5 = PoolWithTag;
          if ( !PoolWithTag )
            DeviceRegProp = -1073741670;
        }
        if ( DeviceRegProp >= 0 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL),
                            (__int64)Handle,
                            *v17,
                            (__int64)&v32,
                            (__int64)v5,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp == -1073741789 )
          {
            ExFreePoolWithTag(v5, 0);
            v28 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E697050u);
            v18 = NumberOfBytes;
            v5 = v28;
            if ( !v28 )
              DeviceRegProp = -1073741670;
          }
          else if ( DeviceRegProp >= 0 )
          {
            if ( v32 == 7 )
              DeviceRegProp = PipFindDeviceOverrideEntry(v5, v22, (__int64)v35);
            else
              DeviceRegProp = -1073741823;
          }
        }
        NumberOfBytes = v18;
        if ( DeviceRegProp >= 0 )
          break;
        ++v17;
        v19 = v18;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      ZwClose(Handle);
      v23 = *(_QWORD *)(a1 + 16);
      v24 = *(_BYTE *)(v23 + 680);
      if ( (v24 & 1) == 0 )
      {
        if ( DeviceRegProp >= 0 )
        {
          *(_BYTE *)(v23 + 680) = v24 | 4;
          v23 = *(_QWORD *)(a1 + 16);
        }
        *(_BYTE *)(v23 + 680) |= 1u;
      }
      v6 = P;
      v4 = NumberOfBytes_4;
    }
    if ( DeviceRegProp < 0 )
      return (unsigned int)DeviceRegProp;
  }
  KeyHandle = 0LL;
  if ( LODWORD(v35[3]) != 1 )
    goto LABEL_51;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = (HANDLE)v35[2];
  *(_DWORD *)&ValueName.Length = 262146;
  ObjectAttributes.ObjectName = &ValueName;
  ValueName.Buffer = (wchar_t *)L"*";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( DeviceRegProp < 0 )
  {
LABEL_51:
    DeviceRegProp = PnpGetDeviceLocationStrings(a1, (char **)&P, &NumberOfBytes_4);
    if ( DeviceRegProp < 0
      || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P, &KeyHandle), ExFreePoolWithTag(P, 0), DeviceRegProp < 0) )
    {
      if ( LODWORD(v35[3]) > 1 )
      {
        KeyHandle = 0LL;
        ObjectAttributes.RootDirectory = (HANDLE)v35[2];
        *(_DWORD *)&ValueName.Length = 262146;
        ObjectAttributes.ObjectName = &ValueName;
        ValueName.Buffer = (wchar_t *)L"*";
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
    }
  }
  ZwClose((HANDLE)v35[2]);
  if ( DeviceRegProp >= 0 )
  {
    *(_DWORD *)&ValueName.Length = 1310738;
    ValueName.Buffer = L"Removable";
    DeviceRegProp = ZwQueryValueKey(
                      KeyHandle,
                      &ValueName,
                      KeyValuePartialInformation,
                      KeyValueInformation,
                      0x14u,
                      &ResultLength);
    if ( DeviceRegProp >= 0 )
    {
      if ( v41 == 4 && v42 == 4 )
        v4 = v43;
      else
        DeviceRegProp = -1073741823;
    }
    ZwClose(KeyHandle);
    *v6 = v4 != 0;
  }
  return (unsigned int)DeviceRegProp;
}
