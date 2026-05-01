/*
 * XREFs of ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x18033FFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180018340 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180043BB8 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180074070 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x1800FF580 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18010E82C (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??0CMarshaledInterface@@QEAA@AEBV0@@Z @ 0x18012D804 (--0CMarshaledInterface@@QEAA@AEBV0@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x18033F618 (Windows--Internal--ComTaskPool--QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__-_.c)
 *     ?SetActive@ForegroundStaging@@QEAAJXZ @ 0x180340530 (-SetActive@ForegroundStaging@@QEAAJXZ.c)
 */

__int64 __fastcall CMultitaskingViewServiceProvider::QueueTask(__int64 a1, __int64 a2, char a3)
{
  int v6; // eax
  bool v7; // zf
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // ebx
  HWND ForegroundWindow; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  DWORD dwProcessId; // [rsp+20h] [rbp-59h] BYREF
  __int64 v20; // [rsp+28h] [rbp-51h] BYREF
  __int64 v21; // [rsp+30h] [rbp-49h] BYREF
  __int64 v22; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+48h] [rbp-31h] BYREF
  int v25; // [rsp+50h] [rbp-29h]
  struct tagGUITHREADINFO pgui; // [rsp+60h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v24 = (a1 + 16) & -(__int64)(a1 != 96);
  v6 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v24, 1);
  v7 = *(_QWORD *)(a1 + 64) == 0LL;
  v25 = v6;
  if ( v7 )
  {
    v8 = -2147019873;
    v9 = 187LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_27;
  }
  if ( (a3 & 3) != 0 )
  {
    if ( (v10 = a3 & 2, (ForegroundWindow = GetForegroundWindow()) != 0LL)
      && GetWindowThreadProcessId(ForegroundWindow, &dwProcessId)
      && dwProcessId == GetCurrentProcessId()
      && !v10
      || (v12 = ForegroundStaging::SetActive((ForegroundStaging *)(a1 + 144)), v8 = v12, v12 >= 0) )
    {
      pgui.cbSize = 72;
      memset_0(&pgui.flags, 0, 0x44uLL);
      if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 4) != 0 )
        SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C3,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v12);
    }
    if ( v8 < 0 )
    {
      v9 = 191LL;
      goto LABEL_16;
    }
  }
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v21);
  dwProcessId = 2;
  v22 = a2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  v13 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          &v21,
          (__int64)&GUID_0d1b8579_c52e_4207_89b3_9726ce949410,
          &v22,
          &dwProcessId);
  v8 = v13;
  if ( v13 >= 0 )
  {
    Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v20);
    v22 = *(_QWORD *)(a1 + 64);
    dwProcessId = 2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v20,
            (__int64)&GUID_537b455d_1240_433b_82af_10929138b8be,
            &v22,
            &dwProcessId);
    v8 = v14;
    if ( v14 >= 0 )
    {
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v22, (const struct CMarshaledInterface *)&v21);
      CMarshaledInterface::CMarshaledInterface((CMarshaledInterface *)&v23, (const struct CMarshaledInterface *)&v20);
      v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8____(
              v16,
              v15,
              *(_DWORD *)(a1 + 152),
              (__int64)&v22);
      v8 = v17;
      if ( v17 >= 0 )
        v8 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD4,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::WeakRef::~WeakRef(&v23);
      Microsoft::WRL::WeakRef::~WeakRef(&v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC7,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::WeakRef::~WeakRef(&v20);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v13);
  }
  Microsoft::WRL::WeakRef::~WeakRef(&v21);
LABEL_27:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v24);
  return (unsigned int)v8;
}
