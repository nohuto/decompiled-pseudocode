/*
 * XREFs of ?GetRuntimeClassName@PriorityBoostHelper@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801DFA00
 * Callers:
 *     ?GetRuntimeClassName@PriorityBoostHelper@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D8770 (-GetRuntimeClassName@PriorityBoostHelper@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@PriorityBoostHelper@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D8780 (-GetRuntimeClassName@PriorityBoostHelper@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall PriorityBoostHelper::GetRuntimeClassName(PriorityBoostHelper *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.PriorityBoostHelper", 0x35u, a2);
}
