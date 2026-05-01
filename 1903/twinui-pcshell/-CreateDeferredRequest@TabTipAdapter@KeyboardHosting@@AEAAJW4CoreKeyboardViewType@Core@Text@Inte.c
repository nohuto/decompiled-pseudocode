/*
 * XREFs of ?CreateDeferredRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18031F738
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180323260 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x18032349C (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18030C928 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??$PreviousDeferredRequestCanceled@II@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0@Z @ 0x18031BE74 (--$PreviousDeferredRequestCanceled@II@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0@Z.c)
 *     ??1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18031DE30 (--1DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1803251D4 (-StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboar.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1803261B0 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgR.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::CreateDeferredRequest(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v8; // r9
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdx
  int v13; // [rsp+20h] [rbp-198h] BYREF
  int v14; // [rsp+24h] [rbp-194h] BYREF
  __int64 v15; // [rsp+28h] [rbp-190h]
  __int64 v16; // [rsp+30h] [rbp-188h]
  _QWORD v17[40]; // [rsp+40h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v15 = -2LL;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"DeferredRequestCreated");
  v17[0] = &TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::`vftable';
  LOBYTE(v8) = a4;
  TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::StartActivity(v17, a2, a3, v8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 352));
  v16 = a1 + 352;
  if ( *(_BYTE *)(a1 + 328) )
  {
    v13 = *(_DWORD *)(a1 + 332);
    v14 = *(_DWORD *)(a1 + 336);
    TouchKeyboardExperienceTelemetryLogger::PreviousDeferredRequestCanceled<unsigned int,unsigned int>(
      (__int64)&v14,
      (__int64)&v13);
    *(_BYTE *)(a1 + 329) = 0;
    *(_DWORD *)(a1 + 332) = 0;
    *(_DWORD *)(a1 + 336) = 9;
  }
  *(_BYTE *)(a1 + 328) = 1;
  *(_BYTE *)(a1 + 329) = a4;
  *(_DWORD *)(a1 + 332) = a3;
  *(_DWORD *)(a1 + 336) = a2;
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 96LL))(*(_QWORD *)(a1 + 88));
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1246LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 88) + 80LL))(
         *(_QWORD *)(a1 + 88),
         500000LL,
         0LL);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = 1247LL;
    goto LABEL_7;
  }
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v17);
  v10 = 0;
LABEL_9:
  if ( a1 != -352 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 352));
  TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated::~DeferredRequestCreated((TouchKeyboardExperienceTelemetryLogger::DeferredRequestCreated *)v17);
  return v10;
}
