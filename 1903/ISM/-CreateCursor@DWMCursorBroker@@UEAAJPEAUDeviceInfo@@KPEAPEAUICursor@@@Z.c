/*
 * XREFs of ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x1800120D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x1800103E4 (-Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180013860 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@UCursorId@@PEAVDWMCursor@@V?$_Uhash_compare@UCursorId@@UCursorIdHash@@U?$equal_to@UCursorId@@@std@@@std@@V?$allocator@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUCursorId@@PEAVDWMCursor@@@std@@@std@@@std@@@2@AEBUCursorId@@@Z @ 0x1800273E0 (-lower_bound@-$_Hash@V-$_Umap_traits@UCursorId@@PEAVDWMCursor@@V-$_Uhash_compare@UCursorId@@UCur.c)
 *     ?InternalRelease@?$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ @ 0x180027E34 (-InternalRelease@-$ComPtr@VInputRedirectionProcessor@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::CreateCursor(
        DWMCursorBroker *this,
        struct DeviceInfo *a2,
        int a3,
        struct ICursor **a4)
{
  struct ICursor *v4; // r15
  int v6; // edi
  unsigned int v9; // ebx
  __int128 v10; // xmm6
  int v12; // eax
  __int64 (__fastcall *v13)(DWMCursorBroker *, _QWORD **); // rbx
  int v14; // eax
  _QWORD *v15; // rbx
  __int64 (__fastcall *v16)(_QWORD *, _BYTE *); // rsi
  _DWORD *v17; // rdi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  struct ICursor *v22; // [rsp+28h] [rbp-69h] BYREF
  _QWORD *v23; // [rsp+30h] [rbp-61h] BYREF
  int v24; // [rsp+38h] [rbp-59h]
  __int64 v25; // [rsp+40h] [rbp-51h]
  _QWORD v26[2]; // [rsp+48h] [rbp-49h] BYREF
  __int128 v27; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v28[16]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v29[16]; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v25 = -2LL;
  v6 = a3;
  v24 = a3;
  *a4 = 0LL;
  v22 = 0LL;
  v9 = *((_DWORD *)a2 + 1);
  if ( (v9 & 8) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( (v9 & 2) != 0 )
  {
    v9 = 64;
    if ( (*((_DWORD *)a2 + 1) & 0x40) != 0 )
    {
      LODWORD(v26[0]) = 2;
    }
    else
    {
      v9 = 2;
      LODWORD(v26[0]) = 1;
    }
  }
  else
  {
    LODWORD(v26[0]) = *((_DWORD *)this + 114);
    *((_DWORD *)this + 114) = LODWORD(v26[0]) + 1;
  }
  v26[1] = 0LL;
  v10 = v26[0];
  std::_Hash<std::_Umap_traits<CursorId,DWMCursor *,std::_Uhash_compare<CursorId,CursorIdHash,std::equal_to<CursorId>>,std::allocator<std::pair<CursorId const,DWMCursor *>>,0>>::lower_bound(
    (char *)this + 48,
    &v23,
    v26);
  if ( v23 == *((_QWORD **)this + 7) )
  {
    v27 = v10;
    v12 = DWMCursor::Create((__int64)this, &v27, v9, (__int64 *)&v22);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1FF,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v12,
        (int)v22);
    }
    else
    {
      v23 = 0LL;
      v13 = *(__int64 (__fastcall **)(DWMCursorBroker *, _QWORD **))(*(_QWORD *)this + 40LL);
      Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v23);
      v14 = v13(this, &v23);
      v4 = v22;
      if ( v14 < 0 )
      {
LABEL_18:
        Microsoft::WRL::ComPtr<InputRedirectionProcessor>::InternalRelease(&v23);
        goto LABEL_7;
      }
      v15 = v23;
      v16 = *(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*v23 + 40LL);
      v17 = (_DWORD *)(*(__int64 (__fastcall **)(struct ICursor *, _BYTE *))(*(_QWORD *)v22 + 40LL))(v22, v29);
      if ( *(_DWORD *)v16(v15, v28) == *v17 )
      {
        v22 = *(struct ICursor **)((char *)this + 460);
LABEL_14:
        v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(*v23 + 96LL))(v23, &v27);
        if ( v18 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x211,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v18,
            (int)v22);
          __debugbreak();
        }
        v19 = (*(__int64 (__fastcall **)(struct ICursor *, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(
                v4,
                (unsigned int)v22,
                HIDWORD(v22));
        if ( v19 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x213,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v19,
            (int)v22);
          __debugbreak();
        }
        v20 = (*(__int64 (__fastcall **)(struct ICursor *, __int128 *))(*(_QWORD *)v4 + 88LL))(v4, &v27);
        if ( v20 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x214,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dw"
                          "mcursorbroker.cpp",
            (const char *)(unsigned int)v20,
            (int)v22);
          __debugbreak();
        }
        v6 = v24;
        goto LABEL_18;
      }
    }
    v21 = (*(__int64 (__fastcall **)(_QWORD *, struct ICursor **, char *))(*v23 + 32LL))(v23, &v22, (char *)&v22 + 4);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x20F,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
        (const char *)(unsigned int)v21,
        (int)v22);
      __debugbreak();
    }
    goto LABEL_14;
  }
  v4 = (struct ICursor *)v23[4];
  (*(void (__fastcall **)(struct ICursor *))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_7:
  if ( *(_DWORD *)a2 )
  {
    LODWORD(v22) = *(_DWORD *)a2;
    HIDWORD(v22) = v6;
    ((void (__fastcall *)(char *, _BYTE *, struct ICursor **, _QWORD *))std::unordered_map<DWMPointerMapping,CursorId,DWMMappingHash,std::equal_to<DWMPointerMapping>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>>::_Insert_or_assign<DWMPointerMapping,CursorId &>)(
      (char *)this + 112,
      v28,
      &v22,
      v26);
  }
  *a4 = v4;
  return 0LL;
}
