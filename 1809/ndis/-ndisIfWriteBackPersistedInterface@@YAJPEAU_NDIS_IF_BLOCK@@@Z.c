/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00BA990
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001589C (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C00E35B8 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     WPP_SF__guid_d @ 0x1C0041CF0 (WPP_SF__guid_d.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C00C8908 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  unsigned int v2; // r15d
  NTSTATUS v3; // edi
  _NDIS_MEDIUM MediaType; // edx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // edx
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  ULONG DataSize; // edx
  __int64 v11; // rcx
  const wchar_t *v12; // rax
  ULONG Length; // edx
  __int64 v14; // rcx
  const wchar_t *v15; // rax
  unsigned __int16 v17; // cx
  HANDLE v18; // rbx
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-28h] BYREF
  __int32 Data; // [rsp+78h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp+28h] BYREF

  if ( *((_BYTE *)P + 96) )
    return 0LL;
  v2 = 0;
  KeyHandle = 0LL;
  v3 = ndisIfOpenInterfaceRegistryKey(&a1->InterfaceGuid, &KeyHandle, 2LL, 3LL);
  if ( v3 < 0 )
  {
    v18 = KeyHandle;
  }
  else
  {
    MediaType = a1->MediaType;
    *(_QWORD *)&ValueName.Length = 0LL;
    v5 = 0x7FFFLL;
    ValueName.Buffer = 0LL;
    v6 = L"MediaType";
    while ( *v6 )
    {
      ++v6;
      if ( !--v5 )
      {
        v18 = KeyHandle;
        v3 = -1073741811;
        goto LABEL_34;
      }
    }
    v18 = KeyHandle;
    ValueName.Buffer = L"MediaType";
    Data = MediaType;
    ValueName.Length = 2 * (0x7FFF - v5);
    ValueName.MaximumLength = ValueName.Length + 2;
    v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    if ( v3 >= 0 )
    {
      PhysicalMediumType = a1->PhysicalMediumType;
      v8 = 0x7FFFLL;
      *(_QWORD *)&ValueName.Length = 0LL;
      ValueName.Buffer = 0LL;
      v9 = L"PhysicalMediaType";
      while ( *v9 )
      {
        ++v9;
        if ( !--v8 )
        {
          v3 = -1073741811;
          goto LABEL_32;
        }
      }
      ValueName.Buffer = L"PhysicalMediaType";
      Data = PhysicalMediumType;
      ValueName.Length = 2 * (0x7FFF - v8);
      ValueName.MaximumLength = ValueName.Length + 2;
      v3 = ZwSetValueKey(v18, &ValueName, 0, 4u, &Data, 4u);
      if ( v3 >= 0 )
      {
        DataSize = a1->ifPhysAddress.Length;
        v11 = 0x7FFFLL;
        *(_QWORD *)&ValueName.Length = 0LL;
        ValueName.Buffer = 0LL;
        v12 = L"CurrentAddress";
        while ( *v12 )
        {
          ++v12;
          if ( !--v11 )
          {
            v3 = -1073741811;
            goto LABEL_29;
          }
        }
        ValueName.Buffer = L"CurrentAddress";
        ValueName.Length = 2 * (0x7FFF - v11);
        ValueName.MaximumLength = ValueName.Length + 2;
        v3 = ZwSetValueKey(v18, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize);
        if ( v3 >= 0 )
        {
          Length = a1->PermanentPhysAddress.Length;
          v14 = 0x7FFFLL;
          *(_QWORD *)&ValueName.Length = 0LL;
          ValueName.Buffer = 0LL;
          v15 = L"PermanentAddress";
          while ( *v15 )
          {
            ++v15;
            if ( !--v14 )
            {
              v3 = -1073741811;
              goto LABEL_27;
            }
          }
          ValueName.Buffer = L"PermanentAddress";
          ValueName.Length = 2 * (0x7FFF - v14);
          ValueName.MaximumLength = ValueName.Length + 2;
          v3 = ZwSetValueKey(v18, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, Length);
          if ( v3 >= 0 )
            goto LABEL_23;
LABEL_27:
          if ( (unsigned __int8)byte_1C00A0265 >= 2u )
          {
            v17 = 174;
            goto LABEL_31;
          }
          goto LABEL_37;
        }
LABEL_29:
        if ( (unsigned __int8)byte_1C00A0265 < 2u )
          goto LABEL_37;
        v17 = 173;
        goto LABEL_31;
      }
LABEL_32:
      if ( (unsigned __int8)byte_1C00A0265 < 2u )
        goto LABEL_37;
      v17 = 172;
      goto LABEL_31;
    }
LABEL_34:
    if ( (unsigned __int8)byte_1C00A0265 >= 2u )
    {
      v17 = 171;
LABEL_31:
      WPP_SF__guid_d(v17, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)&a1->InterfaceGuid, v3);
    }
  }
LABEL_37:
  v2 = v3;
LABEL_23:
  if ( v18 )
    ZwClose(v18);
  return v2;
}
