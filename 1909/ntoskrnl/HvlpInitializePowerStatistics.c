/*
 * XREFs of HvlpInitializePowerStatistics @ 0x14028B0F8
 * Callers:
 *     HvlPhase1Initialize @ 0x14019E708 (HvlPhase1Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  unsigned int v0; // edi
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  PHYSICAL_ADDRESS v4[4]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v5[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v5, 0, 0x20uLL);
  memset(v4, 0, sizeof(v4));
  v0 = 0;
  if ( (HvlEnlightenments & 0x408) == 0 )
    return 0LL;
  v2 = HvlpAcquireHypercallPage(v5, 1, 0LL, 8LL);
  v3 = HvlpAcquireHypercallPage(v4, 2, 0LL, 392LL);
  *v2 = 0LL;
  *(_DWORD *)v2 = 4;
  if ( (unsigned __int16)HvcallCodeVa() )
  {
    v0 = -1073741823;
  }
  else
  {
    xmmword_14050AEB0 = *(_OWORD *)v3;
    xmmword_14050AEC0 = *((_OWORD *)v3 + 1);
    qword_14050AED0 = v3[4];
  }
  HvlpReleaseHypercallPage((unsigned int *)v4);
  HvlpReleaseHypercallPage((unsigned int *)v5);
  return v0;
}
