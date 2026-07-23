/*
 * XREFs of PnpGetDeviceInstanceCsConfigFlags @ 0x1406FF91C
 * Callers:
 *     PnpIsDeviceInstanceEnabled @ 0x1406FF794 (PnpIsDeviceInstanceEnabled.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 */

__int64 __fastcall PnpGetDeviceInstanceCsConfigFlags(unsigned __int16 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  int RegistryValue; // ebx
  PVOID v7; // rcx
  PVOID P; // [rsp+60h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0;
  result = PnpUnicodeStringToWstr((__int16 **)&P, 0LL, a1);
  if ( (int)result >= 0 )
  {
    RegistryValue = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)P, 528, 0, 131097, 0, (__int64)&Handle, 0LL);
    PnpUnicodeStringToWstrFree(P, (__int64)a1);
    if ( RegistryValue >= 0 )
    {
      RegistryValue = IopGetRegistryValue(Handle, L"CSConfigFlags", 0, &P);
      ZwClose(Handle);
      if ( RegistryValue >= 0 )
      {
        v7 = P;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
          *a3 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(v7, 0);
      }
    }
    return (unsigned int)RegistryValue;
  }
  return result;
}
