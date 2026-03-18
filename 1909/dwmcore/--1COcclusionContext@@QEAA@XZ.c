/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18002484C
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x180024820 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180025500 (--1CLightStack@@QEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18002568C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this, unsigned int a2)
{
  CContentBounder *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &COcclusionContext::`vftable';
  v3 = (CContentBounder *)*((_QWORD *)this + 144);
  if ( v3 )
    CContentBounder::`scalar deleting destructor'(v3, a2);
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 50) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 1160);
  operator delete(*((void **)this + 142));
  operator delete(*((void **)this + 138));
  operator delete(*((void **)this + 134));
  FastRegion::CRegion::FreeMemory((COcclusionContext *)((char *)this + 968));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 408);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 160));
  operator delete(*((void **)this + 18));
  operator delete(*((void **)this + 12));
  operator delete(*((void **)this + 4));
}
