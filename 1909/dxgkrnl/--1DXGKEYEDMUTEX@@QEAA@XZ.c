/*
 * XREFs of ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C02689E8
 * Callers:
 *     ??_GDXGKEYEDMUTEX@@QEAAPEAXI@Z @ 0x1C0044D40 (--_GDXGKEYEDMUTEX@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007758 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0269558 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGKEYEDMUTEX::~DXGKEYEDMUTEX(DXGKEYEDMUTEX *this, __int64 a2)
{
  __int64 v3; // rax

  if ( *((_QWORD *)this + 3) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v3 + 24) = 3397LL;
    WdLogEvent5_WdAssertion(v3);
  }
  DXGKEYEDMUTEX::DestroyGlobal(this);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGKEYEDMUTEX *)((char *)this + 96));
  *((_QWORD *)this + 2) = 0LL;
}
