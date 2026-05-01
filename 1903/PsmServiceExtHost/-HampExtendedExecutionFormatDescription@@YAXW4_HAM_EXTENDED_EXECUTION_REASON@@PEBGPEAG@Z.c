/*
 * XREFs of ?HampExtendedExecutionFormatDescription@@YAXW4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEAG@Z @ 0x180011D34
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18001028C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 * Callees:
 *     StringCbPrintfW @ 0x180004850 (StringCbPrintfW.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 */

HRESULT __fastcall HampExtendedExecutionFormatDescription(unsigned int a1, const wchar_t *a2, void *a3)
{
  const wchar_t *v5; // rbx

  v5 = a2;
  if ( !a2 || !*a2 )
  {
    if ( a1 > 4 )
      v5 = L"BAD_INPUT";
    else
      v5 = (const wchar_t *)(&EeDefaultDescription)[a1];
  }
  memset_0(a3, 0, 0x80uLL);
  return StringCbPrintfW((STRSAFE_LPWSTR)a3, 0x80uLL, L"Ee%d_%s", a1, v5);
}
