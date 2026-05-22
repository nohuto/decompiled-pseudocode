/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180035A74
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x18000C4B4 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x1800354F8 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180035EE0 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x180036138 (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x1800363C8 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm1_4
  float v3; // xmm0_4
  float v4; // xmm2_4
  int v5; // eax
  int v6; // eax
  unsigned __int64 *CursorPosition; // rax
  LONG y; // r14d
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r12
  LONG v11; // r14d
  struct tagPOINT v12; // rbx
  int v13; // r11d
  int v14; // esi
  unsigned int v15; // r10d
  bool v16; // r15
  bool v17; // r14
  __int64 v18; // rcx
  const char *v19; // r9
  int v20; // eax
  int v21; // eax
  struct ControllerNavigationManager *ControllerNavigationManager; // rbx
  const char *v23; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+38h]
  struct tagPOINT v26; // [rsp+60h] [rbp+40h] BYREF
  struct tagPOINT v27; // [rsp+68h] [rbp+48h] BYREF

  v1 = *((float *)this + 447);
  v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
  if ( v3 >= 1.0 || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 448)) & _xmm) >= 1.0 )
  {
    v4 = *((float *)this + 448);
    v26.x = (int)v1;
    v26.y = (int)v4;
    *((float *)this + 447) = v1 - (float)(int)v1;
    *((float *)this + 448) = v4 - (float)(int)v4;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 836) + 80LL))(*((_QWORD *)this + 836)) )
    {
      v5 = ControllerProcessor::SendPointerDelta(this, v26);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x626,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
      if ( (*((_BYTE *)this + 1776) & 0x20) == 0 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 858) + 96LL))(*((_QWORD *)this + 858));
        if ( v6 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x62A,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v6);
          __debugbreak();
        }
      }
    }
    else
    {
      CursorPosition = (unsigned __int64 *)ControllerProcessor::GetCursorPosition(this, &v27);
      y = v26.y;
      v9 = *CursorPosition;
      *(_QWORD *)((char *)this + 1780) = *CursorPosition;
      v10 = HIDWORD(v9);
      v11 = HIDWORD(v9) + y;
      v26.y = v11;
      v26.x = v9 + (int)v1;
      v12 = ControllerProcessor::AdjustPointToBounds(v26, (struct tagRECT *)this + 110);
      v14 = 1;
      v16 = v12 != __PAIR64__(v11, v15);
      v17 = v12.x == *((_DWORD *)this + 440)
         || v12.x == *((_DWORD *)this + 442) - 1
         || v12.y == *((_DWORD *)this + 441)
         || v12.y == *((_DWORD *)this + 443) - 1;
      if ( v13 == v12.x && (_DWORD)v10 == v12.y )
        v14 = 0;
      if ( *((_BYTE *)this + 1824) && v14 && PtInRect((const RECT *)this + 113, v12) )
      {
        v26 = v12;
        v18 = *((_QWORD *)ISMStatics::GetControllerNavigationManager() + 24);
        if ( !v18 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xC0,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavi"
                     "gationmanager.cpp",
            v19);
          __debugbreak();
        }
        (*(void (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)(v18 + 8) + 24LL))(v18 + 8, &v26);
      }
      v20 = ControllerProcessor::SetPointerPosition(this, v12, v16);
      if ( v20 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x652,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      if ( (*((_BYTE *)this + 1776) & 0x20) == 0 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 858) + 80LL))(
                *((_QWORD *)this + 858),
                *((_QWORD *)this + 860),
                *((_QWORD *)this + 861));
        if ( v21 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x65D,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v21);
          JUMPOUT(0x180035DB2LL);
        }
      }
      if ( v17 && v14 && (*((_BYTE *)this + 1776) & 0x10) != 0 )
      {
        v27 = v12;
        ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
          (_QWORD *)ControllerNavigationManager + 16,
          (__int64 **)&v26,
          (_DWORD *)ControllerNavigationManager + 56);
        if ( v26 == *((_QWORD *)ControllerNavigationManager + 17) )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xB4,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavi"
                     "gationmanager.cpp",
            v23);
          __debugbreak();
        }
        (*(void (__fastcall **)(__int64, struct tagPOINT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v26 + 24LL) + 8LL)
                                                           + 24LL))(
          *(_QWORD *)(*(_QWORD *)&v26 + 24LL) + 8LL,
          &v27);
      }
    }
  }
  return 0LL;
}
