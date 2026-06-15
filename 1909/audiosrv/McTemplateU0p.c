/*
 * XREFs of McTemplateU0p @ 0x1800EBEE0
 * Callers:
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x1800EBBF4 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     McGenEventWrite @ 0x180047F78 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0p(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int64 v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 8;
  return McGenEventWrite(a1, a2, a3, 2, (__int64)v4);
}
