/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180106A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x180025804 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?find@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@AEBUDWMPointerMapping@@@Z @ 0x180107468 (-find@-$_Hash@V-$_Umap_traits@UDWMPointerMapping@@UCursorId@@V-$_Uhash_compare@UDWMPointerMappin.c)
 *     ??$_Insert@AEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUDWMPointerMapping@@UCursorId@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@1@@Z @ 0x180107848 (--$_Insert@AEAU-$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V-$_List_unchecked_iterator@V-$_L.c)
 *     ??$_Buynode@UDWMPointerMapping@@AEAUCursorId@@@?$_List_buy@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@PEAX@1@PEAU21@0$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180107A64 (--$_Buynode@UDWMPointerMapping@@AEAUCursorId@@@-$_List_buy@U-$pair@$$CBUDWMPointerMapping@@UCurs.c)
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180108034 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCurs.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  int v8; // edi
  __int128 v10; // xmm6
  struct ICursor *v11; // rdi
  __int64 *v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rsi
  __int64 *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 *v27; // [rsp+38h] [rbp-39h] BYREF
  __int64 v28; // [rsp+40h] [rbp-31h] BYREF
  int v29[2]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v30; // [rsp+50h] [rbp-21h]
  __int128 v31; // [rsp+58h] [rbp-19h] BYREF
  __int128 v32; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30 = -2LL;
  *a4 = 0LL;
  *(_QWORD *)v29 = 0LL;
  v8 = *((_DWORD *)a2 + 1);
  if ( (v8 & 8) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( (v8 & 2) != 0 )
  {
    *((_QWORD *)&v31 + 1) = 0LL;
    if ( (v8 & 0x40) != 0 )
      LODWORD(v31) = 2;
    else
      LODWORD(v31) = 1;
  }
  else
  {
    LODWORD(v31) = *((_DWORD *)this + 94);
    *((_DWORD *)this + 94) = v31 + 1;
    *((_QWORD *)&v31 + 1) = 0LL;
  }
  v10 = v31;
  std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
    (_QWORD *)this + 6,
    &v27,
    &v31);
  if ( v27 == *((__int64 **)this + 7) )
  {
    v32 = v10;
    v12 = (__int64 *)*((_QWORD *)this + 5);
    v27 = v12;
    if ( v12 )
      (*(void (__fastcall **)(__int64 *))(*v12 + 8))(v12);
    v13 = DWMCursor::Create((_DWORD)this, (unsigned int)&v27, (unsigned int)&v32, v8, (__int64)v29);
    v14 = retaddr;
    if ( v13 >= 0 )
    {
      v28 = 0LL;
      v15 = (*(__int64 (__fastcall **)(DWMCursorBroker *, __int64 *))(*(_QWORD *)this + 40LL))(this, &v28);
      v11 = *(struct ICursor **)v29;
      if ( v15 < 0 )
      {
LABEL_18:
        v21 = v28;
        if ( v28 )
        {
          v28 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        goto LABEL_20;
      }
      v16 = (*(__int64 (__fastcall **)(__int64, __int64 **, char *))(*(_QWORD *)v28 + 32LL))(
              v28,
              &v27,
              (char *)&v27 + 4);
      v17 = retaddr;
      if ( v16 < 0 )
      {
LABEL_29:
        wil::details::in1diag3::FailFast_Hr(
          v17,
          (void *)0x1CA,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v28 + 96LL))(v28, &v32);
      if ( v18 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1CB,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v18);
        __debugbreak();
      }
      v19 = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v11 + 24LL))(
              v11,
              (unsigned int)v27,
              HIDWORD(v27));
      if ( v19 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1CD,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
          (const char *)(unsigned int)v19);
        JUMPOUT(0x180106D2DLL);
      }
      v20 = (*(__int64 (__fastcall **)(struct ICursor *, __int128 *))(*(_QWORD *)v11 + 88LL))(v11, &v32);
      if ( v20 >= 0 )
        goto LABEL_18;
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1CE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v20);
    }
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x1C2,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_29;
  }
  v11 = (struct ICursor *)v27[4];
  (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_20:
  if ( *(_DWORD *)a2 )
  {
    LODWORD(v27) = *(_DWORD *)a2;
    HIDWORD(v27) = a3;
    std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::find(
      (char *)this + 112,
      v29,
      &v27);
    v22 = (__int64 *)*((_QWORD *)this + 15);
    if ( *(__int64 **)v29 == v22 )
    {
      v23 = *v22;
      v24 = *(__int64 **)(*v22 + 8);
      v25 = std::_List_buy<std::pair<DWMPointerMapping const,CursorId>>::_Buynode<DWMPointerMapping,CursorId &>(
              (_DWORD)v22,
              *v22,
              (_DWORD)v24,
              (unsigned int)&v27,
              (__int64)&v31);
      v26 = *((_QWORD *)this + 16);
      if ( v26 == 0x666666666666665LL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 16) = v26 + 1;
      *(_QWORD *)(v23 + 8) = v25;
      *v24 = v25;
      std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::_Insert<std::pair<DWMPointerMapping const,CursorId> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<DWMPointerMapping const,CursorId>>>>>(
        (char *)this + 112,
        &v32,
        **((_QWORD **)this + 15) + 16LL);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v29 + 24LL) = v10;
    }
  }
  *a4 = v11;
  return 0LL;
}
