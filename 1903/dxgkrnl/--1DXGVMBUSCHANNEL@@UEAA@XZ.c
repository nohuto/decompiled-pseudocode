/*
 * XREFs of ??1DXGVMBUSCHANNEL@@UEAA@XZ @ 0x1C028DD84
 * Callers:
 *     ??_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z @ 0x1C028DE30 (--_GDXGVMBUSCHANNEL@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0007534 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ?Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C028E0E8 (-Cleanup@DXGVMBUSCHANNEL@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::~DXGVMBUSCHANNEL(void **this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  *this = &DXGVMBUSCHANNEL::`vftable';
  DXGVMBUSCHANNEL::Cleanup((DXGVMBUSCHANNEL *)this);
  if ( this[6] != this + 6 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 166LL;
    WdLogEvent5_WdAssertion(v4);
  }
  operator delete(this[4]);
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 14));
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(this + 9));
}
