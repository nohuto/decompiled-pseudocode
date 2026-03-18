/*
 * XREFs of prfntDeactivateEudcRFONTs @ 0x1C00CB6E8
 * Callers:
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C0160A24 (vDeactivateEudcRFONTsWorker.c)
 */

__int64 __fastcall prfntDeactivateEudcRFONTs(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  struct _FONTHASH **v4; // rbx
  unsigned int v5; // esi
  struct _FONTHASH *v6; // r8
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0LL;
  v8 = 0LL;
  v10 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v9 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v4 = gpPFTPublic;
  v5 = 0;
  if ( *((_DWORD *)gpPFTPublic + 6) )
  {
    do
    {
      v6 = v4[v5 + 5];
      if ( v6 )
        vDeactivateEudcRFONTsWorker(v3, a1, v6, &v8);
      ++v5;
    }
    while ( v5 < *((_DWORD *)v4 + 6) );
    v2 = v8;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v2;
}
