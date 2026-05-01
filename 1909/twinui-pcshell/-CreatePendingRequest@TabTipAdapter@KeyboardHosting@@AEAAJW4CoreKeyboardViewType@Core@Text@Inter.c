/*
 * XREFs of ?CreatePendingRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18033F130
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x180342AA0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180342CDC (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18032BD74 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18032C664 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorT.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18032DAA8 (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_T.c)
 *     ??$PreviousPendingRequestCanceled@II@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0@Z @ 0x18033B7A4 (--$PreviousPendingRequestCanceled@II@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0@Z.c)
 *     ?StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180345600 (-StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180345984 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgR.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::CreatePendingRequest(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v8; // r9
  int v10; // [rsp+20h] [rbp-198h] BYREF
  _DWORD v11[3]; // [rsp+24h] [rbp-194h] BYREF
  _QWORD v12[40]; // [rsp+30h] [rbp-188h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)"PendingRequestCreated");
  LOBYTE(v8) = a4;
  v12[0] = &TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::StartActivity(v12, a2, a3, v8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 344));
  if ( *(_BYTE *)(a1 + 316) )
  {
    v10 = *(_DWORD *)(a1 + 320);
    v11[0] = *(_DWORD *)(a1 + 324);
    TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int>(
      (__int64)v11,
      (__int64)&v10);
    *(_DWORD *)(a1 + 320) = 0;
    *(_BYTE *)(a1 + 317) = 0;
    *(_DWORD *)(a1 + 324) = 9;
  }
  *(_BYTE *)(a1 + 316) = 1;
  *(_BYTE *)(a1 + 317) = a4;
  *(_DWORD *)(a1 + 320) = a3;
  *(_DWORD *)(a1 + 324) = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(v12);
  if ( a1 != -344 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 344));
  v12[0] = &TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Destroy(v12);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  return 0LL;
}
