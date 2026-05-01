/*
 * XREFs of ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801408A8
 * Callers:
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013CFBC (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180043620 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppTitleBarConfig(__int64 a1, __int64 a2)
{
  int (__fastcall *v4)(__int64, PVOID, int *); // rbx
  HSTRING_HEADER *v5; // rax
  bool v6; // cl
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF

  v9 = -2LL;
  v4 = *(int (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)a2 + 408LL);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, (const WCHAR **)&off_180451450);
  v6 = v4(a2, v5[1].Reserved.Reserved1, &v8) >= 0;
  result = a1;
  if ( v6 )
  {
    LOBYTE(v8) = v8 == 1;
    BYTE1(v8) = v8;
    *(_WORD *)a1 = v8;
    *(_BYTE *)(a1 + 2) = 1;
  }
  else
  {
    *(_WORD *)a1 = 0;
    *(_BYTE *)(a1 + 2) = 0;
  }
  return result;
}
