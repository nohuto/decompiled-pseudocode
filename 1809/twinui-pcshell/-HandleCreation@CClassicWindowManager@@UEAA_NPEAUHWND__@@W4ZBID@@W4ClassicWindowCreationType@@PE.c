/*
 * XREFs of ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017174 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002D934 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___ @ 0x18004F2F0 (CClassicWindowManager--ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___.c)
 *     ?GetClassicWindowOwner@CClassicWindowManager@@AEAA?AV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEAUHWND__@@@Z @ 0x18004F5A8 (-GetClassicWindowOwner@CClassicWindowManager@@AEAA-AV-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@P.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004FCEC (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CLASSIC_WINDOW_STATE@@PEAPEAU3@@Z @ 0x18004FF5C (-s_CreateInstance@CClassicWindow@@SAJPEAUHWND__@@PEAUIClassicWindow@@PEAUIImmersiveMonitor@@W4CL.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180050088 (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     ?AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z @ 0x180050CF0 (-AddApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@@Z.c)
 *     ?IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180050FF0 (-IsOwnedWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFlags@@@Z @ 0x180080444 (-IsWindowPseudoTrayAfterChange@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@W4WindowChangeFl.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     CClassicWindowManager::ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___ @ 0x180102ABC (CClassicWindowManager--ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x180104320 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     ?_ChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180104898 (-_ChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z.c)
 *     ?_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA?AW4WindowChangeFlags@@PEAUIClassicWindow@@W42@@Z @ 0x180104A80 (-_CheckPseudoTrayAndChangeWindowType@CClassicWindowManager@@AEAA-AW4WindowChangeFlags@@PEAUIClas.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CClassicWindowManager::HandleCreation(
        _QWORD *a1,
        CApplicationManagerUtility *a2,
        __int64 a3,
        int a4,
        __int64 a5)
{
  CClassicWindowManager *v8; // r14
  HWND v9; // rdx
  int v10; // ebx
  __int64 v11; // r8
  unsigned int v12; // esi
  __int64 *ClassicWindowOwner; // rax
  char v14; // di
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rcx
  CClassicWindowManager *v20; // rcx
  struct IClassicWindow **v21; // rcx
  struct IClassicWindow *v23; // r12
  __int64 v24; // rcx
  CApplicationManagerUtility *v25; // rax
  HWND v26; // rdx
  struct IClassicWindow *v27; // rbx
  __int64 v28; // rdi
  _QWORD v29[2]; // [rsp+38h] [rbp-31h] BYREF
  __int128 v30; // [rsp+48h] [rbp-21h] BYREF
  __int128 v31; // [rsp+58h] [rbp-11h] BYREF
  __int64 v32; // [rsp+68h] [rbp-1h]
  __int128 v33; // [rsp+78h] [rbp+Fh] BYREF
  __int128 v34; // [rsp+88h] [rbp+1Fh] BYREF
  struct IClassicWindow *v35; // [rsp+C8h] [rbp+5Fh] BYREF

  v32 = -2LL;
  LODWORD(v35) = 0;
  v8 = (CClassicWindowManager *)(a1 - 9);
  if ( (int)CClassicWindowManager::_FindClassicWindow(
              (CClassicWindowManager *)(a1 - 9),
              (HWND)a2,
              0LL,
              (unsigned __int64 *)&v35) >= 0
    && (v23 = v35,
        v24 = *(_QWORD *)(a1[15] + 8LL * (_QWORD)v35),
        v25 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24),
        CApplicationManagerUtility::IsValidWindow(v25, v26)) )
  {
    v18 = -2147024713;
    v27 = *(struct IClassicWindow **)(a1[15] + 8LL * (_QWORD)v23);
    v35 = v27;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v35);
    if ( a4 )
    {
      if ( a4 == 1 && (CClassicWindowManager::_ChangeWindowType(v8, v27, 4LL) & 4) != 0 )
      {
        v29[0] = v8;
        *(_QWORD *)&v30 = v27;
        *(_QWORD *)&v31 = &v30;
        *((_QWORD *)&v31 + 1) = v29;
        v33 = v31;
        CClassicWindowManager::ForEachWindow__lambda_bcfdc10875d1c6a0a37f2a81b156c163___(v8, &v33);
      }
    }
    else
    {
      CClassicWindowManager::_CheckPseudoTrayAndChangeWindowType(v8, v27, 9LL);
    }
    v21 = &v35;
  }
  else
  {
    v10 = 0;
    if ( a4 )
    {
      if ( a4 == 1 )
      {
        v10 = 1;
        if ( CApplicationManagerUtility::IsOwnedWindow(a2, v9) )
          v10 = 5;
      }
    }
    else
    {
      v10 = 4;
    }
    v12 = v10 | 8;
    if ( !(unsigned int)GetPropW((HWND)a2, L"ITaskList_Deleted") )
      v12 = v10;
    if ( (v12 & 4) != 0 )
    {
      ClassicWindowOwner = (__int64 *)CClassicWindowManager::GetClassicWindowOwner(v8);
      v14 = 1;
    }
    else
    {
      *(_QWORD *)&v30 = 0LL;
      ClassicWindowOwner = (__int64 *)&v30;
      v14 = 2;
    }
    v15 = 0LL;
    v29[0] = 0LL;
    if ( v29 != ClassicWindowOwner )
    {
      v15 = *ClassicWindowOwner;
      v29[0] = *ClassicWindowOwner;
      *ClassicWindowOwner = 0LL;
    }
    if ( (v14 & 2) != 0 )
    {
      v14 &= ~2u;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
    }
    if ( (v14 & 1) != 0 )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
    v35 = 0LL;
    *(_QWORD *)&v31 = a2;
    if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
                a1 + 19,
                &v31,
                v11,
                &v30) >= 0 )
    {
      v28 = v30;
      Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&v35, (__int64 *)(a1[20] + 8 * v30));
      (*(void (__fastcall **)(_QWORD *, __int64))(a1[19] + 16LL))(a1 + 19, v28);
      v16 = (*(__int64 (__fastcall **)(struct IClassicWindow *, __int64, __int64, _QWORD))(*(_QWORD *)v35 + 32LL))(
              v35,
              v15,
              a5,
              v12);
    }
    else
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
      v16 = CClassicWindow::s_CreateInstance(a2, v15, a5, v12, &v35);
    }
    v18 = v16;
    if ( v16 < 0 )
      goto LABEL_36;
    *(_QWORD *)&v31 = v35;
    *(_QWORD *)&v30 = &v31;
    *((_QWORD *)&v30 + 1) = v8;
    v34 = v30;
    *(_QWORD *)&v30 = v15;
    *(_QWORD *)&v33 = &v30;
    *((_QWORD *)&v33 + 1) = &v34;
    CClassicWindowManager::ForEachWindow__lambda_112194e36b596ea154c29301def5bbd2___(v8, &v33);
    if ( (unsigned __int8)CClassicWindowManager::IsWindowPseudoTrayAfterChange(v19, v35, 0LL) )
      (*(void (__fastcall **)(struct IClassicWindow *, __int64))(*(_QWORD *)v35 + 112LL))(v35, 32LL);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, struct IClassicWindow **))(a1[14] + 8LL))(a1 + 14, &v35);
    if ( v18 < 0 )
    {
LABEL_36:
      if ( v35 )
        CClassicWindowManager::RemoveApplicationView(v17, v35, 0LL);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v35 + 120LL))(v35) )
    {
      CClassicWindowManager::AddApplicationView(v20, v35);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v35);
    v21 = (struct IClassicWindow **)v29;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v21);
  return v18 >= 0;
}
