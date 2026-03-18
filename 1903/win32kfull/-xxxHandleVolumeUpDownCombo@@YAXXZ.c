/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EBB68
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C010DF80 (xxxDoHotKeyStuff.c)
 * Callees:
 *     UserBeep @ 0x1C01CD3A4 (UserBeep.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01EBC00 (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v1; // r8d
  __int64 v2; // r8
  __int64 v3; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v1 = guVolComboCount;
  if ( guVolComboCount )
  {
    if ( PerformanceCounter.QuadPart <= gliVolComboTicks )
      goto LABEL_5;
    v1 = 0;
  }
  gliVolComboTicks = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
LABEL_5:
  guVolComboCount = v1 + 1;
  if ( (unsigned int)(v1 + 1) >= 3 )
  {
    if ( (unsigned int)xxxVolumeUpDownComboSupported() )
    {
      UserBeep(0x1EEu, 200);
      LOBYTE(v2) = 1;
      LOBYTE(v3) = 1;
      xxxDisplayDiagBlackScreenDetected(2LL, v3, v2, 0LL, 0LL);
    }
    guVolComboCount = 0;
  }
}
