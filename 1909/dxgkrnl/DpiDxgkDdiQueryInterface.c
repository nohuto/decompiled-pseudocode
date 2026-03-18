/*
 * XREFs of DpiDxgkDdiQueryInterface @ 0x1C0167E74
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C0148F60 (DpiPdoDispatchPnp.c)
 *     DpiQueryMiniportInterface @ 0x1C0167DE0 (DpiQueryMiniportInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pjq @ 0x1C0052768 (McTemplateK0pjq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryInterface(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  const GUID *v9; // r8
  _QWORD *v10; // rax
  __int64 v12; // [rsp+28h] [rbp-40h]
  int v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  if ( bTracingEnabled )
  {
    v14 = 0uLL;
    if ( *(_QWORD *)&a3->Data1 )
      v14 = *(_OWORD *)*(_QWORD *)&a3->Data1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v13 = 0;
      McTemplateK0pjq(a1, &EventEnterDdiQueryInterface, a3, a2, &v14, v13);
    }
  }
  v8 = (*(int (__fastcall **)(__int64, const GUID *))(a1 + 256))(a2, a3);
  if ( bTracingEnabled )
  {
    v14 = 0uLL;
    if ( *(_QWORD *)&a3->Data1 )
      v14 = *(_OWORD *)*(_QWORD *)&a3->Data1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v12) = v8;
      McTemplateK0pjq(v7, &EventExitDdiQueryInterface, v9, a2, &v14, v12);
    }
  }
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
  v10[5] = 0LL;
  v10[6] = 0LL;
  v10[7] = 0LL;
  v10[3] = a1;
  v10[4] = v8;
  return (unsigned int)v8;
}
