/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C012D328
 * Callers:
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C00E1578 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0242C00 (DxgkWaitForPnPTransitionDone.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        DXGSESSIONMGR *this,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        union _LARGE_INTEGER *a4)
{
  __int64 v7; // rcx
  void *v8; // rdi
  unsigned int v9; // ebx
  __int64 v11; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v8 = (void *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    ObfReferenceObject(*((PVOID *)this + 17));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
    v9 = KeWaitForSingleObject(v8, a2, a3, 0, 0LL);
    ObfDereferenceObject(v8);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v7);
    v9 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
  }
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v9;
}
