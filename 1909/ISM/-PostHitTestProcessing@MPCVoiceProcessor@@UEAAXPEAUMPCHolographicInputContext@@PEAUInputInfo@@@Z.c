/*
 * XREFs of ?PostHitTestProcessing@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18012C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x1800570C8 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x1800817C0 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180085EE4 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x18008616C (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D110 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCVoiceProcessor::PostHitTestProcessing(
        MPCVoiceProcessor *this,
        struct MPCHolographicInputContext *a2,
        struct InputInfo *a3)
{
  const char *v5; // r9
  MPCHolographicInputManager *Instance; // rbx
  struct MPCHolographicInputManager *v7; // rax
  struct BamoMPCConstantManagerClientPrincipal *v8; // rbx
  int v9; // eax
  const char *v10; // r9
  bool v11; // zf
  __int128 v12; // xmm0
  __int64 **v13; // rax
  __int64 **v14; // rbx
  __int64 *v15; // rax
  const char *v16; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this)
    || (Instance = MPCHolographicInputManager::GetInstance(),
        v7 = MPCHolographicInputManager::GetInstance(),
        MPCHolographicInputManager::IsProviderPrimary(Instance, *((const struct IMPCInputProviderBase **)v7 + 293))) )
  {
    if ( *((_BYTE *)a3 + 152) )
    {
      v8 = MPCConstantManager::s_instance;
      if ( !MPCConstantManager::s_instance )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v5);
        __debugbreak();
      }
      v9 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCVoiceProcessor *)24))
                                                       + 48LL))((unsigned __int64)this & -(__int64)(this != (MPCVoiceProcessor *)24));
      if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v8, v9, L"AllowDownleveling") )
      {
        if ( *((_DWORD *)a3 + 16) != 7 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            93LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
            v10);
          __debugbreak();
        }
        v11 = *((_BYTE *)a3 + 457) == 0;
        v12 = *(_OWORD *)((char *)a3 + 164);
        *((_DWORD *)a3 + 168) = *((_DWORD *)a3 + 39);
        *((_DWORD *)a3 + 169) = *((_DWORD *)a3 + 40);
        *((_DWORD *)a3 + 174) = *((_DWORD *)a3 + 46);
        *((_BYTE *)a3 + 700) = !v11;
        *((_DWORD *)a3 + 164) = 3;
        *(_OWORD *)((char *)a3 + 680) = v12;
        MPCGestureHandlerManager::GetInstance();
        v14 = v13;
        v15 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
                &v18,
                (unsigned __int64)this & -(__int64)(this != (MPCVoiceProcessor *)24));
        MPCGestureHandlerManager::DownLevelTo2D(v14, (__int64)a3, v15, v16);
      }
    }
  }
}
