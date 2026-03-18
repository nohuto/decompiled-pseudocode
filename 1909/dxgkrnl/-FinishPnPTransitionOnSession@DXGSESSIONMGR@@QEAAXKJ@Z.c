/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXKJ@Z @ 0x1C0182398
 * Callers:
 *     DxgkFinishPnPTransition @ 0x1C0182290 (DxgkFinishPnPTransition.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGSESSIONMGR::FinishPnPTransitionOnSession(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( (unsigned int)v2 < *((_DWORD *)this + 18) && *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) )
  {
    _mm_lfence();
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) + 18512LL) )
    {
      _mm_lfence();
      _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v2) + 18512LL));
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v7 + 24) = v2;
    WdLogEvent5_WdError(v7);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
}
