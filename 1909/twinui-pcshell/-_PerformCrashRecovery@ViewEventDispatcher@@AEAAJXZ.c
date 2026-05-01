/*
 * XREFs of ?_PerformCrashRecovery@ViewEventDispatcher@@AEAAJXZ @ 0x180294820
 * Callers:
 *     ?v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x180295A30 (-v_PublishServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180017C28 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x18028832C (--1CrashRecovery@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     _lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator() @ 0x1802889BC (_lambda_313d2f60cc252ee9599e8e6a3d95ee51_--operator().c)
 *     ?StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ @ 0x18028DCA0 (-StartActivity@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXXZ.c)
 *     ?Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x18028E28C (-Stop@CrashRecovery@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x180292DA0 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::_PerformCrashRecovery(RTL_SRWLOCK *this)
{
  void *v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  PVOID Ptr; // rcx
  int v6; // eax
  int v7; // r8d
  unsigned __int64 v8; // rbx
  int v9; // eax
  char *v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v14; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 pvData; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pdwType; // [rsp+58h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v18[2]; // [rsp+60h] [rbp-A8h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v20[2]; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  LPARAM lParam; // [rsp+88h] [rbp-80h] BYREF
  __int64 v24; // [rsp+90h] [rbp-78h]
  __int64 v25; // [rsp+98h] [rbp-70h]
  __int64 v26; // [rsp+A0h] [rbp-68h]
  __int64 v27; // [rsp+A8h] [rbp-60h] BYREF
  RTL_SRWLOCK *v28[9]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v29[40]; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+260h] [rbp+158h]

  v28[7] = (RTL_SRWLOCK *)-2LL;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v29,
    (__int64)"CrashRecovery");
  v29[0] = &ViewManagerInteropTraceLogging::CrashRecovery::`vftable';
  ViewManagerInteropTraceLogging::CrashRecovery::StartActivity((ViewManagerInteropTraceLogging::CrashRecovery *)v29);
  lParam = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v3 = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
         (__int64)&lParam,
         0x32uLL,
         v2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    EnumWindows(ViewEventDispatcher::s_RecoverWindowsProc, (LPARAM)&lParam);
    v27 = v24;
    pv = 0LL;
    *(_QWORD *)v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    Ptr = this[62].Ptr;
    pv = (LPVOID)*((_QWORD *)Ptr + 19);
    v21 = *((_QWORD *)Ptr + 21);
    *(_QWORD *)v20 = *((_QWORD *)Ptr + 20);
    v22 = *((_QWORD *)Ptr + 22);
    *((_QWORD *)Ptr + 19) = 0LL;
    *((_QWORD *)Ptr + 21) = 0LL;
    *((_QWORD *)Ptr + 20) = 0LL;
    *((_QWORD *)Ptr + 22) = 0LL;
    LODWORD(v14) = 0;
    pdwType = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_CURRENT_USER,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer",
            L"DisableAppRecoveryAfterShellRestart",
            0x10000012u,
            &pdwType,
            &pvData,
            &pcbData) )
    {
      if ( pdwType == 4 )
      {
        LODWORD(v14) = pvData == 1;
      }
      else if ( pcbData == 4 )
      {
        v6 = v14;
        if ( (_WORD)pvData == 49 )
          v6 = 1;
        LODWORD(v14) = v6;
      }
    }
    v7 = 0;
    v18[0] = 0;
    v8 = *(_QWORD *)v20;
    pvData = 0LL;
    if ( *(_QWORD *)v20 )
    {
      do
      {
        v28[0] = this;
        v28[1] = (RTL_SRWLOCK *)&pv;
        v28[2] = (RTL_SRWLOCK *)&pvData;
        v28[3] = (RTL_SRWLOCK *)&v14;
        v28[4] = (RTL_SRWLOCK *)&v27;
        v28[5] = (RTL_SRWLOCK *)&lParam;
        v28[6] = (RTL_SRWLOCK *)v18;
        v9 = lambda_313d2f60cc252ee9599e8e6a3d95ee51_::operator()(v28);
        if ( v9 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xACC,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v9);
        ++pvData;
      }
      while ( pvData < v8 );
      v7 = v18[0];
    }
    ViewManagerInteropTraceLogging::CrashRecovery::Stop((ViewManagerInteropTraceLogging::CrashRecovery *)v29, v8, v7);
    v4 = 0;
    v10 = (char *)pv;
    if ( pv )
    {
      v11 = 0LL;
      if ( *(_QWORD *)v20 )
      {
        v12 = 0LL;
        do
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10[v12]);
          ++v11;
          v12 += 16LL;
          v10 = (char *)pv;
        }
        while ( v11 < *(_QWORD *)v20 );
      }
      CoTaskMemFree(v10);
      pv = 0LL;
    }
    *(_QWORD *)v20 = 0LL;
    v22 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA47,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
  }
  if ( lParam )
  {
    CoTaskMemFree((LPVOID)lParam);
    lParam = 0LL;
  }
  v24 = 0LL;
  v26 = 0LL;
  ViewManagerInteropTraceLogging::CrashRecovery::~CrashRecovery((ViewManagerInteropTraceLogging::CrashRecovery *)v29);
  return v4;
}
