/*
 * XREFs of ?OnGazeUpdate@MPCVoiceProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x18012BFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180057368 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180086124 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800863AC (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ??$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z @ 0x18012BB6C (--$GetStaticConstant@_N@MPCConstantManager@@QEAA_NW4InputType@@PEBG@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x18013D0D0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCVoiceProcessor::OnGazeUpdate(MPCVoiceProcessor *this, struct InputInfo *a2)
{
  const char *v4; // r9
  struct BamoMPCConstantManagerClientPrincipal *v5; // rbx
  int v6; // eax
  bool v7; // zf
  __int128 v8; // xmm0
  __int64 **v9; // rax
  __int64 **v10; // rbx
  __int64 *v11; // rax
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) && *((_BYTE *)a2 + 152) )
  {
    v5 = MPCConstantManager::s_instance;
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v4);
      __debugbreak();
    }
    v6 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)((unsigned __int64)this & -(__int64)(this != (MPCVoiceProcessor *)24))
                                                     + 48LL))((unsigned __int64)this & -(__int64)(this != (MPCVoiceProcessor *)24));
    if ( MPCConstantManager::GetStaticConstant<bool>((__int64)v5, v6, L"AllowDownleveling") )
    {
      v7 = *((_BYTE *)a2 + 457) == 0;
      v8 = *(_OWORD *)((char *)a2 + 164);
      *((_DWORD *)a2 + 168) = *((_DWORD *)a2 + 39);
      *((_DWORD *)a2 + 169) = *((_DWORD *)a2 + 40);
      *((_DWORD *)a2 + 174) = *((_DWORD *)a2 + 46);
      *((_BYTE *)a2 + 700) = !v7;
      *((_DWORD *)a2 + 164) = 4;
      *(_OWORD *)((char *)a2 + 680) = v8;
      MPCGestureHandlerManager::GetInstance();
      v10 = v9;
      v11 = wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(
              &v14,
              (unsigned __int64)this & -(__int64)(this != (MPCVoiceProcessor *)24));
      MPCGestureHandlerManager::DownLevelTo2D(v10, (__int64)a2, v11, v12);
    }
  }
}
