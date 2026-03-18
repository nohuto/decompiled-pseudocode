/*
 * XREFs of PiPnpRtlGatherDeviceDeleteInfo @ 0x140863640
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDA80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwPlugPlayControl @ 0x1401C2670 (ZwPlugPlayControl.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 */

__int64 __fastcall PiPnpRtlGatherDeviceDeleteInfo(PCWSTR SourceString, __int64 a2)
{
  PVOID PoolWithTag; // rax
  int DeviceRegProp; // edi
  _DWORD *v6; // rdi
  NTSTATUS v7; // eax
  void *v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING Buffer; // [rsp+50h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  __int64 v14; // [rsp+70h] [rbp-10h]
  unsigned int v15; // [rsp+A8h] [rbp+28h] BYREF
  int v16; // [rsp+B0h] [rbp+30h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x54uLL, 0x47706E50u);
  *(_QWORD *)a2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DeviceRegProp = -1073741670;
LABEL_18:
    *(_QWORD *)a2 = 0LL;
    return (unsigned int)DeviceRegProp;
  }
  memset(PoolWithTag, 0, 0x54uLL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  v6 = *(_DWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    v14 = 0LL;
    v12 = 0LL;
    Buffer = DestinationString;
    v13 = 0LL;
    v7 = ZwPlugPlayControl(PlugPlayControlDeviceStatus, &Buffer, 0x28u);
    if ( v7 >= 0 )
      *v6 = v13;
    v6 = *(_DWORD **)a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
    v6 = *(_DWORD **)a2;
    **(_DWORD **)a2 = 45;
  }
  v15 = 78;
  DeviceRegProp = CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)SourceString,
                    0LL,
                    9,
                    (__int64)&v16,
                    (__int64)(v6 + 1),
                    (__int64)&v15,
                    0);
  if ( DeviceRegProp >= 0 && v16 == 1 && v15 > 2 )
  {
    v8 = *(void **)a2;
    *(_WORD *)(*(_QWORD *)a2 + 80LL) = 0;
  }
  else
  {
    v8 = *(void **)a2;
    DeviceRegProp = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4LL) = 0;
  }
  if ( DeviceRegProp < 0 )
  {
    if ( v8 )
      ExFreePoolWithTag(v8, 0x47706E50u);
    goto LABEL_18;
  }
  return (unsigned int)DeviceRegProp;
}
