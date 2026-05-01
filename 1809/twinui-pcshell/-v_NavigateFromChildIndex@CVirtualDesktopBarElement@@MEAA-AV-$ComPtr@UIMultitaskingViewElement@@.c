/*
 * XREFs of ?v_NavigateFromChildIndex@CVirtualDesktopBarElement@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180310460
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     GetThreadUILanguage_0 @ 0x18008578E (GetThreadUILanguage_0.c)
 *     ?v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@_KIW4NavigationType@@@Z @ 0x180305EF0 (-v_NavigateFromChildIndex@CMultitaskingViewElementBase@@MEAA-AV-$ComPtr@UIMultitaskingViewElemen.c)
 */

__int64 *__fastcall CVirtualDesktopBarElement::v_NavigateFromChildIndex(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5)
{
  int v5; // ebx
  LANGID ThreadUILanguage_0; // ax
  int v10; // eax
  int v11; // r10d
  bool v12; // zf

  v5 = a4;
  if ( (unsigned int)(a4 - 3) <= 1 )
  {
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v10 = IsBiDiLocale(ThreadUILanguage_0);
    v11 = 0;
    if ( v10 )
      v12 = v5 == 3;
    else
      v12 = v5 == 4;
    LOBYTE(v11) = !v12;
    v5 = v11 + 5;
  }
  CMultitaskingViewElementBase::v_NavigateFromChildIndex(a1, a2, a3, v5, a5);
  return a2;
}
