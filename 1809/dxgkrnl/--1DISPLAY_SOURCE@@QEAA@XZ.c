/*
 * XREFs of ??1DISPLAY_SOURCE@@QEAA@XZ @ 0x1C01C0740
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00103D4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 */

void __fastcall DISPLAY_SOURCE::~DISPLAY_SOURCE(DISPLAY_SOURCE *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rcx

  if ( *((_QWORD *)this + 113) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 3803LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((_QWORD *)this + 135) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 3804LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_QWORD *)this + 95) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3810LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((_QWORD *)this + 101) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 3811LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_QWORD *)this + 106) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3812LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (void *)*((_QWORD *)this + 117);
  if ( v7 )
    ObfDereferenceObject(v7);
  DXGFASTMUTEX::~DXGFASTMUTEX((DISPLAY_SOURCE *)((char *)this + 864));
}
