/*
 * XREFs of ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x1C01F1370
 * Callers:
 *     DxgkOpmGetRedirectionInfo @ 0x1C01F6A50 (DxgkOpmGetRedirectionInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetOpmMftContext(ADAPTER_DISPLAY *this, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(_QWORD, __int64, unsigned __int64 *); // rax
  __int64 v6; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax

  v4 = *((_QWORD *)this + 2);
  v5 = *(__int64 (__fastcall **)(_QWORD, __int64, unsigned __int64 *))(v4 + 1776);
  if ( v5 )
  {
    v8 = v5(*(_QWORD *)(v4 + 1744), a2, a3);
    v12 = v8;
    if ( v8 < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v10, v9, v11);
      *(_QWORD *)(v13 + 24) = v12;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v12;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4, a2, a3);
    *(_QWORD *)(v6 + 24) = *((_QWORD *)this + 2);
    WdLogEvent5_WdError(v6);
    return 3221225659LL;
  }
}
