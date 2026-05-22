/*
 * XREFs of ?OnGazeUpdate@MPCHandProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180135AE0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086124 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800864EC (-GetWorkspaceId@MPCGestureHandlerManager@@QEAAKV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008656C (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008669C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800868F0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCHandProcessor::OnGazeUpdate(
        MPCHandProcessor *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  struct BamoMPCConstantManagerClientPrincipal *v6; // rbx
  unsigned __int64 v7; // r14
  int v8; // eax
  char Static; // bl
  _OWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 *v13; // rax
  __int64 v14; // rax
  char *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // rax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int WorkspaceId; // eax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 *v36; // rax
  __int64 **v37; // rax
  __int64 **v38; // rbx
  __int64 *v39; // rax
  const char *v40; // r9
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 *v43; // rax
  _QWORD v44[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v45[24]; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+48h] [rbp-B8h]
  char v47; // [rsp+C8h] [rbp-38h] BYREF
  int v48; // [rsp+CCh] [rbp-34h]
  int v49; // [rsp+D0h] [rbp-30h]
  __int128 v50; // [rsp+D4h] [rbp-2Ch]
  int v51; // [rsp+E8h] [rbp-18h]
  char v52; // [rsp+1F9h] [rbp+F9h]
  char v53; // [rsp+208h] [rbp+108h]
  int v54; // [rsp+2C0h] [rbp+1C0h]
  int v55; // [rsp+2D0h] [rbp+1D0h]
  int v56; // [rsp+2D4h] [rbp+1D4h]
  __int128 v57; // [rsp+2D8h] [rbp+1D8h]
  int v58; // [rsp+2E8h] [rbp+1E8h]
  bool v59; // [rsp+2ECh] [rbp+1ECh]
  wil::details::in1diag3 *retaddr; // [rsp+858h] [rbp+758h]

  if ( *((_BYTE *)this + 4608) )
  {
    v6 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
      __debugbreak();
    }
    v7 = (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24);
    v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 48LL))(v7);
    Static = MPCConstantManager::GetStaticConstant<bool>((__int64)v6, v8, L"DisableInputInjection");
    if ( MPCInputProviderBase::IsPrimary(this) && !Static )
    {
      v10 = (_OWORD *)((char *)a2 + 152);
      if ( *((_BYTE *)a2 + 152) )
      {
        MPCGestureHandlerManager::GetInstance();
        v12 = v11;
        v13 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                v44,
                v7);
        if ( !MPCGestureHandlerManager::IsInjecting(v12, v13) && !*((_BYTE *)a2 + 474) )
        {
          memset_0(v45, 0, 0x7F0uLL);
          v14 = 2LL;
          v46 = 2032;
          v15 = &v47;
          do
          {
            v16 = v10[1];
            *(_OWORD *)v15 = *v10;
            v17 = v10[2];
            *((_OWORD *)v15 + 1) = v16;
            v18 = v10[3];
            *((_OWORD *)v15 + 2) = v17;
            v19 = v10[4];
            *((_OWORD *)v15 + 3) = v18;
            v20 = v10[5];
            *((_OWORD *)v15 + 4) = v19;
            v21 = v10[6];
            *((_OWORD *)v15 + 5) = v20;
            v22 = v10[7];
            v10 += 8;
            *((_OWORD *)v15 + 6) = v21;
            v15 += 128;
            *((_OWORD *)v15 - 1) = v22;
            --v14;
          }
          while ( v14 );
          v23 = *((_QWORD *)v10 + 8);
          v24 = v10[1];
          *(_OWORD *)v15 = *v10;
          v25 = v10[2];
          *((_OWORD *)v15 + 1) = v24;
          v26 = v10[3];
          *((_OWORD *)v15 + 2) = v25;
          *((_OWORD *)v15 + 3) = v26;
          *((_QWORD *)v15 + 8) = v23;
          WorkspaceId = v51;
          v59 = v52 != 0;
          v55 = v48;
          v54 = 4;
          v56 = v49;
          v57 = v50;
          goto LABEL_17;
        }
      }
    }
    if ( !*((_QWORD *)this + 571) )
    {
      MPCGestureHandlerManager::GetInstance();
      v29 = v28;
      v30 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(v44, v7);
      if ( MPCGestureHandlerManager::IsInjecting(v29, v30)
        || (MPCGestureHandlerManager::GetInstance(),
            v32 = v31,
            v33 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                    v44,
                    v7),
            MPCGestureHandlerManager::IsHovering(v32, v33)) )
      {
        if ( !*((_BYTE *)a2 + 474) )
        {
          memset_0(v45, 0, 0x7F0uLL);
          v46 = 2032;
          v54 = 2;
          MPCGestureHandlerManager::GetInstance();
          v35 = v34;
          v36 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v44,
                  v7);
          WorkspaceId = MPCGestureHandlerManager::GetWorkspaceId(v35, v36);
          v47 = 1;
          v53 = 1;
LABEL_17:
          v58 = WorkspaceId;
          MPCGestureHandlerManager::GetInstance();
          v38 = v37;
          v39 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  v44,
                  v7);
          MPCGestureHandlerManager::DownLevelTo2D(v38, (__int64)v45, v39, v40);
        }
      }
    }
  }
  MPCGestureHandlerManager::GetInstance();
  v42 = v41;
  v43 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
          v44,
          (unsigned __int64)this & -(__int64)(this != (MPCHandProcessor *)24));
  MPCGestureHandlerManager::OnGazeUpdate(v42, v43);
}
