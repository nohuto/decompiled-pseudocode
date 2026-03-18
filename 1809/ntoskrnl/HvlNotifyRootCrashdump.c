/*
 * XREFs of HvlNotifyRootCrashdump @ 0x140274B2C
 * Callers:
 *     HvlPrepareForRootCrashdump @ 0x140274BF0 (HvlPrepareForRootCrashdump.c)
 *     KeBugCheck2 @ 0x140291090 (KeBugCheck2.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E680 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271764 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272284 (HvlpReleaseHypercallPage.c)
 */

PSLIST_ENTRY __fastcall HvlNotifyRootCrashdump(int a1)
{
  PSLIST_ENTRY result; // rax
  _DWORD *v3; // rax
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+40h] [rbp-28h] BYREF

  result = (PSLIST_ENTRY)(unsigned int)HvlpRootFlags;
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
