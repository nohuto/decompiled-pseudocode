/*
 * XREFs of ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x180157204
 * Callers:
 *     wil::details::lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___::_lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___ @ 0x18014D104 (wil--details--lambda_call__lambda_f9c9d82077cc2726e9c79a56f048e710___--_lambda_call__lambda_f9c9.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x18014D5FC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z @ 0x18014EE60 (-DragCancel@CAppViewManager@@UEAAJAEBU_GUID@@@Z.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z @ 0x180155E60 (-WindowProvided@CAppViewManager@@UEAAJAEBU_GUID@@PEAUHWND__@@H@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x180159120 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18007CAC8 (--$As@UIImmersiveApplicationInternal@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180158FF4 (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_ObliterateOperation(CAppViewManager *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 (__fastcall *v8)(__int64, const struct _GUID *, _BYTE *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rdi
  int v9; // eax
  int v10; // eax
  int GlomWorker; // eax
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  int v17; // [rsp+40h] [rbp-30h] BYREF
  __int64 v18; // [rsp+48h] [rbp-28h]
  PSRWLOCK v19; // [rsp+50h] [rbp-20h]
  _BYTE v20[16]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v18 = -2LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v19 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *, int *))(**((_QWORD **)this + 23) + 24LL))(
         *((_QWORD *)this + 23),
         a2,
         &v17);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60F,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_20;
  }
  if ( v17 )
  {
    v16 = 0LL;
    v7 = *((_QWORD *)this + 23);
    v8 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, _BYTE *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v7 + 56LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v9 = v8(v7, a2, v20, &v16);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x615,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      goto LABEL_20;
    }
    if ( v16 )
    {
      v15 = 0LL;
      v10 = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(&v16, &v15);
      v6 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x61A,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v10);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
        goto LABEL_18;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 192LL))(v15) )
      {
        GlomWorker = CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v15, 0LL, 4294967293LL);
        if ( GlomWorker < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x61F,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)GlomWorker);
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 15) + 176LL))(
                *((_QWORD *)this + 15),
                v15);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x623,
            (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
            (const char *)(unsigned int)v12);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    }
    v13 = (*(__int64 (__fastcall **)(_QWORD, const struct _GUID *))(**((_QWORD **)this + 23) + 72LL))(
            *((_QWORD *)this + 23),
            a2);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x627,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v13);
    v6 = 0;
    goto LABEL_18;
  }
  v6 = -2147023728;
LABEL_20:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
