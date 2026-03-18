/*
 * XREFs of UserIsCurrentProcessImmersiveAppContainer @ 0x1C00621B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsCurrentProcessImmersiveAppContainer(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWin32Process; // rax
  unsigned int v3; // ecx
  int v5; // edx

  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  v3 = 0;
  if ( ProcessWin32Process )
  {
    if ( *(_DWORD *)(ProcessWin32Process + 884) )
    {
      v5 = *(_DWORD *)(ProcessWin32Process + 820);
      if ( (v5 & 0x30) == 0x10 )
        return (v5 & 0x200) == 0;
    }
  }
  return v3;
}
