/*
 * XREFs of ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyViewWrapper@@EEAAX_N0@Z @ 0x1802B2140
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z @ 0x1802B1D70 (-SendViewStateToWindow@LegacyViewWrapper@@AEAAX_N@Z.c)
 */

void __fastcall LegacyViewWrapper::v_SetDesiredPosition_OnBeforePositionWindow(
        LegacyViewWrapper *this,
        char a2,
        char a3)
{
  if ( a3 )
    LegacyViewWrapper::SendViewStateToWindow((LegacyViewWrapper *)((char *)this - 8), a2 ^ 1);
}
