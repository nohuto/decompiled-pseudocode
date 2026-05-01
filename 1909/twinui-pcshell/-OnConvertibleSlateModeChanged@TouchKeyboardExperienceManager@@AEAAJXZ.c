/*
 * XREFs of ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180330EF4
 * Callers:
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x1803316A0 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180337A20 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged(TouchKeyboardExperienceManager *this)
{
  if ( *((_QWORD *)this + 91) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 91) + 96LL) + 492LL) = GetSystemMetrics(8195) != 0;
  return 0LL;
}
