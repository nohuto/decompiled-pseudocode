/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01B3CD8
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     UserBeep @ 0x1C01983C4 (UserBeep.c)
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01B3D5C (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
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
