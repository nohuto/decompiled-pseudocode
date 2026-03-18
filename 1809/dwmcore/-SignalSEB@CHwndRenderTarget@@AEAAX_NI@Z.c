/*
 * XREFs of ?SignalSEB@CHwndRenderTarget@@AEAAX_NI@Z @ 0x18015B96C
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McTemplateU0zqq @ 0x18015BC38 (McTemplateU0zqq.c)
 *     ?PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z @ 0x180220AB8 (-PubSebiUpdateLevelEventRpc@@YAJPEAXE@Z.c)
 */

void __fastcall CHwndRenderTarget::SignalSEB(CHwndRenderTarget *this, char a2, unsigned int a3)
{
  char updated; // di
  struct _SEB_RPC_PUBLISH_DATA *v5; // rcx
  char v7; // bp
  struct _SEB_RPC_PUBLISH_DATA *v9; // rcx

  updated = 0;
  v5 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 110);
  v7 = a3 > 0xC8;
  if ( v5 && *((_BYTE *)this + 864) != v7 )
    PubSebiUpdateLevelEventRpc(v5, a3 > 0xC8);
  v9 = (struct _SEB_RPC_PUBLISH_DATA *)*((_QWORD *)this + 109);
  if ( v9 )
  {
    if ( *((_BYTE *)this + 863) == a2 )
      goto LABEL_8;
    updated = PubSebiUpdateLevelEventRpc(v9, a2 != 0);
  }
  if ( *((_BYTE *)this + 863) == a2 )
  {
LABEL_8:
    if ( *((_BYTE *)this + 864) == v7 )
      return;
  }
  *((_BYTE *)this + 863) = a2;
  *((_BYTE *)this + 864) = v7;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0zqq((_DWORD)v9, a2, a3, a3, updated);
}
