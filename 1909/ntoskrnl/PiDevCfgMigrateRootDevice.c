/*
 * XREFs of PiDevCfgMigrateRootDevice @ 0x1408677E4
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 * Callees:
 *     PnpRegistryValueExists @ 0x14015D070 (PnpRegistryValueExists.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     PiDevCfgMigrateDevice @ 0x14071D64C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgOpenDeviceMigrationKey @ 0x140867A40 (PiDevCfgOpenDeviceMigrationKey.c)
 */

__int64 __fastcall PiDevCfgMigrateRootDevice(__int64 a1, __int64 a2, _DWORD *a3)
{
  const WCHAR *v5; // rcx
  int v7; // edi
  int v8; // ebx
  UNICODE_STRING v10; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  P = 0LL;
  *(_QWORD *)&v10.Length = 0LL;
  v5 = *(const WCHAR **)(a2 + 8);
  v10.Buffer = 0LL;
  LOBYTE(v7) = 0;
  v8 = PiDevCfgOpenDeviceMigrationKey(v5);
  if ( v8 >= 0 )
  {
    if ( IopGetRegistryValue(0LL, L"ConfigFlags", 0, &P) >= 0 )
    {
      if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
        v7 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
    }
    if ( (v7 & 1) == 0 )
      return (unsigned int)-1073741823;
    v10.Buffer = L"DriverInfName";
    *(_DWORD *)&v10.Length = 1835034;
    if ( PnpRegistryValueExists(0LL, &v10) )
      return (unsigned int)-1073741823;
    else
      return (unsigned int)PiDevCfgMigrateDevice(a1, a2, 0LL, 0LL, a3, 0LL);
  }
  return (unsigned int)v8;
}
