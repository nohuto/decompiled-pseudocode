/*
 * XREFs of ATAShimGetMsftId @ 0x1C002B6F0
 * Callers:
 *     ATADeviceIdShimStorageDeviceIdCompletionHook @ 0x1C002B680 (ATADeviceIdShimStorageDeviceIdCompletionHook.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     RaidAddATADeviceIdMapping @ 0x1C00269D8 (RaidAddATADeviceIdMapping.c)
 *     RaidCheckATADeviceIdMapping @ 0x1C0026B14 (RaidCheckATADeviceIdMapping.c)
 *     RaidSaveATADeviceIdMapping @ 0x1C0026D94 (RaidSaveATADeviceIdMapping.c)
 *     TrimString @ 0x1C002B9C8 (TrimString.c)
 */

__int64 __fastcall ATAShimGetMsftId(__int64 a1, __int64 a2)
{
  int v3; // ebx
  _LIST_ENTRY *v4; // rax
  UUID v5; // xmm0
  _LIST_ENTRY *Flink; // rax
  char v7; // al
  UUID v8; // xmm0
  __int64 result; // rax
  STRING v10; // [rsp+20h] [rbp-40h] BYREF
  _LIST_ENTRY v11; // [rsp+30h] [rbp-30h] BYREF
  UUID Uuid; // [rsp+40h] [rbp-20h] BYREF

  *(_QWORD *)&v10.Length = 0LL;
  v10.Buffer = 0LL;
  v3 = TrimString(a1 + 112, &v10);
  if ( v3 < 0 )
    return 3221225473LL;
  ExAcquireResourceExclusiveLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension, 1u);
  v4 = RaidCheckATADeviceIdMapping(&v11, &v10);
  v5 = (UUID)*v4;
  Flink = v4->Flink;
  Uuid = v5;
  if ( !Flink && !*(_QWORD *)Uuid.Data4 )
  {
    v3 = ExUuidCreate(&Uuid);
    if ( v3 >= 0 )
    {
      v3 = RaidSaveATADeviceIdMapping(v10.Buffer, v10.Length, &Uuid);
      if ( v3 >= 0 )
        v3 = RaidAddATADeviceIdMapping(v10.Buffer, v10.Length, (struct _STRING *)&Uuid);
    }
  }
  ExReleaseResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
  ExFreePoolWithTag(v10.Buffer, 0x48536152u);
  if ( v3 < 0 )
    return 3221225473LL;
  v7 = *(_BYTE *)a2 & 0xF1;
  *(_QWORD *)&v10.Length = *(_QWORD *)"MSFT    ";
  v8 = Uuid;
  *(_BYTE *)(a2 + 3) = 24;
  *(_BYTE *)a2 = v7 | 1;
  *(_BYTE *)(a2 + 1) = *(_BYTE *)(a2 + 1) & 0xC0 | 1;
  *(_QWORD *)(a2 + 4) = *(_QWORD *)&v10.Length;
  result = 0LL;
  *(UUID *)(a2 + 12) = v8;
  return result;
}
