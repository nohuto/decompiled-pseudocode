/*
 * XREFs of RaidUnitGetDeviceId @ 0x1C001B43C
 * Callers:
 *     RaUnitQueryIdIrp @ 0x1C006E9D0 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006850 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x1C001BBE0 (RtlStringCchPrintfW.c)
 *     StorGetIdentityVendorId @ 0x1C001BC60 (StorGetIdentityVendorId.c)
 *     StorGetIdentityProductId @ 0x1C001BC8C (StorGetIdentityProductId.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1C006CB7C (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1C006EA58 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // edi
  wchar_t *Pool; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *DeviceType; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[24]; // [rsp+40h] [rbp-38h] BYREF

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(PagedPool, 0x80uLL, 0x49446152u, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    StorGetIdentityVendorId(a1 + 104, v10);
    StorGetIdentityProductId(a1 + 104, v11);
    if ( (*(_DWORD *)(a1 + 1824) & 1) != 0 )
    {
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", v10, v11);
    }
    else
    {
      DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 104) & 0x1F, v6, v7);
      RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, v10, v11);
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
