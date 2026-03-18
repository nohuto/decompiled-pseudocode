/*
 * XREFs of HviIsIommuInUse @ 0x140343F90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140343D80 (HviGetHardwareFeatures.c)
 */

bool __fastcall HviIsIommuInUse(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v5[0] = 0LL;
  v5[1] = 0LL;
  HviGetHardwareFeatures((__int64)v5, a2, a3, a4);
  return (v5[0] & 0x30) == 48;
}
