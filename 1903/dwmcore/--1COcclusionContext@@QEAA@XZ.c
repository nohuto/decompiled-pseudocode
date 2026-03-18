/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x1800CBCB8
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800CBC8C (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180046DF0 (--1CLightStack@@QEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180046F4C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this)
{
  CContentBounder *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &COcclusionContext::`vftable';
  v2 = (CContentBounder *)*((_QWORD *)this + 144);
  if ( v2 )
    CContentBounder::`scalar deleting destructor'(v2);
  v3 = *((_QWORD *)this + 50);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 50) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1160);
  operator delete(*((void **)this + 142));
  operator delete(*((void **)this + 138));
  operator delete(*((void **)this + 134));
  FastRegion::CRegion::FreeMemory((void **)this + 121);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 408);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 160));
  operator delete(*((void **)this + 18));
  operator delete(*((void **)this + 12));
  operator delete(*((void **)this + 4));
}
