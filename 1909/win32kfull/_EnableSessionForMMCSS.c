/*
 * XREFs of _EnableSessionForMMCSS @ 0x1C00ECD00
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleMMCSSForDT@@YAXXZ @ 0x1C00ECD8C (-ToggleMMCSSForDT@@YAXXZ.c)
 *     WakeRIT @ 0x1C00ECEA0 (WakeRIT.c)
 */

__int64 __fastcall EnableSessionForMMCSS(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax

  GreLockDwmState();
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 )
      _InterlockedOr(gpsi, 0x1000u);
    else
      _InterlockedAnd(gpsi, 0xFFFFEFFF);
    WakeRIT(4LL);
    ToggleMMCSSForDT();
    v2 = 1LL;
  }
  GreUnlockDwmState();
  return v2;
}
