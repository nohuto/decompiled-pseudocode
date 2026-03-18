/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C0051134
 * Callers:
 *     rimCreateDev @ 0x1C0050F60 (rimCreateDev.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C00514A0 (rimAddToObTrackList.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00A84A4 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx

  LOBYTE(a1) = 1;
  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x840uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 2;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0xE8] = 224LL;
    MEMORY[0xE0] = 224LL;
    MEMORY[0xD8] = 208LL;
    MEMORY[0xD0] = 208LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL);
    MEMORY[0x28] = KeGetCurrentThread();
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (unsigned int)&Feature_InputVirtualization__private_propertyCache,
      16291462,
      (unsigned int)&unk_1C01933C8,
      0,
      3);
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
