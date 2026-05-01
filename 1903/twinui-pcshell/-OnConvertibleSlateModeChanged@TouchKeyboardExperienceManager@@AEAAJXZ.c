/*
 * XREFs of ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180311A24
 * Callers:
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x180312190 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803181D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged(TouchKeyboardExperienceManager *this)
{
  if ( *((_QWORD *)this + 91) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 91) + 96LL) + 492LL) = GetSystemMetrics(8195) != 0;
  return 0LL;
}
