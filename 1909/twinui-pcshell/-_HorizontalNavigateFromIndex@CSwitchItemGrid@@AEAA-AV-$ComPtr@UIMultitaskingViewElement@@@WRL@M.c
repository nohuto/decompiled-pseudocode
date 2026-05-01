/*
 * XREFs of ?_HorizontalNavigateFromIndex@CSwitchItemGrid@@AEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KI@Z @ 0x180389AB0
 * Callers:
 *     ?v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180389FC0 (-v_NavigateFromChildIndex@CSwitchItemGrid@@MEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@Micro.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180043D38 (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x18008B00B (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwitchItemGrid::_HorizontalNavigateFromIndex(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  LANGID ThreadUILanguage_0; // ax
  int v9; // eax
  int v10; // r9d
  bool v11; // zf

  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v9 = IsBiDiLocale(ThreadUILanguage_0);
  v10 = 0;
  if ( v9 )
    v11 = a4 == 3;
  else
    v11 = a4 == 4;
  LOBYTE(v10) = !v11;
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD *)a1 + 536LL))(
    a1,
    a2,
    a3,
    (unsigned int)(v10 + 5),
    0);
  return a2;
}
