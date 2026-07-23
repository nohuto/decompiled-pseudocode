/*
 * XREFs of PopPepComponentGetResidencyIdleState @ 0x1401000F0
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x1400FFF30 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepComponentSetResidency @ 0x1402DCC98 (PopPepComponentSetResidency.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DD280 (PopPepIdleTimeoutRoutine.c)
 *     PopPepRegisterDevice @ 0x1407258D0 (PopPepRegisterDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPepComponentGetResidencyIdleState(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  bool v4; // zf

  v2 = (unsigned int)(*(_DWORD *)(a1 + 188) - 1);
  if ( !PopPepLowPowerEpoch && *(_DWORD *)(a1 + 188) != 1 )
  {
    do
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 192) + 24 * v2 + 8) <= a2 )
        break;
      v4 = (_DWORD)v2 == 1;
      v2 = (unsigned int)(v2 - 1);
    }
    while ( !v4 );
  }
  return (unsigned int)v2;
}
