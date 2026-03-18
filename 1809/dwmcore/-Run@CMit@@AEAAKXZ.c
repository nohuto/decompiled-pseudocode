/*
 * XREFs of ?Run@CMit@@AEAAKXZ @ 0x18008A6E8
 * Callers:
 *     ?RunInputThreadStatic@CMit@@SAKPEAX@Z @ 0x18007C360 (-RunInputThreadStatic@CMit@@SAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800889C8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4Repor.c)
 *     ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x180088A28 (-InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x18008A84C (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMit::Run(CMit *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  void **v4; // rcx
  __int64 v5; // r8
  int SystemInputHost; // eax
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  int v9; // r9d
  void *v10; // rcx
  __int64 result; // rax
  unsigned int v12; // [rsp+20h] [rbp-18h]
  void *v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = 0LL;
  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
  {
    v4 = &CInputProxy::`vftable';
    *v2 = &CInputProxy::`vftable';
  }
  *((_QWORD *)this + 16) = v2;
  if ( !v2 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v4, &dword_1802BD9B4, 1u, -2147024882, 0x114u);
    goto LABEL_23;
  }
  wil::Feature<__WilFeatureTraits_Feature_MitLoopInversion>::ReportUsageToService((__int64)v4, v3, v5);
  SystemInputHost = CoreUICreateEx(1LL, &CMit::s_pMessageSession);
  v8 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v12 = 287;
    goto LABEL_21;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, __int64, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 2),
                      CMit::OnResetEvent,
                      this);
  v8 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v12 = 289;
    goto LABEL_21;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, __int64, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 264LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 14),
                      CMit::OnResetEvent,
                      this);
  v8 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v12 = 290;
    goto LABEL_21;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 16), &CMit::s_pSystemInputHost);
  v8 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v12 = 294;
LABEL_21:
    v9 = SystemInputHost;
    goto LABEL_22;
  }
  *((_QWORD *)this + 15) = MITGetCursorUpdateHandle();
  if ( !(unsigned int)MITActivateInputProcessing(CMit::s_HitTestRequest, &v13) )
  {
    v8 = -2147467259;
    v12 = 302;
    v9 = -2147467259;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BD9B4, 1u, v9, v12);
    goto LABEL_23;
  }
  v8 = 0;
  CMit::InitializeCoreMessagingIocp(v13);
  while ( !*((_BYTE *)this + 24) )
  {
    ResetEvent(*((HANDLE *)this + 2));
    if ( *((_BYTE *)this + 24) )
      break;
    CMit::UpdateMMCSSTask(this);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 224LL))(CMit::s_pMessageSession);
  }
  MITDeactivateInputProcessing();
LABEL_23:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 16);
  if ( v10 )
  {
    operator delete(v10, 8uLL);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 14));
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 280LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 2));
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  result = (unsigned __int16)v8;
  if ( (v8 & 0x1FFF0000) != 0x70000 )
    return v8;
  return result;
}
