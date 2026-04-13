/*
 * XREFs of ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x1800474B8
 * Callers:
 *     _lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator() @ 0x180046668 (_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180045CA8 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+28h] BYREF
  __int64 v21; // [rsp+78h] [rbp+30h]
  __int64 v22; // [rsp+80h] [rbp+38h] BYREF
  __int64 v23; // [rsp+88h] [rbp+40h] BYREF

  v21 = a2;
  v20 = a1;
  v18[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(a2, (const WCHAR *)&v23);
  v22 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 192LL))(v23, &v22);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_23;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v22)(
         v22,
         &GUID_758d9661_221c_480f_a339_50656673f46f,
         v18);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v9);
    goto LABEL_25;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v18[0] + 48LL))(v18[0], a3);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0xE6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_26;
  }
  v20 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v23 + 176LL))(
             v23,
             &v20);
  if ( (int)result >= 0 )
  {
    v13 = v20;
    if ( !v20 )
      goto LABEL_11;
    v14 = (**v20)(v20, &GUID_758d9661_221c_480f_a339_50656673f46f, &v17);
    v15 = retaddr;
    if ( v14 >= 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v17 + 48LL))(v17, a4);
      if ( (int)result >= 0 )
      {
        if ( v17 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        goto LABEL_10;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEC,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)result);
LABEL_23:
      wil::details::in1diag3::Throw_Hr(
        v8,
        (void *)0xE4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x1800476C9LL);
  }
LABEL_10:
  v13 = v20;
LABEL_11:
  if ( v13 )
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v13)[2])(v13);
  if ( v18[0] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  if ( v22 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v16 = *(_QWORD *)(a2 + 8);
  if ( v16 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return result;
}
