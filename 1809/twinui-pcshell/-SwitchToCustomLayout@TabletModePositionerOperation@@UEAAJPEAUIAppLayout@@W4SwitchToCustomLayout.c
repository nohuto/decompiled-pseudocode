/*
 * XREFs of ?SwitchToCustomLayout@TabletModePositionerOperation@@UEAAJPEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@@Z @ 0x180359530
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18006F1FC (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x1800EBA10 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     ?_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x1803B7F18 (-_AddAnimationData@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1803B91D8 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x1803B9B4C (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall TabletModePositionerOperation::SwitchToCustomLayout(__int64 a1, struct IAppLayout *a2, char a3)
{
  CAppLayoutOperation *v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rbx
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-49h] BYREF
  int v17[2]; // [rsp+38h] [rbp-41h] BYREF
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 v19; // [rsp+48h] [rbp-31h] BYREF
  int v20; // [rsp+50h] [rbp-29h]
  _BYTE v21[16]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v22; // [rsp+70h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v19 = (a1 + 16) & -(__int64)(a1 != 176);
  v6 = (CAppLayoutOperation *)(a1 - 152);
  v20 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v19, 1);
  v7 = CAppLayoutOperation::_VerifyAndPrepareLayout(v6, a2, 0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v18 = 0LL;
    v9 = *(_QWORD *)(a1 - 120);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 128LL))(v9, &v18);
    if ( v10 >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v18 + 24LL))(v18, 1LL, v21) >= 0 )
      {
        if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 184LL))(
                *(_QWORD *)(a1 - 112),
                v22) )
          CAppLayoutOperation::_AddAnimationData(a1 - 152, v22, (a3 & 1) != 0 ? 10 : 5);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        194LL,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v10);
    }
    *(_DWORD *)(a1 - 72) = 1;
    if ( (a3 & 1) != 0 )
    {
      *(_DWORD *)(a1 - 72) = 65;
      if ( (a3 & 2) == 0 )
      {
        *(_QWORD *)v17 = 0LL;
        v16 = 0LL;
        v11 = *(_QWORD *)(a1 - 112);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v11 + 104LL))(
               v11,
               0LL,
               1LL,
               &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
               v17) >= 0 )
        {
          v12 = *(_QWORD *)v17;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
          v13 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v12 + 48LL))(
                  v12,
                  &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
                  &v16);
          if ( v13 >= 0 )
          {
            Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v16);
            *(_DWORD *)(a1 - 72) |= 2u;
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              222LL,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
              (const char *)(unsigned int)v13);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
      }
    }
    if ( (a3 & 4) == 0 )
    {
      v14 = *(_DWORD *)(a1 - 72) | 0x10000;
      *(_DWORD *)(a1 - 72) = v14;
      if ( (a3 & 1) != 0 )
        *(_DWORD *)(a1 - 72) = v14 | 0x80000;
    }
    CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
    v8 = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
      (const char *)(unsigned int)v7);
  }
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v19);
  return v8;
}
