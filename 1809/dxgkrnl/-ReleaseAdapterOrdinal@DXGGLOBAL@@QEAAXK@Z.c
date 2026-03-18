/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C021139C
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, ULONG a2)
{
  __int64 v4; // rax

  if ( a2 >= *((_DWORD *)this + 256) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3006LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 464));
  RtlClearBits((PRTL_BITMAP)((char *)this + 504), a2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 58);
}
