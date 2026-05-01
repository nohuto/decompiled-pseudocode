/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BCCC
 * Callers:
 *     _lambda_0cdbb88562623b41bf5d2249de419233_::operator() @ 0x1800A9D1C (_lambda_0cdbb88562623b41bf5d2249de419233_--operator().c)
 *     _lambda_39b1066faff2db62f569cb34f066b88c_::operator() @ 0x1800AA13C (_lambda_39b1066faff2db62f569cb34f066b88c_--operator().c)
 *     _lambda_3f773d4746d1dec58197fa131fb54ae4_::operator() @ 0x1800AA428 (_lambda_3f773d4746d1dec58197fa131fb54ae4_--operator().c)
 *     _lambda_4728da50fba771f61f09ce8410cf9c38_::operator() @ 0x1800AA730 (_lambda_4728da50fba771f61f09ce8410cf9c38_--operator().c)
 *     _lambda_75fd98ac14c9b18bffd1e748aa36b6a5_::operator() @ 0x1800AAE84 (_lambda_75fd98ac14c9b18bffd1e748aa36b6a5_--operator().c)
 *     _lambda_e02802e9a84f69bf6d5de77772b90450_::operator() @ 0x1800AAFFC (_lambda_e02802e9a84f69bf6d5de77772b90450_--operator().c)
 *     ??$Start@$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@SA?AV01@XZ @ 0x18032BBAC (--$Start@$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@SA-AV01@XZ.c)
 *     ?OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180330FE0 (-OnDismiss@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180332CA0 (-PreloadClipboardView@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180332D70 (-PreloadInputApp@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180337A20 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803445C4 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x180015800 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
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
