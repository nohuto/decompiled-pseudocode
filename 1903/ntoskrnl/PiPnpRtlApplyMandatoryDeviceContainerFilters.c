/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406EC20C
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405BBB44 (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1405BE2C8 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405BEA50 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1405BED44 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFilters(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v7; // ebx
  int Object; // eax
  unsigned int *v10; // rdi
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v7 = 0;
  v13 = 0LL;
  P = 0LL;
  v14 = 0LL;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    Object = PiDmGetObject(5LL, (__int64)a2, (__int64 *)&P);
    v10 = (unsigned int *)P;
    v7 = Object;
    if ( Object >= 0 )
    {
      v12 = a1;
      v13 = a4;
      LOBYTE(v14) = 0;
      v7 = PiDmListEnumObjectsWithCallback(
             4,
             (ULONG_PTR)P,
             (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback,
             (__int64)&v12);
      if ( v7 >= 0 )
        *a5 = v14;
    }
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  else
  {
    *a5 = 1;
  }
  return (unsigned int)v7;
}
