/*
 * XREFs of ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1802B8940
 * Callers:
 *     <none>
 * Callees:
 *     ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802B82F4 (-OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnMessage(
        TouchKeyboardExperienceManager *this,
        int a2,
        __int64 a3,
        const WCHAR *a4)
{
  if ( a2 == 26 && CompareStringOrdinal(a4, -1, L"ConvertibleSlateMode", -1, 1) == 2 )
    TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged((TouchKeyboardExperienceManager *)((char *)this - 136));
  return 0LL;
}
