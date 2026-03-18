/*
 * XREFs of PtiKbdFromQ @ 0x1C00258C0
 * Callers:
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002A5C (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     AllocateHidData @ 0x1C0002D24 (AllocateHidData.c)
 *     _PostThreadMessageEx @ 0x1C000F734 (_PostThreadMessageEx.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0016F70 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0018040 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     HasRawInputForegroundTarget @ 0x1C001DDEC (HasRawInputForegroundTarget.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001F240 (EditionHandleAndPostKeyEvent.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     WakeSomeone @ 0x1C0023FC4 (WakeSomeone.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C009E000 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     EditionKeyEventLLHook @ 0x1C00B4470 (EditionKeyEventLLHook.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C013CE70 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxProcessHidInput @ 0x1C01D8BF0 (xxxProcessHidInput.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E8124 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PtiKbdFromQ(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  else
    return *(_QWORD *)(a1 + 104);
}
