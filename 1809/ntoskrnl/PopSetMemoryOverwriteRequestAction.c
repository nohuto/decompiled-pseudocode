/*
 * XREFs of PopSetMemoryOverwriteRequestAction @ 0x14057D8FC
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x14057F014 (PopShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void PopSetMemoryOverwriteRequestAction()
{
  _BYTE v0[4]; // [rsp+30h] [rbp-30h] BYREF
  int v1; // [rsp+34h] [rbp-2Ch] BYREF
  int v2; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v3[4]; // [rsp+40h] [rbp-20h] BYREF

  v3[0] = -502711874;
  v3[1] = 1102983892;
  v3[2] = 2139705505;
  v3[3] = 697881733;
  if ( !PopErrataSkipMemoryOverwriteRequestControlLockAction )
  {
    v0[0] = -1;
    v1 = 1;
    if ( (int)HalGetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", v3, v0, &v1, &v2) >= 0 && v1 == 1 )
    {
      v0[0] &= 0xEEu;
      HalSetEnvironmentVariableEx(L"MemoryOverwriteRequestControl", v3, v0, 1LL, v2);
    }
  }
}
