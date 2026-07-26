/*
 * XREFs of ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0107998
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_qDD @ 0x1C001AD38 (WPP_RECORDER_SF_qDD_ea_1C001AD38.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1C0023C1C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0096260 (-ndisCheckDeviceNeedReinstallWithNewIfType@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAP.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x1C01008A4 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x1C01077DC (-QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z @ 0x1C0107D40 (-QueryValueUlong@KRegKey@@QEAAJPEB_WPEAK@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisCheckNetworkInterfaceDataMismatch(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  char v3; // r14
  bool v4; // zf
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  wchar_t *v7; // rsi
  NTSTATUS ValueUshort; // ebx
  unsigned __int16 IfType; // bx
  unsigned __int16 v10; // r13
  __int64 v11; // r13
  int v12; // r8d
  int v13; // eax
  unsigned __int8 v15; // cl
  __int64 v16; // r14
  unsigned __int8 MajorNdisVersion; // cl
  unsigned __int16 v18; // r9
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  const wchar_t *v21; // rax
  __int16 v22; // cx
  __int64 v23; // [rsp+38h] [rbp-81h]
  char Data[4]; // [rsp+40h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-71h] BYREF
  _UNICODE_STRING ValueName; // [rsp+50h] [rbp-69h] BYREF
  wchar_t *v27; // [rsp+60h] [rbp-59h]
  wchar_t *v28; // [rsp+68h] [rbp-51h]
  wchar_t *v29; // [rsp+70h] [rbp-49h]
  HANDLE DeviceRegKey; // [rsp+78h] [rbp-41h] BYREF
  __int128 v31; // [rsp+80h] [rbp-39h] BYREF
  int v32; // [rsp+90h] [rbp-29h]
  wchar_t v33; // [rsp+94h] [rbp-25h]
  wchar_t v34[8]; // [rsp+98h] [rbp-21h] BYREF
  _OWORD v35[2]; // [rsp+A8h] [rbp-11h] BYREF
  int v36; // [rsp+C8h] [rbp+Fh]
  wchar_t v37; // [rsp+CCh] [rbp+13h]

  Handle = 0LL;
  v3 = 0;
  v4 = (a1->Flags & 0x100) == 0;
  v32 = *(_DWORD *)L"pe";
  v33 = aMediatype_0[10];
  wcscpy(v34, L"*IfType");
  v36 = *(_DWORD *)L"pe";
  v31 = *(_OWORD *)L"*MediaType";
  v37 = aPhysicalmediat_0[18];
  *(_QWORD *)&ValueName.Length = a2;
  v35[0] = *(_OWORD *)L"*PhysicalMediaType";
  v35[1] = *(_OWORD *)L"lMediaType";
  if ( v4 )
  {
    PhysicalDeviceObject = a1->PhysicalDeviceObject;
    v7 = v34;
    v27 = (wchar_t *)&v31;
    v29 = v34;
    v28 = (wchar_t *)v35;
    ValueUshort = IoOpenDeviceRegistryKey(PhysicalDeviceObject, 2u, 0xC2000000, &DeviceRegKey);
    if ( ValueUshort < 0 )
      goto LABEL_11;
    wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      &Handle,
      DeviceRegKey);
  }
  else
  {
    v27 = (wchar_t *)&v31 + 1;
    v7 = &v34[1];
    v29 = &v34[1];
    v28 = (wchar_t *)v35 + 1;
    ValueUshort = ndisIfOpenInterfaceRegistryKey(&a1->InterfaceGuid, &Handle, 1LL, 1LL);
    if ( ValueUshort < 0 )
      goto LABEL_11;
  }
  ValueUshort = KRegKey::QueryValueUshort((KRegKey *)&Handle, v7, (unsigned __int16 *)Data);
  if ( ValueUshort < 0 )
    goto LABEL_11;
  IfType = a2->IfType;
  v10 = *(_WORD *)Data;
  if ( *(_WORD *)Data != IfType )
  {
    if ( a1->MajorNdisVersion >= 6u )
    {
      v16 = *(_QWORD *)&ValueName.Length;
      if ( ndisCheckDeviceNeedReinstallWithNewIfType(
             a1,
             *(const struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES **)&ValueName.Length) != 1 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qDD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0xD2u,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            (char)a1,
            IfType,
            v10);
        goto LABEL_38;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0xD1u,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1,
          IfType,
          v10);
        IfType = *(_WORD *)(v16 + 180);
      }
    }
    ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, v29, IfType);
    if ( ValueUshort < 0 )
      goto LABEL_11;
    v3 = 1;
  }
  ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, v27, (unsigned int *)Data);
  if ( ValueUshort < 0 )
    goto LABEL_11;
  v11 = *(_QWORD *)&ValueName.Length;
  v12 = *(_DWORD *)Data;
  v13 = *(_DWORD *)(*(_QWORD *)&ValueName.Length + 8LL);
  if ( *(_DWORD *)Data != v13 )
  {
    MajorNdisVersion = a1->MajorNdisVersion;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x3Cu )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 211;
LABEL_37:
        LODWORD(v23) = v12;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          v18,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)a1,
          v13,
          v23);
      }
LABEL_38:
      ValueUshort = -1073741823;
      goto LABEL_11;
    }
    if ( v3 )
    {
      ValueUshort = KRegKey::SetValueUlong((KRegKey *)&Handle, v27, v13);
      if ( ValueUshort < 0 )
        goto LABEL_11;
    }
  }
  ValueUshort = KRegKey::QueryValueUlong((KRegKey *)&Handle, v28, (unsigned int *)Data);
  if ( ValueUshort < 0 )
    goto LABEL_11;
  v13 = *(_DWORD *)(v11 + 12);
  v12 = *(_DWORD *)Data;
  if ( *(_DWORD *)Data != v13 )
  {
    v15 = a1->MajorNdisVersion;
    if ( v15 <= 6u && (v15 != 6 || a1->MinorNdisVersion < 0x3Cu) )
    {
      if ( !v3 )
        goto LABEL_11;
      v19 = KRegKey::SetValueUlong((KRegKey *)&Handle, v28, v13);
      ValueUshort = v19;
      if ( v19 < 0 )
        goto LABEL_11;
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 212;
      goto LABEL_37;
    }
    goto LABEL_38;
  }
LABEL_10:
  if ( v3 )
  {
    *(_QWORD *)&ValueName.Length = 0LL;
    ValueName.Buffer = 0LL;
    v20 = 0x7FFFLL;
    v21 = L"NdisUpdatedNetworkInterface";
    do
    {
      if ( !*v21 )
        break;
      ++v21;
      --v20;
    }
    while ( v20 );
    ValueUshort = v20 == 0 ? 0xC000000D : 0;
    if ( v20 )
      v22 = 0x7FFF - v20;
    else
      v22 = 0;
    if ( v20 )
    {
      ValueName.Buffer = L"NdisUpdatedNetworkInterface";
      ValueName.Length = 2 * v22;
      ValueName.MaximumLength = 2 * v22 + 2;
      *(_DWORD *)Data = 1;
      ValueUshort = ZwSetValueKey(Handle, &ValueName, 0, 4u, Data, 4u);
    }
    if ( ValueUshort >= 0 )
      ZwUpdateWnfStateData(&WNF_NDIS_ADAPTER_ARRIVAL, 0LL, 0, 0LL, 0LL, 0, 0);
  }
LABEL_11:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ValueUshort;
}
