/*
 * XREFs of DpiDxgkDdiQueryInterface @ 0x1C014C2A8
 * Callers:
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
 *     DpiPdoDispatchPnp @ 0x1C0274F20 (DpiPdoDispatchPnp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pjq @ 0x1C004B4D4 (McTemplateK0pjq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryInterface(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  const GUID *v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v13; // [rsp+28h] [rbp-40h]
  int v14; // [rsp+28h] [rbp-40h]
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF

  if ( bTracingEnabled )
  {
    v15 = 0uLL;
    if ( *(_QWORD *)&a3->Data1 )
      v15 = *(_OWORD *)*(_QWORD *)&a3->Data1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v14 = 0;
      McTemplateK0pjq(a1, &EventEnterDdiQueryInterface, a3, a2, &v15, v14);
    }
  }
  v8 = (*(int (__fastcall **)(__int64, const GUID *))(a1 + 256))(a2, a3);
  if ( bTracingEnabled )
  {
    v15 = 0uLL;
    if ( *(_QWORD *)&a3->Data1 )
      v15 = *(_OWORD *)*(_QWORD *)&a3->Data1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v13) = v8;
      McTemplateK0pjq(v7, &EventExitDdiQueryInterface, v9, a2, &v15, v13);
    }
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v9, v10);
  v11[5] = 0LL;
  v11[6] = 0LL;
  v11[7] = 0LL;
  v11[3] = a1;
  v11[4] = v8;
  return (unsigned int)v8;
}
