/*
 * XREFs of ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C00EBE3C
 * Callers:
 *     ?CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z @ 0x1C00EBDF4 (-CopyUmdFileName@ADAPTER_RENDER@@QEBAJPEAU_D3DKMT_UMDFILENAMEINFO@@@Z.c)
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00EBFB0 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsNullUmdDriver(const struct _UNICODE_STRING *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1->Length || a1->Length == 4 && *(_DWORD *)L"<>" == *(_DWORD *)a1->Buffer )
    return 1;
  return v1;
}
