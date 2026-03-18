/*
 * XREFs of HvlpSlowAcknowledgePageRequest @ 0x14028A6C8
 * Callers:
 *     HvlSvmAcknowledgePageRequest @ 0x140289970 (HvlSvmAcknowledgePageRequest.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpFastAcknowledgePageRequest @ 0x14028A4F8 (HvlpFastAcknowledgePageRequest.c)
 */

__int64 __fastcall HvlpSlowAcknowledgePageRequest(unsigned int a1, const void *a2, int *a3)
{
  __int64 v4; // rbx
  _QWORD *v6; // rcx
  PHYSICAL_ADDRESS v8[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h]

  v4 = a1;
  memset(v8, 0, 0x20uLL);
  v6 = HvlpAcquireHypercallPage(v8, 5, 0LL, 0LL);
  if ( v6 )
  {
    memmove(v6, a2, 40 * v4);
    v9 = HvcallCodeVa();
    HvlpReleaseHypercallPage((unsigned int *)v8);
    *a3 = WORD2(v9) & 0xFFF;
    return (unsigned __int16)v9;
  }
  else
  {
    if ( (unsigned int)v4 >= 2 )
      LODWORD(v4) = 2;
    return HvlpFastAcknowledgePageRequest(v4, (__int64)a2, a3);
  }
}
