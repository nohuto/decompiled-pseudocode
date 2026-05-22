/*
 * XREFs of ?Thunk_RegisterComboButton_0@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1800C7430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IComboButton_Receive<ButtonRecognizer>::Thunk_RegisterComboButton_0(
        ButtonRecognizer *a1,
        __int64 a2)
{
  return ButtonRecognizer::RegisterComboButton(
           a1,
           *(struct tagMsgRoutingInfo **)a2,
           **(_BYTE **)(a2 + 8),
           *(struct ButtonRegistrationABI **)(a2 + 16));
}
