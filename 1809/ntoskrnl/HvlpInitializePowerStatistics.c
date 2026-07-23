/*
 * XREFs of HvlpInitializePowerStatistics @ 0x140277254
 * Callers:
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

__int64 HvlpInitializePowerStatistics()
{
  unsigned int v0; // edi
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  PHYSICAL_ADDRESS v4[3]; // [rsp+20h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v5[3]; // [rsp+40h] [rbp-28h] BYREF

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
    xmmword_1404DEB68 = *(_OWORD *)v3;
    xmmword_1404DEB78 = *((_OWORD *)v3 + 1);
    qword_1404DEB88 = v3[4];
  }
  HvlpReleaseHypercallPage((unsigned int *)v4);
  HvlpReleaseHypercallPage((unsigned int *)v5);
  return v0;
}
