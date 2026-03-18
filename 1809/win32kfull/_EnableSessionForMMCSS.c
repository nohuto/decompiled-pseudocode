/*
 * XREFs of _EnableSessionForMMCSS @ 0x1C01088C0
 * Callers:
 *     <none>
 * Callees:
 *     WakeRIT @ 0x1C0108A00 (WakeRIT.c)
 */

__int64 __fastcall EnableSessionForMMCSS(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx

  GreLockDwmState();
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5, v6);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 )
      *gpsi |= 0x1000u;
    else
      *gpsi &= ~0x1000u;
    WakeRIT(4LL, v8);
    v2 = 1LL;
  }
  GreUnlockDwmState();
  return v2;
}
