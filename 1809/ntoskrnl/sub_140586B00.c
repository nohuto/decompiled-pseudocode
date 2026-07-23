/*
 * XREFs of sub_140586B00 @ 0x140586B00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14058728C (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405881AC (ExpHwidBiosIfGetFirmwareTable.c)
 */

__int64 __fastcall sub_140586B00(__int64 a1, int a2)
{
  char v2; // r8
  PVOID *p_P; // rax
  unsigned int appended; // edi
  __int64 v7; // [rsp+20h] [rbp-58h]
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-40h] BYREF
  _DWORD v10[8]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_BYTE *)(a1 + 12);
  p_P = &P;
  P = 0LL;
  if ( v2 )
    p_P = 0LL;
  if ( (int)ExpHwidBiosIfGetFirmwareTable(a1, a2, v2, (unsigned int)&v9, (__int64)p_P) < 0 )
    return 0LL;
  if ( !*(_BYTE *)(a1 + 12) )
  {
    memset(v10, 0, sizeof(v10));
    LOBYTE(v10[1]) = 2;
    *(_OWORD *)&v10[3] = SL_HWID_IF_GUID_BIOS_RSMB;
  }
  appended = ExpHwidAppendDeviceInfoBlock(a1, v10, P, v9, v7);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return appended;
}
