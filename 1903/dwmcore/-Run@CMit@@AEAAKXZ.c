/*
 * XREFs of ?Run@CMit@@AEAAKXZ @ 0x1800E48AC
 * Callers:
 *     ?RunInputThreadStatic@CMit@@SAKPEAX@Z @ 0x1800E48A0 (-RunInputThreadStatic@CMit@@SAKPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800D0AAC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x1800E4A10 (-InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMit::Run(CMit *this)
{
  _QWORD *v2; // rax
  void **v3; // rcx
  int SystemInputHost; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned int v7; // r9d
  void *v8; // rcx
  __int64 result; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  GetCurrentThreadId();
  v2 = operator new(8uLL);
  if ( v2 )
  {
    v3 = &CInputProxy::`vftable';
    *v2 = &CInputProxy::`vftable';
  }
  else
  {
    v2 = 0LL;
  }
  *((_QWORD *)this + 16) = v2;
  if ( !v2 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, &dword_180313F6C, 1u, 0x8007000E, 0x116u, 0LL);
    goto LABEL_23;
  }
  SystemInputHost = CoreUICreateEx(1LL, &CMit::s_pMessageSession);
  v6 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v10 = 284;
    goto LABEL_21;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, __int64, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 248LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 2),
                      CMit::OnResetEvent,
                      this);
  v6 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v10 = 286;
    goto LABEL_21;
  }
  SystemInputHost = (*(__int64 (__fastcall **)(struct IMessageSession *, _QWORD, __int64 (__fastcall *)(void *, __int64, void *), CMit *))(*(_QWORD *)CMit::s_pMessageSession + 248LL))(
                      CMit::s_pMessageSession,
                      *((_QWORD *)this + 14),
                      CMit::OnResetEvent,
                      this);
  v6 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v10 = 287;
    goto LABEL_21;
  }
  SystemInputHost = CreateSystemInputHost(*((_QWORD *)this + 16), &CMit::s_pSystemInputHost);
  v6 = SystemInputHost;
  if ( SystemInputHost < 0 )
  {
    v10 = 291;
LABEL_21:
    v7 = SystemInputHost;
    goto LABEL_22;
  }
  *((_QWORD *)this + 15) = MITGetCursorUpdateHandle();
  if ( !(unsigned int)NtMITActivateInputProcessing(CMit::s_HitTestRequest, &v11) )
  {
    v6 = -2147467259;
    v7 = -2147467259;
    v10 = 299;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180313F6C, 1u, v7, v10, 0LL);
    goto LABEL_23;
  }
  v6 = 0;
  CMit::InitializeCoreMessagingIocp(v11);
  while ( !*((_BYTE *)this + 24) )
  {
    ResetEvent(*((HANDLE *)this + 2));
    if ( *((_BYTE *)this + 24) )
      break;
    CMit::UpdateMMCSSTask(this);
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 208LL))(CMit::s_pMessageSession);
  }
  NtMITDeactivateInputProcessing();
LABEL_23:
  if ( CMit::s_pSystemInputHost )
  {
    (*(void (__fastcall **)(struct ISystemInputHost *))(*(_QWORD *)CMit::s_pSystemInputHost + 16LL))(CMit::s_pSystemInputHost);
    CMit::s_pSystemInputHost = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 16);
  if ( v8 )
  {
    operator delete(v8);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( CMit::s_pMessageCallSendHost )
  {
    (*(void (__fastcall **)(struct IMessageCallSendHost *))(*(_QWORD *)CMit::s_pMessageCallSendHost + 16LL))(CMit::s_pMessageCallSendHost);
    CMit::s_pMessageCallSendHost = 0LL;
  }
  if ( CMit::s_pMessageSession )
  {
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 256LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 14));
    (*(void (__fastcall **)(struct IMessageSession *, _QWORD))(*(_QWORD *)CMit::s_pMessageSession + 256LL))(
      CMit::s_pMessageSession,
      *((_QWORD *)this + 2));
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)CMit::s_pMessageSession + 16LL))(CMit::s_pMessageSession);
    CMit::s_pMessageSession = 0LL;
  }
  result = (unsigned __int16)v6;
  if ( (v6 & 0x1FFF0000) != 0x70000 )
    return v6;
  return result;
}
