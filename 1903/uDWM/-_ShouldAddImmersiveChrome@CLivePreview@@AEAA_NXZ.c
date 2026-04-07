/*
 * XREFs of ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x18007CFDC
 * Callers:
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18007B11C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x18007D380 (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 * Callees:
 *     ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x18007C9B0 (-_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ.c)
 */

char __fastcall CLivePreview::_ShouldAddImmersiveChrome(CLivePreview *this)
{
  char IsImmersiveAppOnTaskbar; // al
  char v2; // r9

  if ( *((_BYTE *)this + 282) )
    return 1;
  IsImmersiveAppOnTaskbar = CLivePreview::_IsImmersiveAppOnTaskbar(this);
  if ( IsImmersiveAppOnTaskbar != v2 )
    return 1;
  return v2;
}
