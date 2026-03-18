/*
 * XREFs of HvlNotifyRootCrashdump @ 0x140288CEC
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x140288DC0 (HvlPrepareForRootCrashdump.c)
 *     KeBugCheck2 @ 0x1402A7B60 (KeBugCheck2.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

PSLIST_ENTRY __fastcall HvlNotifyRootCrashdump(int a1)
{
  PSLIST_ENTRY result; // rax
  _DWORD *v3; // rax
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  result = (PSLIST_ENTRY)HvlpRootFlags;
  if ( (HvlpRootFlags & 4) != 0 )
  {
    v3 = HvlpAcquireHypercallPage(v4, 1, (__int64)v5, 8LL);
    *v3 = 2;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v3[1] = 2;
      }
      else
      {
        if ( a1 != 2 )
          return HvlpReleaseHypercallPage((unsigned int *)v4);
        v3[1] = 3;
      }
    }
    else
    {
      v3[1] = 1;
    }
    HvcallCodeVa();
    return HvlpReleaseHypercallPage((unsigned int *)v4);
  }
  return result;
}
