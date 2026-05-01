/*
 * XREFs of ?GetRawHIconForView@DefaultIconManager@@AEAAJPEAUIWin32ApplicationView@@PEAPEAUHICON__@@@Z @ 0x180271D24
 * Callers:
 *     ?GetIconForView@DefaultIconManager@@AEAA?AV?$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1802719E8 (-GetIconForView@DefaultIconManager@@AEAA-AV-$com_ptr_t@UIShellTabImage@Tabs@ComposableShell@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DefaultIconManager::GetRawHIconForView(
        DefaultIconManager *this,
        struct IWin32ApplicationView *a2,
        HICON *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  HICON v8; // rax
  HICON v9; // rax
  HICON v10; // rax
  HICON ClassLongPtrW; // rax
  HICON v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HWND hWnd; // [rsp+48h] [rbp+10h] BYREF

  *a3 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &hWnd);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (HICON)SendMessageW(hWnd, 0x7Fu, 2uLL, 0LL);
    *a3 = v8;
    if ( !v8 )
    {
      v9 = (HICON)SendMessageW(hWnd, 0x7Fu, 0LL, 0LL);
      *a3 = v9;
      if ( !v9 )
      {
        v10 = (HICON)SendMessageW(hWnd, 0x7Fu, 1uLL, 0LL);
        *a3 = v10;
        if ( !v10 )
        {
          ClassLongPtrW = (HICON)GetClassLongPtrW(hWnd, -34);
          *a3 = ClassLongPtrW;
          if ( !ClassLongPtrW )
          {
            v12 = (HICON)GetClassLongPtrW(hWnd, -14);
            *a3 = v12;
            if ( !v12 )
              *a3 = (HICON)*((_QWORD *)this + 21);
          }
        }
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F0,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\defaulticonmanager.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
