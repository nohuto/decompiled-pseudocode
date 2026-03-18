/*
 * XREFs of ?DpiDxgkDdiSaveMemoryForHotUpdate@@YAJPEAU_FDO_CONTEXT@@PEBU_DXGKARG_SAVEMEMORYFORHOTUPDATE@@@Z @ 0x1C02A8F24
 * Callers:
 *     ?DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z @ 0x1C02A92A0 (-DpiKsrSaveMemoryCallback@@YAJPEAU_FDO_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C0035844 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiDxgkDdiSaveMemoryForHotUpdate(
        struct _FDO_CONTEXT *a1,
        const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *a2,
        const GUID *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rcx
  const GUID *v7; // r8
  unsigned int v8; // edi
  __int64 v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]
  __int64 v12; // [rsp+28h] [rbp-10h]
  int v13; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v13 = 0;
    v11 = *(_DWORD *)a2;
    McTemplateK0pqq((__int64)a1, &EventEnterDdiSaveMemoryForHotUpdate, a3, *((_QWORD *)a1 + 6), v11, v13);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, const struct _DXGKARG_SAVEMEMORYFORHOTUPDATE *))(*((_QWORD *)a1 + 5) + 1328LL))(
         *((_QWORD *)a1 + 6),
         a2);
  v8 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v12) = v5;
    LODWORD(v10) = 0;
    McTemplateK0pqq(v6, &EventExitDdiSaveMemoryForHotUpdate, v7, *((_QWORD *)a1 + 6), v10, v12);
  }
  return v8;
}
