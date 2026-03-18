/*
 * XREFs of sub_1406F00F0 @ 0x1406F00F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1406229C0 (ExpHwidAppendDeviceInfoBlock.c)
 */

__int64 __fastcall sub_1406F00F0(__int64 a1)
{
  bool v2; // zf
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  _DWORD v5[8]; // [rsp+28h] [rbp-30h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *(_BYTE *)(a1 + 12) == 0;
  v4 = *(_QWORD *)(*(_QWORD *)qword_140466188 + 7888LL) << 12;
  if ( v2 )
  {
    LOBYTE(v5[1]) = 2;
    *(_OWORD *)&v5[3] = SL_HWID_IF_GUID_SYSTEM_MEMORY;
  }
  return ExpHwidAppendDeviceInfoBlock(a1, (__int64)v5, &v4, 8u);
}
