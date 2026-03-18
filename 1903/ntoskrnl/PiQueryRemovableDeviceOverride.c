/*
 * XREFs of PiQueryRemovableDeviceOverride @ 0x1407127B4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14070502C (PiProcessNewDeviceNode.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140702314 (PnpDeviceObjectToDeviceInstance.c)
 *     PipFindDeviceOverrideEntry @ 0x140712AB0 (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x140714090 (PnpGetDeviceLocationStrings.c)
 *     PnpOpenFirstMatchingSubKey @ 0x140862300 (PnpOpenFirstMatchingSubKey.c)
 */

__int64 __fastcall PiQueryRemovableDeviceOverride(__int64 a1, void *a2, void *a3, void *a4)
{
  int v4; // r12d
  void *v5; // r14
  bool *v6; // r13
  char v10; // al
  int DeviceRegProp; // ebx
  char v12; // cl
  int v13; // edx
  char v14; // r8
  int DeviceOverrideEntry; // eax
  __int64 v16; // rcx
  int v17; // esi
  int *v18; // r12
  unsigned int v19; // eax
  unsigned int i; // r15d
  PVOID PoolWithTag; // rax
  __int64 v22; // rax
  char v23; // cl
  PVOID v25; // rax
  unsigned int NumberOfBytes; // [rsp+40h] [rbp-C0h] BYREF
  SIZE_T NumberOfBytes_4; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P[5]; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v33[2]; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+D8h] [rbp-28h] BYREF
  int v37; // [rsp+DCh] [rbp-24h]
  int v38; // [rsp+E0h] [rbp-20h]
  int v39; // [rsp+E4h] [rbp-1Ch]

  P[0] = a4;
  v4 = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  v5 = 0LL;
  ValueName.Buffer = 0LL;
  v6 = (bool *)a4;
  if ( !PnpDeviceOverrideHashList )
    return (unsigned int)-1073741772;
  memset(&P[1], 0, 0x20uLL);
  v10 = *(_BYTE *)(a1 + 680);
  DeviceRegProp = -1073741772;
  v12 = v10;
  v13 = -1073741772;
  if ( (v10 & 1) == 0 )
  {
    LODWORD(P[1]) = 2490404;
    v14 = v10;
    P[2] = L"ChildLocationPaths";
    if ( a2 )
    {
      DeviceOverrideEntry = PipFindDeviceOverrideEntry(a2);
      v12 = *(_BYTE *)(a1 + 680);
      v13 = DeviceOverrideEntry;
      v14 = v12;
    }
    v10 = v14;
    if ( v13 >= 0 )
      goto LABEL_41;
    if ( a3 )
    {
      v13 = PipFindDeviceOverrideEntry(a3);
      v10 = *(_BYTE *)(a1 + 680);
      v12 = v10;
    }
    if ( v13 >= 0 )
    {
LABEL_41:
      ZwClose(P[3]);
      *(_BYTE *)(a1 + 680) |= 4u;
      v10 = *(_BYTE *)(a1 + 680);
      v12 = v10;
    }
  }
  if ( (v10 & 1) == 0 || (v10 & 2) != 0 )
  {
    LODWORD(P[1]) = 1835034;
    P[2] = L"LocationPaths";
    if ( a2 )
    {
      DeviceRegProp = PipFindDeviceOverrideEntry(a2);
      v10 = *(_BYTE *)(a1 + 680);
      v12 = v10;
    }
    if ( DeviceRegProp >= 0 )
      goto LABEL_44;
    if ( a3 )
    {
      DeviceRegProp = PipFindDeviceOverrideEntry(a3);
      v10 = *(_BYTE *)(a1 + 680);
      v12 = v10;
    }
    if ( DeviceRegProp >= 0 )
LABEL_44:
      v10 = v12 | 2;
  }
  *(_BYTE *)(a1 + 680) = v10 | 1;
  if ( DeviceRegProp < 0 )
  {
    v16 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v16 + 680) & 5) != 1 )
    {
      LODWORD(P[1]) = 2490404;
      P[2] = L"ChildLocationPaths";
      DeviceRegProp = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(v16 + 32), (__int64)&Handle, 131097);
      if ( DeviceRegProp < 0 )
        return (unsigned int)DeviceRegProp;
      v17 = 256;
      v33[0] = 2;
      NumberOfBytes = 256;
      v18 = v33;
      v19 = 256;
      v33[1] = 3;
      for ( i = 0; i < 2; ++i )
      {
        DeviceRegProp = 0;
        if ( !v5 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x6E697050u);
          v17 = NumberOfBytes;
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
                            *v18,
                            (__int64)&v30,
                            (__int64)v5,
                            (__int64)&NumberOfBytes,
                            0);
          if ( DeviceRegProp == -1073741789 )
          {
            ExFreePoolWithTag(v5, 0);
            v25 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x6E697050u);
            v17 = NumberOfBytes;
            v5 = v25;
            if ( !v25 )
              DeviceRegProp = -1073741670;
          }
          else if ( DeviceRegProp >= 0 )
          {
            if ( v30 == 7 )
              DeviceRegProp = PipFindDeviceOverrideEntry(v5);
            else
              DeviceRegProp = -1073741823;
          }
        }
        NumberOfBytes = v17;
        if ( DeviceRegProp >= 0 )
          break;
        ++v18;
        v19 = v17;
      }
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      ZwClose(Handle);
      v22 = *(_QWORD *)(a1 + 16);
      v23 = *(_BYTE *)(v22 + 680);
      if ( (v23 & 1) == 0 )
      {
        if ( DeviceRegProp >= 0 )
        {
          *(_BYTE *)(v22 + 680) = v23 | 4;
          v22 = *(_QWORD *)(a1 + 16);
        }
        *(_BYTE *)(v22 + 680) |= 1u;
      }
      v6 = (bool *)P[0];
      v4 = 0;
    }
    if ( DeviceRegProp < 0 )
      return (unsigned int)DeviceRegProp;
  }
  KeyHandle = 0LL;
  if ( LODWORD(P[4]) != 1 )
    goto LABEL_52;
  ObjectAttributes.RootDirectory = P[3];
  *(_DWORD *)&ValueName.Length = 262146;
  ObjectAttributes.ObjectName = &ValueName;
  ValueName.Buffer = (wchar_t *)L"*";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( DeviceRegProp < 0 )
  {
LABEL_52:
    DeviceRegProp = PnpGetDeviceLocationStrings(a1, P, &NumberOfBytes_4);
    if ( DeviceRegProp < 0
      || (DeviceRegProp = PnpOpenFirstMatchingSubKey((PCWSTR)P[0], &KeyHandle),
          ExFreePoolWithTag(P[0], 0),
          DeviceRegProp < 0) )
    {
      if ( LODWORD(P[4]) > 1 )
      {
        ObjectAttributes.RootDirectory = P[3];
        *(_DWORD *)&ValueName.Length = 262146;
        ObjectAttributes.ObjectName = &ValueName;
        ValueName.Buffer = (wchar_t *)L"*";
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        KeyHandle = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      }
    }
  }
  ZwClose(P[3]);
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
      if ( v37 == 4 && v38 == 4 )
        v4 = v39;
      else
        DeviceRegProp = -1073741823;
    }
    ZwClose(KeyHandle);
    *v6 = v4 != 0;
  }
  return (unsigned int)DeviceRegProp;
}
