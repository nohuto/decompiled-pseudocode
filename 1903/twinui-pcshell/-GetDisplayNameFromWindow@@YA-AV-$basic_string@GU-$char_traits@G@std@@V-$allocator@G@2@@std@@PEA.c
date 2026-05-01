/*
 * XREFs of ?GetDisplayNameFromWindow@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@@Z @ 0x1800AF694
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800AC750 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ?resize@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_KG@Z @ 0x1800AFC34 (-resize@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_KG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x18031D5C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDisplayNameFromWindow(__int64 a1, HWND a2)
{
  int v4; // edi
  WCHAR *v5; // rdx

  v4 = GetWindowTextLengthW(a2) + 1;
  std::wstring::wstring(a1, v4);
  v5 = (WCHAR *)a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v5 = *(WCHAR **)a1;
  GetWindowTextW(a2, v5, *(_DWORD *)(a1 + 24));
  std::wstring::resize(a1, v4 - 1);
  return a1;
}
