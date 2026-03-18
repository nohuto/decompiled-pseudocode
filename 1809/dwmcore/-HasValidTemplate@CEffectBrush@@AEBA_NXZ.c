/*
 * XREFs of ?HasValidTemplate@CEffectBrush@@AEBA_NXZ @ 0x1800DFD50
 * Callers:
 *     ?ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYSET@@@Z @ 0x1800DF37C (-ProcessSetPropertySet@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTY.c)
 *     ?OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800DFC00 (-OnPropertyValueChanged@CEffectBrush@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800DFD00 (-OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x1800DFD6C (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CEffectBrush::HasValidTemplate(CEffectBrush *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 10);
  result = 0;
  if ( v1 )
    return *(_QWORD *)(v1 + 72) != 0LL;
  return result;
}
