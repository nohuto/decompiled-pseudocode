/*
 * XREFs of PtiKbdFromQ @ 0x1C002BD30
 * Callers:
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C0002A5C (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     AllocateHidData @ 0x1C0002D24 (AllocateHidData.c)
 *     _PostThreadMessageEx @ 0x1C000E634 (_PostThreadMessageEx.c)
 *     EditionHandleAndPostKeyEvent @ 0x1C001D320 (EditionHandleAndPostKeyEvent.c)
 *     HasRawInputForegroundTarget @ 0x1C001DC7C (HasRawInputForegroundTarget.c)
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     WakeSomeone @ 0x1C002A434 (WakeSomeone.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ?xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H@Z @ 0x1C003EDD0 (-xxxReadPostMessage@@YAHPEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIPEAU_QMSG_POSTCHAR_FLAGS@@H.c)
 *     EditionKeyEventLLHook @ 0x1C00551E0 (EditionKeyEventLLHook.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C01169E0 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C01338AC (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     xxxProcessHidInput @ 0x1C01D8A70 (xxxProcessHidInput.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E7FA4 (xxxCallJournalPlaybackHook.c)
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
