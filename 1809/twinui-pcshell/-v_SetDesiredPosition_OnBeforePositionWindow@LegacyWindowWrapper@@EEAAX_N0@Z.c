/*
 * XREFs of ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyWindowWrapper@@EEAAX_N0@Z @ 0x18024D0C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x18024CB5C (-SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z.c)
 */

void __fastcall LegacyWindowWrapper::v_SetDesiredPosition_OnBeforePositionWindow(
        LegacyWindowWrapper *this,
        char a2,
        char a3)
{
  if ( a3 )
    LegacyWindowWrapper::SendViewStateToWindow((LegacyWindowWrapper *)((char *)this - 8), a2 ^ 1);
}
