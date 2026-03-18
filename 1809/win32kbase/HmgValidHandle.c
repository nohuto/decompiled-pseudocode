/*
 * XREFs of HmgValidHandle @ 0x1C003A810
 * Callers:
 *     UserValidateCopyRgn @ 0x1C003A790 (UserValidateCopyRgn.c)
 *     GreValidateServerHandle @ 0x1C003A7F0 (GreValidateServerHandle.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

_BOOL8 __fastcall HmgValidHandle(unsigned int a1, char a2)
{
  GdiHandleManager *v2; // rbx
  __int16 v4; // edi^2
  unsigned int v5; // eax
  struct _ENTRY *Entry; // rax

  v2 = gpHandleManager;
  v4 = HIWORD(a1);
  v5 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v5, 0);
  return Entry && *((_BYTE *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4;
}
