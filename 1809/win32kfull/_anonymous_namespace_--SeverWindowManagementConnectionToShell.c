/*
 * XREFs of _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C0221F70
 * Callers:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C02220E8 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 * Callees:
 *     ?SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z @ 0x1C0009D6C (-SetWndManagementWindow@ShellWindowManagement@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAU2@@Z.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 */

struct tagWND *__fastcall anonymous_namespace_::SeverWindowManagementConnectionToShell(
        ShellWindowManagement *a1,
        __int64 a2,
        struct tagWND *a3)
{
  struct tagWND *result; // rax

  result = ShellWindowManagement::SetWndManagementWindow(a1, 0LL, a3);
  if ( result )
    return (struct tagWND *)PostMessage(result, 0x343u, 0LL, 0LL);
  return result;
}
