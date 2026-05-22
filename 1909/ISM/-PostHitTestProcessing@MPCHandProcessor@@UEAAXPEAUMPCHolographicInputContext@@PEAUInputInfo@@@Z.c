/*
 * XREFs of ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180135FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18003787F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18008645C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D110 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140C30 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCHandProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  const char *v5; // r9
  struct BamoMPCConstantManagerClientPrincipal *v6; // rbx
  unsigned __int64 v7; // r13
  int v8; // eax
  int v9; // ebp
  const char *v10; // r9
  struct BamoMPCConstantManagerClientPrincipal *v11; // rbx
  int v12; // eax
  MPCSlateDeadzoneHelper *v13; // rax
  volatile signed __int32 *v14; // rbx
  char v15; // dl
  MPCSlateDeadzoneHelper *v16; // rax
  volatile signed __int32 *v17; // rcx
  char v18; // di
  MPCSlateDeadzoneHelper *v19; // rax
  int v20; // xmm1_4
  volatile signed __int32 *v21; // rcx
  char v22; // bl
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 *v26; // rax
  MPCSlateDeadzoneHelper *v27; // rsi
  float v28; // xmm6_4
  float v29; // xmm7_4
  float v30; // xmm8_4
  unsigned __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 *v34; // rax
  char IsInjecting; // al
  MPCSlateDeadzoneHelper *v36; // rax
  volatile signed __int32 *v37; // rcx
  char v38; // bl
  bool v39; // zf
  __int128 v40; // xmm0
  __int64 **v41; // rax
  __int64 **v42; // rbx
  __int64 *v43; // rax
  const char *v44; // r9
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  std::_Ref_count_base *v46; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v47; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v48; // [rsp+C8h] [rbp+20h] BYREF

  LODWORD(v46) = 0;
  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    v6 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v5);
      __debugbreak();
    }
    v7 = this & -(__int64)(this != 24);
    v8 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 48LL))(v7);
    if ( !MPCConstantManager::GetStaticConstant<bool>((__int64)v6, v8, L"DisableInputInjection") )
    {
      v9 = 0;
      MPCSlateDeadzoneHelper::UpdateState(
        *(MPCSlateDeadzoneHelper **)(this + 4624),
        *((_BYTE *)a3 + 475) != 0,
        *((_QWORD *)a3 + 2),
        *((float *)a3 + 39),
        *((float *)a3 + 40),
        1.0);
      v11 = MPCConstantManager::s_instance;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v10);
        __debugbreak();
      }
      v12 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v7 + 48LL))(this & -(__int64)(this != 24));
      if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v11, v12, L"UseSphereCollideablePointsForHitTesting") )
      {
        v9 = *((_BYTE *)a3 + 152) != 0 ? 7 : 2;
LABEL_51:
        v36 = *(MPCSlateDeadzoneHelper **)(this + 4624);
        v37 = (volatile signed __int32 *)*((_QWORD *)v36 + 3);
        if ( v37 )
        {
          _InterlockedIncrement(v37 + 2);
          v37 = (volatile signed __int32 *)*((_QWORD *)v36 + 3);
        }
        v38 = *(_BYTE *)(*((_QWORD *)v36 + 2) + 12LL);
        if ( v37 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v37);
        if ( v38 )
          a3 = (struct InputInfo *)(this + 6664);
        v39 = *((_BYTE *)a3 + 457) == 0;
        v40 = *(_OWORD *)((char *)a3 + 164);
        *((_DWORD *)a3 + 168) = *((_DWORD *)a3 + 39);
        *((_DWORD *)a3 + 169) = *((_DWORD *)a3 + 40);
        *((_DWORD *)a3 + 174) = *((_DWORD *)a3 + 46);
        *((_BYTE *)a3 + 700) = !v39;
        *((_DWORD *)a3 + 164) = v9;
        *(_OWORD *)((char *)a3 + 680) = v40;
        if ( *((_BYTE *)a3 + 152) )
        {
          MPCGestureHandlerManager::GetInstance();
          v42 = v41;
          v43 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                  &v48,
                  this & -(__int64)(this != 24));
          MPCGestureHandlerManager::DownLevelTo2D(v42, (__int64)a3, v43, v44);
        }
        return;
      }
      v13 = *(MPCSlateDeadzoneHelper **)(this + 4624);
      v14 = (volatile signed __int32 *)*((_QWORD *)v13 + 3);
      if ( v14 )
      {
        _InterlockedIncrement(v14 + 2);
        v14 = (volatile signed __int32 *)*((_QWORD *)v13 + 3);
      }
      v15 = 1;
      if ( *(_BYTE *)(*((_QWORD *)v13 + 2) + 8LL) )
      {
        v17 = (volatile signed __int32 *)v46;
      }
      else
      {
        v16 = *(MPCSlateDeadzoneHelper **)(this + 4624);
        v17 = (volatile signed __int32 *)*((_QWORD *)v16 + 3);
        if ( v17 )
        {
          _InterlockedIncrement(v17 + 2);
          v17 = (volatile signed __int32 *)*((_QWORD *)v16 + 3);
        }
        v15 = 3;
        if ( !*(_BYTE *)(*((_QWORD *)v16 + 2) + 12LL) )
        {
          v18 = 0;
LABEL_18:
          if ( (v15 & 2) != 0 && v17 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v17);
          if ( v14 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
          if ( v18 )
          {
            v19 = *(MPCSlateDeadzoneHelper **)(this + 4624);
            if ( !*((_BYTE *)v19 + 13) )
            {
              v20 = *((_DWORD *)v19 + 2);
              *((_DWORD *)a3 + 39) = *((_DWORD *)v19 + 1);
              *((_DWORD *)a3 + 40) = v20;
              v19 = *(MPCSlateDeadzoneHelper **)(this + 4624);
            }
            v21 = (volatile signed __int32 *)*((_QWORD *)v19 + 3);
            if ( v21 )
            {
              _InterlockedIncrement(v21 + 2);
              v21 = (volatile signed __int32 *)*((_QWORD *)v19 + 3);
            }
            v22 = *(_BYTE *)(*((_QWORD *)v19 + 2) + 8LL);
            if ( v21 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v21);
            if ( v22 )
            {
              memcpy_0((void *)(this + 6664), a3, 0x7F0uLL);
LABEL_50:
              v9 = 7;
              goto LABEL_51;
            }
          }
          else
          {
            if ( !*((_BYTE *)a3 + 152) )
              goto LABEL_51;
            v23 = *(_DWORD *)a3 & 0x662600;
            if ( !*(_BYTE *)(this + 4608) )
            {
              if ( !v23 )
                goto LABEL_43;
              if ( *((_DWORD *)a3 + 16) == 3 )
                goto LABEL_41;
              if ( *((_DWORD *)a3 + 16) != 2 )
              {
LABEL_43:
                MPCGestureHandlerManager::GetInstance();
                v25 = v24;
                v26 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                        &v46,
                        this & -(__int64)(this != 24));
                if ( !MPCGestureHandlerManager::IsInjecting(v25, v26) )
                {
                  if ( (*(_DWORD *)a3 & 0x662600) != 0 && *((_DWORD *)a3 + 16) == 6 )
                    v9 = 4;
                  goto LABEL_51;
                }
              }
              v27 = *(MPCSlateDeadzoneHelper **)(this + 4616);
              v28 = *((float *)a3 + 54);
              v29 = *((float *)a3 + 40);
              v30 = *((float *)a3 + 39);
              v31 = *((_QWORD *)a3 + 2);
              MPCGestureHandlerManager::GetInstance();
              v33 = v32;
              v34 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                      &v47,
                      this & -(__int64)(this != 24));
              IsInjecting = MPCGestureHandlerManager::IsInjecting(v33, v34);
              MPCSlateDeadzoneHelper::UpdateState(v27, IsInjecting, v31, v30, v29, v28);
              if ( ((*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 2)
                && !*(_BYTE *)(*(_QWORD *)(this + 4616) + 13LL) )
              {
                goto LABEL_51;
              }
              goto LABEL_50;
            }
            if ( !v23 )
              goto LABEL_51;
            if ( *((_DWORD *)a3 + 16) == 2 )
            {
              v9 = 1;
              goto LABEL_51;
            }
            if ( *((_DWORD *)a3 + 16) != 3 )
              goto LABEL_51;
          }
LABEL_41:
          v9 = 2;
          goto LABEL_51;
        }
      }
      v18 = 1;
      goto LABEL_18;
    }
  }
}
