/*
 * XREFs of ACPIPepPlatformEntryExitNotify @ 0x1C00AD38C
 * Callers:
 *     ACPIPepWorker @ 0x1C00AD610 (ACPIPepWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIPepPlatformEntryExitNotify(__int64 a1, int a2, char a3)
{
  int v4; // ebx
  unsigned int v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+30h] [rbp-68h] BYREF
  __int128 v12; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v13[48]; // [rsp+50h] [rbp-48h] BYREF

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
  memset(v13, 0, sizeof(v13));
  v6 = *(__int64 **)(a1 + 712);
  v11 = 0LL;
  v12 = PEP_NOTIFICATIONS_DSM_UUID;
  v4 = ACPIAmliEvaluateDsm(v6, (__int64)&v12, 0, v5, (__int64)v13, &v11);
  if ( v4 >= 0 )
    AMLIFreeDataBuffs(v11, v7, v8, v9);
  return (unsigned int)v4;
}
