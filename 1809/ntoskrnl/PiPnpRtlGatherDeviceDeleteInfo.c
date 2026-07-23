/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x14082A240
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     PlugPlayGetDeviceStatus @ 0x1406B5024 (PlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, _DWORD **a2)
{
  _DWORD *PoolWithTag; // rax
  int DeviceRegProp; // ebx
  NTSTATUS DeviceStatus; // eax
  _DWORD *v7; // rcx
  void *v8; // rcx
  int v10; // [rsp+40h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v12; // [rsp+88h] [rbp+10h] BYREF
  int v13; // [rsp+90h] [rbp+18h] BYREF
  int v14; // [rsp+98h] [rbp+20h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x54uLL, 0x47706E50u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
LABEL_13:
    *a2 = 0LL;
    return (unsigned int)DeviceRegProp;
  }
  memset(PoolWithTag, 0, 0x54uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  DeviceStatus = PlugPlayGetDeviceStatus((__int128 *)&DestinationString, &v10, *a2, &v14, 0);
  v7 = *a2;
  if ( DeviceStatus < 0 )
    *v7 = 45;
  v12 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)SourceString,
                    0LL,
                    9,
                    (__int64)&v13,
                    (__int64)(v7 + 1),
                    (__int64)&v12,
                    0);
  if ( DeviceRegProp >= 0 && v13 == 1 && v12 > 2 )
  {
    v8 = *a2;
    *((_WORD *)*a2 + 40) = 0;
  }
  else
  {
    v8 = *a2;
    DeviceRegProp = 0;
    *((_WORD *)*a2 + 2) = 0;
  }
  if ( DeviceRegProp < 0 )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0x47706E50u);
    goto LABEL_13;
  }
  return (unsigned int)DeviceRegProp;
}
