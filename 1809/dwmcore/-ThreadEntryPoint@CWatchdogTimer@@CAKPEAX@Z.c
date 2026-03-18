/*
 * XREFs of ?ThreadEntryPoint@CWatchdogTimer@@CAKPEAX@Z @ 0x18007C170
 * Callers:
 *     <none>
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWatchdogTimer::ThreadEntryPoint(_QWORD *Parameter)
{
  void *i; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = (void *)Parameter[1]; ; i = (void *)Parameter[1] )
  {
    WaitForSingleObject(i, 0xFFFFFFFF);
    if ( *((_BYTE *)Parameter + 17) )
      break;
    if ( !IsDebuggerPresent() )
    {
      OutputDebugStringW(L"Dwm watchdog timer expired.\n");
      ModuleFailFastForHRESULT(2147500037LL, retaddr);
    }
  }
  return 0LL;
}
