/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x180051700
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800407D0 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x180051588 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x180052210 (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180052340 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x18005301C (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180053114 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___ @ 0x180053414 (CClassicWindowManager--ForEachWindow__lambda_9464cc021c09e3331999e98539241978___.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800534FC (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180085804 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___ @ 0x180147FF0 (CClassicWindowManager--ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180148704 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180149750 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180149CD8 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CClassicWindowManager::HandleCreation(
        _QWORD *a1,
        struct IClassicWindow *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  CClassicWindowManager *v8; // r14
  _QWORD *v9; // r12
  HWND v10; // rdx
  char v11; // di
  struct IClassicWindow *v12; // r12
  __int64 v13; // rcx
  CApplicationManagerUtility *v14; // rax
  HWND v15; // rdx
  int v16; // edi
  struct IClassicWindow *v17; // rbx
  struct IClassicWindow **v18; // rcx
  int v20; // ebx
  __int64 v21; // r8
  unsigned int v22; // esi
  struct IClassicWindow **ClassicWindowOwner; // rax
  struct IClassicWindow *v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  CClassicWindowManager *v28; // rcx
  __int64 v29; // rdi
  __int128 v30; // [rsp+30h] [rbp-50h] BYREF
  __int128 v31; // [rsp+40h] [rbp-40h] BYREF
  __int64 v32; // [rsp+50h] [rbp-30h]
  __int128 v33; // [rsp+60h] [rbp-20h] BYREF
  __int128 v34; // [rsp+70h] [rbp-10h] BYREF
  struct IClassicWindow *v35; // [rsp+C0h] [rbp+40h] BYREF
  struct IClassicWindow *v36; // [rsp+C8h] [rbp+48h] BYREF

  v32 = -2LL;
  v8 = (CClassicWindowManager *)(a1 - 9);
  v9 = a1 + 14;
  v35 = a2;
  v11 = 1;
  if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
              a1 + 14,
              &v35,
              a3,
              &v36) >= 0 )
  {
    v12 = v36;
    v13 = *(_QWORD *)(a1[15] + 8LL * (_QWORD)v36);
    v14 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
    if ( CApplicationManagerUtility::IsValidWindow(v14, v15) )
    {
      v16 = -2147024713;
      v17 = *(struct IClassicWindow **)(a1[15] + 8LL * (_QWORD)v12);
      v35 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
      if ( a4 )
      {
        if ( a4 == 1 && (CClassicWindowManager::_ChangeWindowType(v8, v17, 4LL) & 4) != 0 )
        {
          *(_QWORD *)&v30 = v8;
          v36 = v17;
          *(_QWORD *)&v31 = &v36;
          *((_QWORD *)&v31 + 1) = &v30;
          v33 = v31;
          CClassicWindowManager::ForEachWindow__lambda_b77fcfdbe22bcc933e61e7bed288adf6___(v8, &v33);
        }
      }
      else
      {
        CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v8, v17, 9LL);
      }
      v18 = &v35;
      goto LABEL_8;
    }
    v9 = a1 + 14;
  }
  v20 = 0;
  if ( a4 )
  {
    if ( a4 == 1 )
    {
      v20 = 1;
      if ( CApplicationManagerUtility::IsOwnedWindow(a2, v10) )
        v20 = 5;
    }
  }
  else
  {
    v20 = 4;
  }
  v22 = v20 | 8;
  if ( !(unsigned int)GetPropW((HWND)a2, L"ITaskList_Deleted") )
    v22 = v20;
  if ( (v22 & 4) != 0 )
  {
    ClassicWindowOwner = (struct IClassicWindow **)CClassicWindowManager::GetClassicWindowOwner(v8, &v31, (HWND)a2);
  }
  else
  {
    *(_QWORD *)&v30 = 0LL;
    ClassicWindowOwner = (struct IClassicWindow **)&v30;
    v11 = 2;
  }
  v24 = 0LL;
  v36 = 0LL;
  if ( &v36 != ClassicWindowOwner )
  {
    v24 = *ClassicWindowOwner;
    v36 = *ClassicWindowOwner;
    *ClassicWindowOwner = 0LL;
  }
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
  }
  if ( (v11 & 1) != 0 )
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v35 = 0LL;
  *(_QWORD *)&v31 = a2;
  if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
              a1 + 19,
              &v31,
              v21,
              &v30) >= 0 )
  {
    v29 = v30;
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v35, a1[20] + 8 * v30);
    (*(void (__fastcall **)(_QWORD *, __int64))(a1[19] + 16LL))(a1 + 19, v29);
    v25 = (*(__int64 (__fastcall **)(struct IClassicWindow *, struct IClassicWindow *, __int64, _QWORD))(*(_QWORD *)v35 + 32LL))(
            v35,
            v24,
            a5,
            v22);
  }
  else
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    v25 = CClassicWindow::s_CreateInstance(a2, v24, a5, v22, &v35);
  }
  v16 = v25;
  if ( v25 < 0 )
    goto LABEL_37;
  *(_QWORD *)&v31 = v35;
  *(_QWORD *)&v30 = &v31;
  *((_QWORD *)&v30 + 1) = v8;
  v34 = v30;
  *(_QWORD *)&v30 = v24;
  *(_QWORD *)&v33 = &v30;
  *((_QWORD *)&v33 + 1) = &v34;
  CClassicWindowManager::ForEachWindow__lambda_9464cc021c09e3331999e98539241978___(v8, &v33);
  if ( (unsigned __int8)CClassicWindowManager::IsWindowPseudoTrayAfterChange(v27, v35, 0LL) )
    (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v35 + 112LL))(v35, 32LL);
  v16 = (*(__int64 (__fastcall **)(_QWORD *, struct IClassicWindow **))(*v9 + 8LL))(v9, &v35);
  if ( v16 < 0 )
  {
LABEL_37:
    if ( v35 )
      CClassicWindowManager::RemoveApplicationView(v26, v35, 0LL);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v35 + 120LL))(v35) )
  {
    CClassicWindowManager::AddApplicationView(v28, v35);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
  v18 = &v36;
LABEL_8:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  return v16 >= 0;
}
