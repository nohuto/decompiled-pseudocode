/*
 * XREFs of ShimGetMsftId @ 0x1C0052230
 * Callers:
 *     DeviceIdShimStorageDeviceIdCompletionHook @ 0x1C00521C0 (DeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RaidAddEnclosureIdMapping @ 0x1C003CF80 (RaidAddEnclosureIdMapping.c)
 *     RaidCheckEnclosureIdMapping @ 0x1C003D0A8 (RaidCheckEnclosureIdMapping.c)
 *     RaidSaveEnclosureIdMapping @ 0x1C003D18C (RaidSaveEnclosureIdMapping.c)
 *     PortRegistryReadDeviceKey @ 0x1C006B868 (PortRegistryReadDeviceKey.c)
 *     PortRegistryWriteDeviceKey @ 0x1C006BBB4 (PortRegistryWriteDeviceKey.c)
 */

__int64 __fastcall ShimGetMsftId(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // rsi
  ULONG v5; // r14d
  int DeviceKey; // eax
  int v7; // edi
  UUID *v8; // rax
  UUID v9; // xmm0
  __int64 v10; // rax
  __int64 result; // rax
  char v12; // al
  UUID v13; // xmm0
  int v14; // [rsp+30h] [rbp-29h] BYREF
  UUID *p_Uuid; // [rsp+38h] [rbp-21h] BYREF
  struct _UNICODE_STRING v16; // [rsp+48h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  __int64 v18; // [rsp+68h] [rbp+Fh] BYREF
  UUID Uuid; // [rsp+78h] [rbp+1Fh] BYREF

  v2 = *(unsigned __int8 **)(a1 + 136);
  v14 = 16;
  v5 = v2[3] | (v2[2] << 8);
  p_Uuid = &Uuid;
  RtlInitUnicodeString(&DestinationString, L"Storport");
  RtlInitUnicodeString(&v16, L"GeneratedID");
  DeviceKey = PortRegistryReadDeviceKey(
                *(_QWORD *)(a1 + 8),
                (unsigned int)&DestinationString,
                (unsigned int)&v16,
                3,
                (__int64)&p_Uuid,
                (__int64)&v14);
  if ( DeviceKey == -1073741772 )
  {
    v7 = 0;
    ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData, 1u);
    v8 = (UUID *)RaidCheckEnclosureIdMapping(&v18, (__int64)v2);
    v9 = *v8;
    v10 = *(_QWORD *)&v8->Data1;
    Uuid = v9;
    if ( !v10 && !*(_QWORD *)Uuid.Data4 )
    {
      v7 = ExUuidCreate(&Uuid);
      if ( v7 >= 0 )
      {
        v7 = RaidSaveEnclosureIdMapping(v2, v5, &Uuid);
        if ( v7 >= 0 )
          v7 = RaidAddEnclosureIdMapping(v2, v5, &Uuid);
      }
    }
    ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.Dpc.DpcData);
    if ( v7 < 0 )
      return 3221225473LL;
    DeviceKey = PortRegistryWriteDeviceKey(
                  *(_QWORD *)(a1 + 8),
                  (unsigned int)&DestinationString,
                  (unsigned int)&v16,
                  3,
                  (__int64)p_Uuid,
                  v14);
  }
  if ( DeviceKey < 0 )
    return 3221225473LL;
  v12 = *(_BYTE *)a2 & 0xF1;
  p_Uuid = *(UUID **)"MSFT    ";
  v13 = Uuid;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)a2 = v12 | 1;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xC0 | 1;
  *(_QWORD *)(a2 + 4) = p_Uuid;
  result = 0LL;
  *(UUID *)(a2 + 12) = v13;
  return result;
}
