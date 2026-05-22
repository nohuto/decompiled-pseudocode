/*
 * XREFs of ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180148680
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0sqq @ 0x18005A684 (McTemplateU0sqq.c)
 *     ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x180148804 (-PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z.c)
 */

__int64 __fastcall TextInputStateAdapter::OnConnected(TextInputStateAdapter *this, struct IMessageProxy *a2, bool a3)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r9

  *((_BYTE *)this + 56) = 1;
  v4 = 0;
  while ( v4 != 18 )
  {
    v5 = TextInputStateAdapter::PropertyChangeHelper(this, v4, a3);
    v8 = v5;
    if ( v5 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        return v8;
      v9 = 91LL;
      goto LABEL_11;
    }
LABEL_7:
    if ( ++v4 >= 34 )
      return 0;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 5) + 176LL))(
         *((_QWORD *)this + 5),
         (char *)this + 92);
  v8 = v5;
  if ( v5 >= 0 )
    goto LABEL_7;
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
    return v8;
  v9 = 96LL;
LABEL_11:
  McTemplateU0sqq(v7, v6, "TextInputStateAdapter::OnConnected", v9, v5);
  return v8;
}
