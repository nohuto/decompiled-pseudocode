/*
 * XREFs of PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1406DBF74
 * Callers:
 *     PiPnpRtlApplyMandatoryFilters @ 0x140596FCC (PiPnpRtlApplyMandatoryFilters.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059924C (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryDeviceContainerFilters(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5)
{
  int v7; // ebx
  __int64 v9; // r9
  int Object; // eax
  unsigned int *v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v7 = 0;
  v14 = 0LL;
  P = 0LL;
  v15 = 0LL;
  if ( wcsicmp(a2, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}") )
  {
    Object = PiDmGetObject(5LL, (__int64)a2, (__int64 *)&P, v9);
    v11 = (unsigned int *)P;
    v7 = Object;
    if ( Object >= 0 )
    {
      v13 = a1;
      v14 = a4;
      LOBYTE(v15) = 0;
      v7 = PiDmListEnumObjectsWithCallback(
             4,
             (ULONG_PTR)P,
             (__int64 (__fastcall *)(_QWORD, __int64, char *))PiPnpRtlApplyMandatoryDeviceContainerFiltersCallback,
             (__int64)&v13);
      if ( v7 >= 0 )
        *a5 = v15;
    }
    if ( v11 )
      PiDmObjectRelease(v11);
  }
  else
  {
    *a5 = 1;
  }
  return (unsigned int)v7;
}
