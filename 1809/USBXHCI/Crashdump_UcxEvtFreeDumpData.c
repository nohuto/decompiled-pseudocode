/*
 * XREFs of Crashdump_UcxEvtFreeDumpData @ 0x1C003B580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000AC6C (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_FreeDeviceContext @ 0x1C003A78C (Crashdump_FreeDeviceContext.c)
 */

ULONG __fastcall Crashdump_UcxEvtFreeDumpData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  void *v6; // rcx
  unsigned int v7; // edi
  void *v8; // rcx
  _QWORD **v9; // rdi
  _QWORD *v10; // rdx
  _QWORD *v11; // rax

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: Begin\n");
  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F400);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( *(_QWORD *)(v4 + 360) == v5 )
    *(_QWORD *)(v4 + 360) = 0LL;
  v6 = *(void **)(v5 + 568);
  if ( v6 )
  {
    v7 = 0;
    if ( *(_DWORD *)(v5 + 536) )
    {
      do
        Crashdump_FreeDeviceContext(*(_QWORD *)(v5 + 568) + 376LL * v7++);
      while ( v7 < *(_DWORD *)(v5 + 536) );
      v6 = *(void **)(v5 + 568);
    }
    ExFreePoolWithTag(v6, 0x43434858u);
  }
  v8 = *(void **)(v5 + 176);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(v5 + 176) = 0LL;
  }
  v9 = (_QWORD **)(v5 + 496);
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v9 )
      break;
    if ( (_QWORD **)v10[1] != v9 || (v11 = (_QWORD *)*v10, *(_QWORD **)(*v10 + 8LL) != v10) )
      __fastfail(3u);
    *v9 = v11;
    v11[1] = v9;
    CommonBuffer_ReleaseBuffer(*(_QWORD *)(v5 + 488), v10);
  }
  ExFreePoolWithTag((PVOID)v5, 0x43434858u);
  return DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtFreeDumpData: End\n");
}
