/*
 * XREFs of NtCompositionInputThread @ 0x1C01C7CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0037DC0 (UserIsCurrentProcessDwm.c)
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0H@Z @ 0x1C01C7380 (-DwmInputThread@CInputManager@@IEAAJPEAX0H@Z.c)
 */

__int64 __fastcall NtCompositionInputThread(void *a1, void *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  CInputManager *v8; // rcx

  if ( (int)IsCompositionInputThreadSupported() < 0 )
    return 3221225474LL;
  if ( !UserIsCurrentProcessDwm(v7, v6) )
    return 3221225506LL;
  if ( g_pInputManager )
    return CInputManager::DwmInputThread(v8, a1, a2, a3);
  return 3221225473LL;
}
