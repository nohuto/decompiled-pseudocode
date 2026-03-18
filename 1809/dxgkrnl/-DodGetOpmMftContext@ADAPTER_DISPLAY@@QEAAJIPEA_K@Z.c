/*
 * XREFs of ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C01C20D8
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C01C7F70 (DxgkOpmGetRedirectionInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetOpmMftContext(ADAPTER_DISPLAY *this, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, __int64, unsigned __int64 *); // rax
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax

  v4 = *((_QWORD *)this + 2);
  v5 = *(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(v4 + 1760);
  if ( v5 )
  {
    v8 = v5(*(_QWORD *)(v4 + 1728), a2, a3);
    v10 = v8;
    if ( v8 < 0 )
    {
      v11 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v11 + 24) = v10;
      WdLogEvent5_WdError(v11);
    }
    return (unsigned int)v10;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v6);
    return 3221225659LL;
  }
}
