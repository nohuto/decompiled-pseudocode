/*
 * XREFs of ?SetRemarshalingFlags@CBaseExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A77D0
 * Callers:
 *     ?SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A7650 (-SetRemarshalingFlags@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01ACE20 (-SetRemarshalingFlags@CNaturalAnimationMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01B23E0 (-SetRemarshalingFlags@CConditionalExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01BB240 (-SetRemarshalingFlags@CExpressionMarshaler@DirectComposition@@MEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01A5EB4 (-SetRemarshalingFlags@CNotificationResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CBaseExpressionMarshaler::SetRemarshalingFlags(
        DirectComposition::CBaseExpressionMarshaler *this)
{
  bool v2; // al
  char v3; // dl

  *((_DWORD *)this + 4) &= 0xFFFFFF3F;
  v2 = DirectComposition::CNotificationResourceMarshaler::SetRemarshalingFlags(this);
  v3 = 0;
  if ( v2 || (*((_BYTE *)this + 104) & 3) != 0 )
    return 1;
  return v3;
}
