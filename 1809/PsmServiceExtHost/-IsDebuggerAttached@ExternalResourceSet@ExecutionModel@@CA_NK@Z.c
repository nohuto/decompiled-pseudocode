/*
 * XREFs of ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x180062EE8
 * Callers:
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x180062F94 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     ?HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z @ 0x18003A3D4 (-HampSystemQueryProcessIsDebuggerAttached@@YAKPEAX@Z.c)
 */

bool __fastcall ExecutionModel::ExternalResourceSet::IsDebuggerAttached(DWORD dwProcessId)
{
  bool IsDebuggerAttached; // bl
  HANDLE v2; // rax
  void *v3; // rdi

  IsDebuggerAttached = 0;
  v2 = OpenProcess(0x400u, 0, dwProcessId);
  v3 = v2;
  if ( v2 )
  {
    IsDebuggerAttached = HampSystemQueryProcessIsDebuggerAttached(v2);
    CloseHandle(v3);
  }
  return IsDebuggerAttached;
}
