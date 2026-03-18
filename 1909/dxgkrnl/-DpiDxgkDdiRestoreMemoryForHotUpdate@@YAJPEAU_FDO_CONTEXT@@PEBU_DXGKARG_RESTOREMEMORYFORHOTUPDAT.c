/*
 * XREFs of ?DpiDxgkDdiRestoreMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_RESTOREMEMORYFORHOTUPDATE@@@Z @ 0x1C02A8E98
 * Callers:
 *     ?DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_K@Z @ 0x1C02A89E4 (-DpiClaimPersistedMemoryBlock@@YAJPEAU_FDO_CONTEXT@@_K@Z.c)
 *     ?DpiKsrRestoreMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x1C02A9250 (-DpiKsrRestoreMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xq @ 0x1C00357CC (McTemplateK0xq.c)
 */

__int64 __fastcall DpiDxgkDdiRestoreMemoryForHotUpdate(
        struct _FDO_CONTEXT *a1,
        const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *a2,
        const GUID *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  const GUID *v7; // r8
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v11 = 0;
    McTemplateK0xq((__int64)a1, &EventEnterDdiRestoreMemoryForHotUpdate, a3, *((_QWORD *)a1 + 6), v11);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE *))(*((_QWORD *)a1 + 5)
                                                                                            + 1336LL))(
         *((_QWORD *)a1 + 6),
         a2);
  v8 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v10) = v5;
    McTemplateK0xq(v6, &EventExitDdiRestoreMemoryForHotUpdate, v7, *((_QWORD *)a1 + 6), v10);
  }
  return v8;
}
