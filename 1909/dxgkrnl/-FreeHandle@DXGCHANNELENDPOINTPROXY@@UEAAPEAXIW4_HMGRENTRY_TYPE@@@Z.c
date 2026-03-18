/*
 * XREFs of ?FreeHandle@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C028E770
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00F8D70 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::FreeHandle(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGFASTMUTEX *const)(a1 + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, a3);
  HMGRTABLE::FreeHandle((HMGRTABLE *)(a1 + 40), a2);
  if ( !v6 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 510LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v6;
}
