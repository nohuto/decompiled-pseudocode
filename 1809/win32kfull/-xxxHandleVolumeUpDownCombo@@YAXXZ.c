/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01D653C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 * Callees:
 *     UserBeep @ 0x1C01B9414 (UserBeep.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01D65CC (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v1; // r8d

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
      UserBeep(494, 200);
      xxxDisplayDiagBlackScreenDetected(2u, 1u, 1u);
    }
    guVolComboCount = 0;
  }
}
