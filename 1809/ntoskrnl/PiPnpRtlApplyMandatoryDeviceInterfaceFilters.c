/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140596828
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x140596FCC (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140596E6C (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceInterfaceFilters(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int ObjectProperty; // edi
  __int64 v9; // [rsp+60h] [rbp-18h] BYREF
  PVOID P; // [rsp+68h] [rbp-10h] BYREF

  P = 0LL;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0xC8uLL,
                     a3,
                     0LL,
                     (__int64)&DEVPKEY_Device_InstanceId,
                     (__int64)&v9 + 4,
                     (__int64)&P,
                     (__int64)&v9,
                     0);
  if ( ObjectProperty >= 0 )
    ObjectProperty = PiPnpRtlApplyMandatoryDeviceFilters(a1, (_DWORD)P, 0, a4, a5);
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)ObjectProperty;
}
