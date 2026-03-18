/*
 * XREFs of ACPIPepPlatformEntryExitNotify @ 0x1C00B0AF4
 * Callers:
 *     ACPIPepWorker @ 0x1C00B0D70 (ACPIPepWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIPepPlatformEntryExitNotify(__int64 a1, int a2, char a3)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  _QWORD *v8; // [rsp+30h] [rbp-68h] BYREF
  __int128 v9; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v10[48]; // [rsp+50h] [rbp-48h] BYREF

  v4 = -1073741823;
  if ( a2 )
  {
    if ( a2 != 1 )
      return (unsigned int)v4;
    v5 = 4 - (a3 != 0);
  }
  else
  {
    v5 = 6 - (a3 != 0);
  }
  memset(v10, 0, sizeof(v10));
  v6 = *(__int64 **)(a1 + 712);
  v8 = 0LL;
  v9 = PEP_NOTIFICATIONS_DSM_UUID;
  v4 = ACPIAmliEvaluateDsm(v6, (__int64)&v9, 0, v5, (__int64)v10, &v8);
  if ( v4 >= 0 )
    AMLIFreeDataBuffs(v8);
  return (unsigned int)v4;
}
