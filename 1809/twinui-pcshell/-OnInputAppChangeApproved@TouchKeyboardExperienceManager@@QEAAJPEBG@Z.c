/*
 * XREFs of ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x1802B8438
 * Callers:
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1802C3C14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18004059C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180083640 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18016F91C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802B41CC (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_P.c)
 *     ??1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802B4A70 (--1InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1802B561C (-CreateModalExperienceAsync@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1802B5824 (-DismissView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802BA7E4 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802BAB24 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ?TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x1802BC50C (-TerminateInputApplication@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall TouchKeyboardExperienceManager::OnInputAppChangeApproved(
        TouchKeyboardExperienceManager *this,
        unsigned __int16 *a2)
{
  bool v4; // r8
  struct KBViewInfo **v5; // rdi
  struct KBViewInfo **v6; // r14
  int v7; // eax
  unsigned int v8; // esi
  __int64 v10; // rsi
  __int64 v11; // rdi
  std::_Ref_count_base *v12; // rcx
  const unsigned __int16 *v13; // rdx
  int v14; // eax
  unsigned int v15; // edi
  _QWORD *v16; // rdx
  int ModalExperienceAsync; // eax
  unsigned int v18; // ebx
  _QWORD v19[2]; // [rsp+30h] [rbp-198h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-188h]
  unsigned __int64 v21; // [rsp+48h] [rbp-180h]
  _QWORD v22[40]; // [rsp+50h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+0h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v22,
    (__int64)"InputAppActivationRequested");
  v22[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::`vftable';
  TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::StartActivity((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v22);
  if ( !*((_QWORD *)this + 66) )
    goto LABEL_16;
  v5 = (struct KBViewInfo **)*((_QWORD *)this + 57);
  v6 = (struct KBViewInfo **)*((_QWORD *)this + 58);
  while ( v5 != v6 )
  {
    v7 = TouchKeyboardExperienceManager::DismissView(this, *v5, v4);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC6,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v22);
      return v8;
    }
    v5 += 2;
  }
  v10 = *((_QWORD *)this + 58);
  v11 = *((_QWORD *)this + 57);
  if ( v11 != v10 )
  {
    do
    {
      v12 = *(std::_Ref_count_base **)(v11 + 8);
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
      v11 += 16LL;
    }
    while ( v11 != v10 );
    v11 = *((_QWORD *)this + 57);
  }
  *((_QWORD *)this + 58) = v11;
  v13 = (const unsigned __int16 *)((char *)this + 512);
  if ( *((_QWORD *)this + 67) >= 8uLL )
    v13 = *(const unsigned __int16 **)v13;
  v14 = TouchKeyboardExperienceManager::TerminateInputApplication(this, v13);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v22);
    return v15;
  }
  else
  {
LABEL_16:
    std::wstring::wstring((__int64)v19, a2);
    if ( !v20 )
      goto LABEL_21;
    v16 = v19;
    if ( v21 >= 8 )
      v16 = (_QWORD *)v19[0];
    std::wstring::append((void **)this + 64, v16, v20);
    ModalExperienceAsync = TouchKeyboardExperienceManager::CreateModalExperienceAsync(this);
    v18 = ModalExperienceAsync;
    if ( ModalExperienceAsync < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD3,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)ModalExperienceAsync);
      std::wstring::_Tidy_deallocate(v19);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v22);
      return v18;
    }
    else
    {
LABEL_21:
      std::wstring::_Tidy_deallocate(v19);
      wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
        v22,
        0LL);
      TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested::~InputAppActivationRequested((TouchKeyboardExperienceTelemetryLogger::InputAppActivationRequested *)v22);
      return 0LL;
    }
  }
}
