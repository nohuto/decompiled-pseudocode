/*
 * XREFs of BugCheckMachine @ 0x1C00A0B2C
 * Callers:
 *     ?WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z @ 0x1C00DD7E4 (-WatchDogBugCheckMachine@@YAXPEAURawInputManagerObject@@_K111@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall BugCheckMachine(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  NTSTATUS result; // eax
  __int16 SystemInformation; // [rsp+40h] [rbp+8h] BYREF
  __int16 SystemInformation_2; // [rsp+42h] [rbp+Ah]

  SystemInformation_2 = HIWORD(a1);
  SystemInformation = 0;
  result = ZwQuerySystemInformation(SystemKernelDebuggerInformation, &SystemInformation, 2u, 0LL);
  if ( result < 0 || !(_BYTE)SystemInformation || HIBYTE(SystemInformation) )
    KeBugCheckEx(0x164u, a2, a3, 0LL, 0LL);
  return result;
}
