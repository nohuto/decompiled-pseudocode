/*
 * XREFs of TR_WdfEvtCleanupCallback @ 0x1C00299F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 */

__int64 __fastcall TR_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx
  _DWORD *v3; // rdx
  struct _PCW_INSTANCE *v4; // rcx

  v1 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056388);
  v2 = *(void **)(v1 + 304);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(v1 + 304) = 0LL;
  }
  *(_DWORD *)(v1 + 312) = 0;
  v3 = *(_DWORD **)(v1 + 176);
  if ( v3 )
  {
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 120LL), v3);
    *(_QWORD *)(v1 + 176) = 0LL;
  }
  v4 = *(struct _PCW_INSTANCE **)(v1 + 272);
  if ( v4 )
    PcwCloseInstance(v4);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 32) + 8LL))(v1);
}
