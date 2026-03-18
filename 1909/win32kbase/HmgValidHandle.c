/*
 * XREFs of HmgValidHandle @ 0x1C0087330
 * Callers:
 *     UserValidateCopyRgn @ 0x1C00872B0 (UserValidateCopyRgn.c)
 *     GreValidateServerHandle @ 0x1C0087310 (GreValidateServerHandle.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
