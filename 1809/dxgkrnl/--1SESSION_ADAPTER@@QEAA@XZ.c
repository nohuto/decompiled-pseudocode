/*
 * XREFs of ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C013B640
 * Callers:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C001A2E4 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ @ 0x1C013BA00 (-DeallocateElements@-$PagedPoolZeroedArray@PEAVDXGHWQUEUE@@$01@@QEAAXXZ.c)
 */

void __fastcall SESSION_ADAPTER::~SESSION_ADAPTER(SESSION_ADAPTER *this)
{
  __int64 v2; // rax

  if ( *((_DWORD *)this + 12)
    || *((_QWORD *)this + 2)
    || *((_QWORD *)this + 7)
    || *((_QWORD *)this + 8)
    || *((_DWORD *)this + 27)
    || *((_DWORD *)this + 26)
    || *((SESSION_ADAPTER **)this + 14) != (SESSION_ADAPTER *)((char *)this + 112) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 1776LL;
    WdLogEvent5_WdAssertion(v2);
  }
  PagedPoolZeroedArray<DXGHWQUEUE *,2>::DeallocateElements((char *)this + 72);
}
