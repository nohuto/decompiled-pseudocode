/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0245880
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC924 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, __int64 a2)
{
  ULONG v2; // esi
  __int64 v4; // rax

  v2 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 248) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 3227LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 464));
  RtlClearBits((PRTL_BITMAP)((char *)this + 504), v2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 58);
}
