/*
 * XREFs of ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0100580
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038CF4 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisIfUpdateCurrentMacAddressAndNotify @ 0x1C0115010 (ndisIfUpdateCurrentMacAddressAndNotify.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_d @ 0x1C0067238 (WPP_RECORDER_SF__guid_d.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfWriteBackPersistedInterface(struct _NDIS_IF_BLOCK *a1)
{
  _GUID *p_InterfaceGuid; // r15
  NTSTATUS v3; // edi
  _NDIS_MEDIUM MediaType; // edx
  __int64 v5; // rcx
  const wchar_t *v6; // rax
  __int16 v7; // ax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // edx
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  __int16 v11; // ax
  ULONG DataSize; // edx
  __int64 v13; // rcx
  const char *v14; // rax
  __int16 v15; // ax
  ULONG Length; // edx
  __int64 v17; // rcx
  const char *v18; // rax
  __int16 v19; // si
  unsigned __int16 v21; // r9
  _UNICODE_STRING ValueName; // [rsp+40h] [rbp-10h] BYREF
  __int32 Data; // [rsp+88h] [rbp+38h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+40h] BYREF

  if ( *((_BYTE *)P + 96) )
    return 0LL;
  p_InterfaceGuid = &a1->InterfaceGuid;
  KeyHandle = 0LL;
  v3 = ndisIfOpenInterfaceRegistryKey(&a1->InterfaceGuid, &KeyHandle, 2LL, 3LL);
  if ( v3 >= 0 )
  {
    MediaType = a1->MediaType;
    *(_QWORD *)&ValueName.Length = 0LL;
    v5 = 0x7FFFLL;
    ValueName.Buffer = 0LL;
    v6 = L"MediaType";
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v3 = v5 == 0 ? 0xC000000D : 0;
    if ( v5 )
      v7 = 0x7FFF - v5;
    else
      v7 = 0;
    if ( v5 )
    {
      ValueName.Buffer = L"MediaType";
      ValueName.Length = 2 * v7;
      ValueName.MaximumLength = 2 * v7 + 2;
      Data = MediaType;
      v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    }
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_36;
      v21 = 172;
    }
    else
    {
      PhysicalMediumType = a1->PhysicalMediumType;
      v9 = 0x7FFFLL;
      *(_QWORD *)&ValueName.Length = 0LL;
      ValueName.Buffer = 0LL;
      v10 = L"PhysicalMediaType";
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v9;
      }
      while ( v9 );
      v3 = v9 == 0 ? 0xC000000D : 0;
      if ( v9 )
        v11 = 0x7FFF - v9;
      else
        v11 = 0;
      if ( v9 )
      {
        ValueName.Buffer = L"PhysicalMediaType";
        ValueName.Length = 2 * v11;
        ValueName.MaximumLength = 2 * v11 + 2;
        Data = PhysicalMediumType;
        v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
      }
      if ( v3 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_36;
        v21 = 173;
      }
      else
      {
        DataSize = a1->ifPhysAddress.Length;
        v13 = 0x7FFFLL;
        *(_QWORD *)&ValueName.Length = 0LL;
        ValueName.Buffer = 0LL;
        v14 = L"CurrentAddress";
        do
        {
          if ( !*(_WORD *)v14 )
            break;
          v14 += 2;
          --v13;
        }
        while ( v13 );
        v3 = v13 == 0 ? 0xC000000D : 0;
        if ( v13 )
          v15 = 0x7FFF - v13;
        else
          v15 = 0;
        if ( v13 )
        {
          ValueName.Buffer = (wchar_t *)L"CurrentAddress";
          ValueName.Length = 2 * v15;
          ValueName.MaximumLength = 2 * v15 + 2;
          v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, a1->ifPhysAddress.Address, DataSize);
        }
        if ( v3 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_36;
          v21 = 174;
        }
        else
        {
          Length = a1->PermanentPhysAddress.Length;
          v17 = 0x7FFFLL;
          *(_QWORD *)&ValueName.Length = 0LL;
          ValueName.Buffer = 0LL;
          v18 = L"PermanentAddress";
          do
          {
            if ( !*(_WORD *)v18 )
              break;
            v18 += 2;
            --v17;
          }
          while ( v17 );
          v3 = v17 == 0 ? 0xC000000D : 0;
          if ( v17 )
            v19 = 0x7FFF - v17;
          else
            v19 = 0;
          if ( v17 )
          {
            ValueName.Buffer = (wchar_t *)L"PermanentAddress";
            ValueName.Length = 2 * v19;
            ValueName.MaximumLength = 2 * v19 + 2;
            v3 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, a1->PermanentPhysAddress.Address, Length);
          }
          if ( v3 >= 0 )
          {
            v3 = 0;
            goto LABEL_36;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_36;
          v21 = 175;
        }
      }
    }
    WPP_RECORDER_SF__guid_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0x16u,
      v21,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (__int64)p_InterfaceGuid,
      v3);
  }
LABEL_36:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
