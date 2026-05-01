/*
 * XREFs of ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18011C1BC
 * Callers:
 *     ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x1800614C0 (-ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUII.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEachBackwards__lambda_102eb91890a206a003c0de1a94bbc83e___ @ 0x18010B1AC (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEachBackw.c)
 *     ?ForgetAllApplications@CApplicationManager@@UEAAXXZ @ 0x180111070 (-ForgetAllApplications@CApplicationManager@@UEAAXXZ.c)
 *     ?ForgetApplication@CApplicationManager@@UEAAJPEBG@Z @ 0x180111110 (-ForgetApplication@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1801111E0 (-ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z.c)
 *     ?ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z @ 0x1801112B0 (-ForgetApplicationsInPackage@CApplicationManager@@UEAAJPEBG@Z.c)
 *     ?TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PEBUTransferWindowOptions@@@Z @ 0x18011A900 (-TransferAllWindowsBetweenGloms@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@0PE.c)
 *     ?UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18011AED0 (-UnensureApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x18011C8D4 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x18011FBA0 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 * Callees:
 *     ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x18005FC5C (-_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCImmersiveAppFinderByHostId@@@?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@_KPEA_K@Z @ 0x18010B284 (--$GetAppPosition@VCImmersiveAppFinderByHostId@@@-$CActivationBasedCollection@V-$ComPtr@UIImmers.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x18011BC04 (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z @ 0x18011FAC4 (-_RemoveApplication@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@@Z.c)
 *     WPP_SF_S @ 0x180120C94 (WPP_SF_S.c)
 *     WPP_SF_qSdL @ 0x180120E6C (WPP_SF_qSdL.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_ForgetApplicationNoLock(
        CApplicationManager *a1,
        struct IImmersiveApplicationInternal *a2,
        unsigned int a3)
{
  char v3; // di
  char v6; // bl
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  int (__fastcall *v10)(struct IImmersiveApplicationInternal *, GUID *, __int64 *); // rbx
  __int64 v11; // r8
  const unsigned __int16 *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  void (__fastcall *v16)(char *, unsigned __int64 *); // rbx
  int (__fastcall *v17)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *); // rbx
  unsigned int i; // r14d
  __int64 v19; // rbx
  int (__fastcall *v20)(__int64, _QWORD, GUID *, unsigned __int64 *); // rdi
  __int64 v22; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  HWND v25[3]; // [rsp+58h] [rbp-18h] BYREF
  char v26; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp+48h] BYREF

  v25[1] = (HWND)-2LL;
  v3 = a3;
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, _QWORD, char *))(*(_QWORD *)a2 + 152LL))(a2, a3, &v26);
  CApplicationManager::_RemoveApplication(a1, a2);
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 160LL))(a2);
    v7 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
    WPP_SF_qSdL(*((_QWORD *)WPP_GLOBAL_Control + 2), v8, v9, (_DWORD)a2, v7, v6, v3);
  }
  v24 = -1LL;
  v23 = 0LL;
  v10 = **(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  if ( v10(a2, &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1, &v23) >= 0
    && (*(int (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v24) >= 0 )
  {
    v27 = v24;
    if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::GetAppPosition<CImmersiveAppFinderByHostId>(
                (__int64)a1 + 624,
                &v27,
                v11,
                v25) < 0 )
    {
      v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
      CApplicationManager::_DeleteApplicationData(a1, v12, &v24);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v13 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a2 + 24LL))(a2);
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), v14, v15, v13);
      }
    }
  }
  if ( v26 )
  {
    v16 = *(void (__fastcall **)(char *, unsigned __int64 *))(*((_QWORD *)a1 + 88) + 8LL);
    v27 = (unsigned __int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
    v16((char *)a1 + 704, &v27);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
    v22 = 0LL;
    v17 = *(int (__fastcall **)(struct IImmersiveApplicationInternal *, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 352LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( v17(a2, 1LL, &GUID_5632b1a4_e38a_400a_928a_d4cd63230295, &v22) >= 0 )
    {
      v27 = 0LL;
      for ( i = 0; ; ++i )
      {
        v19 = v22;
        v20 = *(int (__fastcall **)(__int64, _QWORD, GUID *, unsigned __int64 *))(*(_QWORD *)v22 + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        if ( v20(v19, i, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v27) < 0 )
          break;
        if ( (*(int (__fastcall **)(unsigned __int64, HWND *))(*(_QWORD *)v27 + 32LL))(v27, v25) >= 0 )
          CApplicationManager::_UpdatePerApplicationDataIfNeeded((__int64)a1, (__int64)a2, v25[0], 1);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
}
