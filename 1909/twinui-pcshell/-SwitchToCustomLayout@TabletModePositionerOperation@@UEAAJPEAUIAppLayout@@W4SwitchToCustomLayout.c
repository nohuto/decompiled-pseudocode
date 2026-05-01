/*
 * XREFs of ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x1803DE9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180076FD0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x18012DA54 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180439E88 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18043B250 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18043BBC4 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::SwitchToCustomLayout(__int64 a1, struct IAppLayout *a2, char a3)
{
  char v5; // si
  CAppLayoutOperation *v7; // r15
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-49h] BYREF
  int v18[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v19; // [rsp+40h] [rbp-39h] BYREF
  __int64 v20; // [rsp+48h] [rbp-31h] BYREF
  int v21; // [rsp+50h] [rbp-29h]
  _BYTE v22[16]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v23; // [rsp+70h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = 1;
  v20 = (a1 + 16) & -(__int64)(a1 != 176);
  v7 = (CAppLayoutOperation *)(a1 - 152);
  v21 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v20, 1);
  v8 = CAppLayoutOperation::_VerifyAndPrepareLayout(v7, a2, 0);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v19 = 0LL;
    v10 = *(_QWORD *)(a1 - 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 128LL))(v10, &v19);
    if ( v11 >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v19 + 24LL))(v19, 1LL, v22) >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 184LL))(
                *(_QWORD *)(a1 - 112),
                v23) )
          CAppLayoutOperation::_AddAnimationData(a1 - 152, v23, (a3 & 1) != 0 ? 10 : 5);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC2,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v11);
    }
    *(_DWORD *)(a1 - 72) = 1;
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(a1 - 72) = 65;
      if ( (a3 & 2) == 0 )
      {
        *(_QWORD *)v18 = 0LL;
        v17 = 0LL;
        v12 = *(_QWORD *)(a1 - 112);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v12 + 104LL))(
               v12,
               0LL,
               1LL,
               &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
               v18) >= 0 )
        {
          v13 = *(_QWORD *)v18;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
          v14 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v13 + 48LL))(
                  v13,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v17);
          if ( v14 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v17);
            *(_DWORD *)(a1 - 72) |= 2u;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xDE,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
              (const char *)(unsigned int)v14);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
      }
    }
    else
    {
      v5 = 0;
    }
    if ( (a3 & 4) == 0 )
    {
      v15 = *(_DWORD *)(a1 - 72) | 0x10000;
      *(_DWORD *)(a1 - 72) = v15;
      if ( v5 )
        *(_DWORD *)(a1 - 72) = v15 | 0x80000;
    }
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    v9 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v8);
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v20);
  return v9;
}
