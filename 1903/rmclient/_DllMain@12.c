/*
 * XREFs of _DllMain@12 @ 0x1000D02C
 * Callers:
 *     __DllMainCRTStartup @ 0x1000C6B6 (__DllMainCRTStartup.c)
 * Callees:
 *     _RmpClientInitializeCoreApi@0 @ 0x10006F10 (_RmpClientInitializeCoreApi@0.c)
 *     ?FreeResourceManagerProxy@@YGXXZ @ 0x10007421 (-FreeResourceManagerProxy@@YGXXZ.c)
 *     _TraceLoggingRegisterEx@12 @ 0x1000F632 (_TraceLoggingRegisterEx@12.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  const struct _TlgProvider_t *v3; // ecx
  void (__stdcall *v5)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // [esp+0h] [ebp-4h]
  void *savedregs; // [esp+4h] [ebp+0h]

  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      TraceLoggingRegisterEx(v3, v5, savedregs);
      RmpClientInitializeCoreApi();
      DisableThreadLibraryCalls(hinstDLL);
    }
  }
  else
  {
    FreeResourceManagerProxy();
    EventUnregister(qword_10018018);
    qword_10018018 = 0LL;
    dword_10018000 = 0;
  }
  return 1;
}
