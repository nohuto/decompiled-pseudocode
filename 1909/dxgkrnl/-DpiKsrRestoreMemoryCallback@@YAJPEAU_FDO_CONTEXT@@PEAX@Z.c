/*
 * XREFs of ?DpiKsrRestoreMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x1C02A9250
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02A8E98 (-DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDAT.c)
 */

__int64 __fastcall DpiKsrRestoreMemoryCallback(struct _FDO_CONTEXT *a1, void *a2)
{
  const GUID *v3; // r8
  _DWORD v5[10]; // [rsp+20h] [rbp-28h] BYREF

  if ( (*((_DWORD *)a1 + 1380) & 2) != 0 )
  {
    memset(v5, 0, 0x20uLL);
    v5[0] = 1;
    DpiDxgkDdiRestoreMemoryForHotUpdate(a1, (const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *)v5, v3);
  }
  return 0LL;
}
