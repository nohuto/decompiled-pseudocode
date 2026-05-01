/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C880
 * Callers:
 *     _lambda_05543aeae04520384b0424ea475026ea_::operator() @ 0x18009CB38 (_lambda_05543aeae04520384b0424ea475026ea_--operator().c)
 *     _lambda_531262642ad094c3078a9cb1af58219e_::operator() @ 0x18009CCB0 (_lambda_531262642ad094c3078a9cb1af58219e_--operator().c)
 *     _lambda_8475afa15079342a15ccc51689e4ed78_::operator() @ 0x18009CE28 (_lambda_8475afa15079342a15ccc51689e4ed78_--operator().c)
 *     _lambda_a5314efdfe6b9f90147b5239d1654f63_::operator() @ 0x18009D48C (_lambda_a5314efdfe6b9f90147b5239d1654f63_--operator().c)
 *     _lambda_b4654e0922f50786bbde1a7e7a9917df_::operator() @ 0x18009D7D4 (_lambda_b4654e0922f50786bbde1a7e7a9917df_--operator().c)
 *     _lambda_be51cf16fbf0031c38a94162e4d6f864_::operator() @ 0x18009DAC0 (_lambda_be51cf16fbf0031c38a94162e4d6f864_--operator().c)
 *     ??$Start@$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18030C760 (--$Start@$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@XZ.c)
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180311B10 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803129F0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180313490 (-PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180313560 (-PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803181D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x180324DF0 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180049904 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 33) = 0;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 35) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x90uLL);
  *((_QWORD *)a1 + 37) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  return a1;
}
