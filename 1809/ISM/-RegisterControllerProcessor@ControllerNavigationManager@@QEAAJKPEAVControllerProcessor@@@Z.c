/*
 * XREFs of ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x18003031C
 * Callers:
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180033244 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ??$_Insert@AEAU?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAUDeviceInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@@Z @ 0x180026654 (--$_Insert@AEAU-$pair@$$CBKPEAUDeviceInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Li.c)
 *     ??$_Buynode@AEBKAEAPEAUIRawInputProvider@@@?$_List_buy@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@1@PEAU21@0AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800269E0 (--$_Buynode@AEBKAEAPEAUIRawInputProvider@@@-$_List_buy@U-$pair@$$CBKPEAUIRawInputProvider@@@std@.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18002F774 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800315B4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamep.c)
 *     ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180033D68 (-SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x180034170 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x1800341D0 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180034230 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::RegisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2,
        struct ControllerProcessor *a3)
{
  bool v4; // r15
  _QWORD *v5; // rsi
  _QWORD *v6; // r14
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  ControllerProcessor *v13; // rsi
  unsigned int v14; // ebx
  struct tagRECT v15; // xmm6
  struct tagPOINT *v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  unsigned int v19; // r14d
  struct tagRECT v20; // xmm6
  struct tagPOINT v21; // rax
  struct tagRECT v23; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v24; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  struct tagPOINT v26; // [rsp+B0h] [rbp+40h] BYREF
  int v27; // [rsp+B8h] [rbp+48h] BYREF
  ControllerProcessor *v28; // [rsp+C0h] [rbp+50h] BYREF
  int v29; // [rsp+C8h] [rbp+58h] BYREF
  __int16 y; // [rsp+CCh] [rbp+5Ch]

  v28 = a3;
  v27 = a2;
  v4 = *((_QWORD *)this + 10) == 0LL;
  v5 = (_QWORD *)**((_QWORD **)this + 9);
  v6 = (_QWORD *)v5[1];
  v7 = std::_List_buy<std::pair<unsigned long const,IRawInputProvider *>>::_Buynode<unsigned long const &,IRawInputProvider * &>(
         (__int64)this,
         v5,
         v6,
         &v27,
         &v28);
  v8 = *((_QWORD *)this + 10);
  if ( v8 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)this + 10) = v8 + 1;
  v5[1] = v7;
  *v6 = v7;
  std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,DeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>(
    (float *)this + 16,
    (__int64)&v24,
    (_DWORD *)(**((_QWORD **)this + 9) + 16LL),
    **((__int64 ***)this + 9));
  v10 = 196LL;
  if ( !*((_BYTE *)this + 228) )
    v10 = 27LL;
  v11 = ControllerProcessor::SetControllerVirtualKeyMappingFor(v9, v10);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x1800305F1LL);
  }
  v12 = *((_QWORD *)this + 24);
  v13 = v28;
  if ( v12 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v12 + 8) + 32LL))(v12 + 8) )
    {
      ControllerProcessor::UpdateNavigationState(v13, 1LL, 0LL);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 40LL))(*((_QWORD *)this + 24) + 8LL);
      v15 = *(struct tagRECT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 48LL))(*((_QWORD *)this + 24) + 8LL);
      v16 = (struct tagPOINT *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 56LL))(*((_QWORD *)this + 24) + 8LL);
      v23 = v15;
      ControllerProcessor::NavigationResume(v13, v14, &v23, *v16);
    }
  }
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 16,
    (__int64 **)&v26,
    (_DWORD *)this + 56);
  if ( v26 != *((_QWORD *)this + 17) )
  {
    v17 = *(_QWORD **)(*(_QWORD *)&v26 + 24LL);
    *(_QWORD *)&v23.left = v17;
    if ( v17 )
      (*(void (__fastcall **)(_QWORD *))*v17)(v17);
    v18 = v17 + 1;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(v17[1] + 32LL))(v17 + 1) )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD *))(*v18 + 40LL))(v17 + 1);
      v20 = *(struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 48LL))(v17 + 1);
      v21 = *(struct tagPOINT *)(*(__int64 (__fastcall **)(_QWORD *))(*v18 + 56LL))(v17 + 1);
      v24 = v20;
      v26 = v21;
      if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
      {
        if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
          wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetCachedFeatureEnabledState();
        v26.x = 0;
        LOBYTE(v26.y) = 0;
        v29 = 0;
        y = v26.y;
        wil::details::ReportUsageToService(
          &`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad>::GetFeaturePropertyCache'::`2'::data,
          0xADAF72u,
          (const struct FEATURE_LOGGED_TRAITS *)&v29,
          0,
          3);
      }
      else
      {
        ControllerProcessor::NavigationEnable(v13, v19, &v24, (struct tagPOINT)&v26, 1, v4);
      }
    }
    else
    {
      ControllerProcessor::UpdateNavigationState(v13, 2LL, 0LL);
    }
    (*(void (__fastcall **)(_QWORD *))(*v17 + 8LL))(v17);
  }
  return 0LL;
}
