/*
 * XREFs of ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180148730
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0sqq @ 0x18005A424 (McTemplateU0sqq.c)
 *     ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801487E4 (-PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z.c)
 */

__int64 __fastcall TextInputStateAdapter::OnPropertyChanged(
        TextInputStateAdapter *this,
        struct IMessageProxy *a2,
        __int16 a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx

  v3 = TextInputStateAdapter::PropertyChangeHelper(this, a3, a3);
  v6 = v3;
  if ( v3 >= 0 )
  {
    return 0;
  }
  else if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    McTemplateU0sqq(v5, v4, "TextInputStateAdapter::OnPropertyChanged", 152LL, v3);
  }
  return v6;
}
