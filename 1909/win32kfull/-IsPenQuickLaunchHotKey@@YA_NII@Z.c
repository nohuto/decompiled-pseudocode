/*
 * XREFs of ?IsPenQuickLaunchHotKey@@YA_NII@Z @ 0x1C00E8BA0
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z @ 0x1C00E8B14 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NII@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPenQuickLaunchHotKey(int a1, int a2)
{
  return a1 == 8 && (unsigned int)(a2 - 129) <= 2;
}
