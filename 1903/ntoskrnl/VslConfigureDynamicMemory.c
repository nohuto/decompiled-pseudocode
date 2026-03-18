/*
 * XREFs of VslConfigureDynamicMemory @ 0x14028F208
 * Callers:
 *     KeConfigureDynamicMemory @ 0x1402A4634 (KeConfigureDynamicMemory.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall VslConfigureDynamicMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a3;
  memset(v7, 0, 0x68uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 0;
  v7[1] = a1;
  v7[2] = a2;
  v7[3] = v4;
  return VslpEnterIumSecureMode(2, 37LL, 0LL, (__int64)v7);
}
