/*
 * XREFs of WINRT_WindowsCreateStringReference @ 0x1800882FA
 * Callers:
 *     ??$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@?$factory_cache_entry@UAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@QEAA?AUAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@2@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@Z @ 0x1800941AC (--$call@AEAV_lambda_f42f65653c13c4ca9c04beaf1720b2f0_@@@-$factory_cache_entry@UAppInstallManager.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_WindowsCreateStringReference(
        PCWSTR sourceString,
        UINT32 length,
        HSTRING_HEADER *hstringHeader,
        HSTRING *string)
{
  return WindowsCreateStringReference(sourceString, length, hstringHeader, string);
}
