/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C001AF2C
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C006C338 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006800 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x1C001B6D0 (RtlStringCchPrintfW.c)
 *     StorGetIdentityVendorId @ 0x1C001B750 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C001B77C (StorGetIdentityProductId.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C006BC7C (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006C3C0 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // edi
  wchar_t *Pool; // rbx
  _QWORD *DeviceType; // rax
  _BYTE v8[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v9[24]; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x80uLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    StorGetIdentityVendorId(a1 + 104, v8);
    StorGetIdentityProductId(a1 + 104, v9);
    if ( (*(_DWORD *)(a1 + 1568) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", v8, v9);
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F);
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, v8, v9);
    }
    RaFixupIds(Pool, 0LL);
  }
  else
  {
    v4 = -1073741801;
  }
  *a2 = Pool;
  return v4;
}
