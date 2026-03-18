/*
 * XREFs of ?_ClearColorSpaceTransform@DXGMONITOR@@AEAAXXZ @ 0x1C00C3D54
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C00CF850 (MonitorSetLastWireformatAndColorspace.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

void __fastcall DXGMONITOR::_ClearColorSpaceTransform(DXGMONITOR *this, __int64 a2)
{
  struct _FAST_MUTEX *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  ReferenceCounted *v7; // rcx
  __int64 v8; // rax

  v2 = (struct _FAST_MUTEX *)((char *)this + 1144);
  if ( this == (DXGMONITOR *)-1144LL )
  {
    v4 = WdLogNewEntry5_WdAssertion(-1144LL, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  KeAcquireGuardedMutex(v2);
  v7 = (ReferenceCounted *)*((_QWORD *)this + 150);
  if ( v7 )
    ReferenceCounted::Release(v7, v5, v6);
  *((_QWORD *)this + 150) = 0LL;
  if ( !v2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v5);
    WdLogEvent5_WdAssertion(v8);
  }
  KeReleaseGuardedMutex(v2);
}
