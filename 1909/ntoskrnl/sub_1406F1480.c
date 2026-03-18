/*
 * XREFs of sub_1406F1480 @ 0x1406F1480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x140626870 (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1406F1544 (ExpHwidBiosIfGetFirmwareTable.c)
 */

__int64 __fastcall sub_1406F1480(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  PVOID *p_P; // rax
  unsigned int appended; // edi
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v10[8]; // [rsp+40h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  LOBYTE(v4) = *(_BYTE *)(a1 + 12);
  p_P = &P;
  P = 0LL;
  if ( (_BYTE)v4 )
    p_P = 0LL;
  if ( (int)ExpHwidBiosIfGetFirmwareTable(v3, v2, v4, (unsigned int)&v9, (__int64)p_P) < 0 )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    LOBYTE(v10[1]) = 2;
    *(_OWORD *)&v10[3] = SL_HWID_IF_GUID_BIOS_RSMB;
  }
  appended = ExpHwidAppendDeviceInfoBlock(a1, (__int64)v10, P, v9);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return appended;
}
