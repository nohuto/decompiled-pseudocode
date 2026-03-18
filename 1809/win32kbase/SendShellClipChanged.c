/*
 * XREFs of SendShellClipChanged @ 0x1C01515A0
 * Callers:
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C0148C34 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

void __fastcall SendShellClipChanged(void *Src, unsigned int a2)
{
  __int64 v2; // rsi
  char v4; // bp
  _DWORD *v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v4 = 0;
  memset(v8, 0, 0x20uLL);
  v5 = v8;
  if ( (unsigned int)v2 <= 1
    || (v6 = 16LL * (unsigned int)(v2 - 1), v4 = 1, v6 <= 0xFFFFFFFF)
    && (unsigned int)(v6 + 32) >= 0x20
    && (v5 = Win32AllocPoolZInit((unsigned int)(v6 + 32), 0x63736355u)) != 0LL )
  {
    *v5 = 3;
    v5[2] = v2;
    memmove(v5 + 3, Src, 16 * v2);
    InputExtensibilityCallout::CoreMsgSendMessage(v7, 1);
    if ( v4 )
      Win32FreePool((__int64)v5);
  }
}
