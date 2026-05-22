/*
 * XREFs of ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180108034
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180106A00 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputType@@UCursorId@@@Z @ 0x180107B8C (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@W4InputT.c)
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x180107DF8 (-Initialize@DWMCursor@@QEAAJXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::Create(__int64 a1, __int64 *a2, _OWORD *a3, int a4, DWMCursor **a5)
{
  DWMCursor **v9; // r14
  unsigned int v10; // edi
  __int64 v11; // rdx
  DWMCursor *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  const char *v15; // r9
  DWMCursor *v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24[4]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9 = a5;
  if ( !a5 )
  {
    v10 = -2147024809;
    v11 = 89LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)v10);
    v23 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    return v10;
  }
  *a5 = 0LL;
  v12 = (DWMCursor *)malloc(0x158uLL);
  v16 = v12;
  if ( v12 )
    memset_0(v12, 0, 0x158uLL);
  if ( v16 )
  {
    *(_OWORD *)v24 = *a3;
    v17 = *a2;
    a5 = (DWMCursor **)v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v16 = (DWMCursor *)DWMCursor::DWMCursor((__int64)v16, a1, &a5, a4, (__int128 *)v24);
  }
  if ( !v16 )
  {
    v10 = -2147024882;
    v11 = 102LL;
    goto LABEL_18;
  }
  v18 = DWMCursor::Initialize(v16, v13, v14, v15);
  v19 = v18;
  if ( v18 >= 0 )
  {
    *v9 = v16;
    v22 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v18);
    v20 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v19;
  }
}
