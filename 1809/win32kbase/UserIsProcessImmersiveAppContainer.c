/*
 * XREFs of UserIsProcessImmersiveAppContainer @ 0x1C001F0A0
 * Callers:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001F0EC (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 UserIsProcessImmersiveAppContainer()
{
  __int64 result; // rax
  unsigned int v1; // ecx
  int v2; // edx

  result = PsGetProcessWin32Process();
  v1 = 0;
  if ( result )
  {
    if ( *(_DWORD *)(result + 884) )
    {
      v2 = *(_DWORD *)(result + 820);
      if ( (v2 & 0x30) == 0x10 )
        return (v2 & 0x200) == 0;
    }
    return v1;
  }
  return result;
}
