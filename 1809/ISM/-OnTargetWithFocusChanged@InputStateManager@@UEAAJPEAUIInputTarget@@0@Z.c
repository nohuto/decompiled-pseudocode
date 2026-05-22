/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180053A30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x18000C4B4 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180030728 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x1800309E4 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180033D68 (-SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows.c)
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180053CB8 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnTargetWithFocusChanged(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct ControllerNavigationManager *ControllerNavigationManager; // rbx
  char v13; // di
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  __int16 v17; // dx
  int v18; // eax
  _DWORD *v19; // r8
  __int64 v20; // rcx
  __int64 v22; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v23[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v25; // [rsp+70h] [rbp+30h] BYREF
  int v26; // [rsp+88h] [rbp+48h] BYREF

  v23[1] = (__int64 *)-2LL;
  v6 = *((_QWORD *)this + 7);
  v7 = *((_QWORD *)this + 8);
  while ( 1 )
  {
    if ( v6 == v7 )
    {
      ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
      LODWORD(v25) = 0;
      v13 = 1;
      if ( a3 )
      {
        v22 = 0LL;
        if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
               a3,
               &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
               &v22) >= 0 )
        {
          v26 = 0;
          v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 32LL))(v22, &v25);
          v15 = retaddr;
          if ( v14 < 0 )
            goto LABEL_30;
          v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 48LL))(v22, &v26);
          if ( v16 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0xDB,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerna"
                       "vigationmanager.cpp",
              (const char *)(unsigned int)v16);
            JUMPOUT(0x180053CAFLL);
          }
          v13 = v26 != 0;
        }
        v11 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      if ( *((_BYTE *)ControllerNavigationManager + 228) == v13 )
        goto LABEL_19;
      *((_BYTE *)ControllerNavigationManager + 228) = v13;
      v17 = 196;
      if ( !v13 )
        v17 = 27;
      v18 = ControllerProcessor::SetControllerVirtualKeyMappingFor(v11, v17);
      if ( v18 >= 0 )
      {
LABEL_19:
        if ( *((_DWORD *)ControllerNavigationManager + 56) != (_DWORD)v25 )
        {
          std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
            (_QWORD *)ControllerNavigationManager + 16,
            v23,
            (_DWORD *)ControllerNavigationManager + 56);
          if ( v23[0] != *((__int64 **)ControllerNavigationManager + 17) )
            *(_BYTE *)(v23[0][3] + 80) = 1;
          *v19 = v25;
          std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
            (_QWORD *)ControllerNavigationManager + 16,
            v23,
            v19);
          if ( v23[0] == *((__int64 **)ControllerNavigationManager + 17) )
            ControllerNavigationManager::DisableNavigation(ControllerNavigationManager);
          else
            ControllerNavigationManager::SetCurrentStateWithClient(
              ControllerNavigationManager,
              *((struct BamoControllerNavigationClientProxy **)v23[0] + 3));
        }
        InputStateManager::NotifyForegroundChange((InputStateManager *)((char *)this - 16), a2, a3);
        return 0LL;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE5,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_30:
      wil::details::in1diag3::FailFast_Hr(
        v15,
        (void *)0xD9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    v25 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 8))(
           *(_QWORD *)(v6 + 8),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v25) >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v25 + 24LL))(
             v25,
             a2,
             a3);
      v9 = v8;
      if ( v8 < 0 )
        break;
    }
    v10 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v6 += 16LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AC,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
    (const char *)(unsigned int)v8);
  v20 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return v9;
}
