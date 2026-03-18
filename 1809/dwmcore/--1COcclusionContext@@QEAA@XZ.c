/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18008EBFC
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18008EBD4 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18008F704 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C2DE8 (--1CLightStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this, unsigned int a2)
{
  CContentBounder *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &COcclusionContext::`vftable';
  v3 = (CContentBounder *)*((_QWORD *)this + 143);
  if ( v3 )
    CContentBounder::`scalar deleting destructor'(v3, a2);
  v4 = *((_QWORD *)this + 49);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 49) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1152);
  WPF::ProcessHeapImpl::Free(*((void **)this + 141));
  WPF::ProcessHeapImpl::Free(*((void **)this + 137));
  WPF::ProcessHeapImpl::Free(*((void **)this + 133));
  FastRegion::CRegion::FreeMemory((void **)this + 120);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 400);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 152));
  WPF::ProcessHeapImpl::Free(*((void **)this + 17));
  WPF::ProcessHeapImpl::Free(*((void **)this + 11));
  WPF::ProcessHeapImpl::Free(*((void **)this + 3));
}
