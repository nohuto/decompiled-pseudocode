/*
 * XREFs of ?Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F62B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x1800F62D0 (-CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z.c)
 */

__int64 __fastcall MPCProcessor::Process2DInput(MPCProcessor *this, struct InputInfo *a2)
{
  bool v3; // [rsp+30h] [rbp+8h] BYREF

  MPCProcessor::CacheHandInput((MPCProcessor *)((char *)this - 24), a2, &v3);
  return 0LL;
}
