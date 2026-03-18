/*
 * XREFs of IsKernelDebuggerEnabled @ 0x1C00E13C0
 * Callers:
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C010B170 (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ecx
  __int16 SystemInformation; // [rsp+30h] [rbp+8h] BYREF

  SystemInformation = 0;
  v0 = ZwQuerySystemInformation(SystemKernelDebuggerInformation, &SystemInformation, 2u, 0LL);
  v1 = 0;
  if ( v0 >= 0 && (_BYTE)SystemInformation )
    return HIBYTE(SystemInformation) == 0;
  return v1;
}
