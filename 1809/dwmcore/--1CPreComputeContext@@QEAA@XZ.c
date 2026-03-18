/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x18008B940
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008BAC8 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18008F704 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C2DE8 (--1CLightStack@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x180224458 (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this, unsigned int a2)
{
  CContentBounder *v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rbp
  _QWORD *v6; // rsi
  void *v7; // rcx

  v3 = (CContentBounder *)*((_QWORD *)this + 78);
  if ( v3 )
    CContentBounder::`scalar deleting destructor'(v3, a2);
  WPF::ProcessHeapImpl::Free(*((void **)this + 145));
  WPF::ProcessHeapImpl::Free(*((void **)this + 140));
  WPF::ProcessHeapImpl::Free(*((void **)this + 134));
  WPF::ProcessHeapImpl::Free(*((void **)this + 130));
  WPF::ProcessHeapImpl::Free(*((void **)this + 126));
  WPF::ProcessHeapImpl::Free(*((void **)this + 122));
  WPF::ProcessHeapImpl::Free(*((void **)this + 118));
  WPF::ProcessHeapImpl::Free(*((void **)this + 114));
  WPF::ProcessHeapImpl::Free(*((void **)this + 110));
  WPF::ProcessHeapImpl::Free(*((void **)this + 106));
  WPF::ProcessHeapImpl::Free(*((void **)this + 102));
  WPF::ProcessHeapImpl::Free(*((void **)this + 98));
  WPF::ProcessHeapImpl::Free(*((void **)this + 94));
  v4 = (_QWORD *)*((_QWORD *)this + 89);
  if ( v4 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 90);
    if ( v4 != v5 )
    {
      v6 = v4 + 6;
      do
      {
        v7 = (void *)*(v6 - 2);
        if ( v7 )
        {
          std::_Deallocate<16,0>(v7, 176 * ((*v6 - (_QWORD)v7) / 176LL));
          *(v6 - 2) = 0LL;
          *(v6 - 1) = 0LL;
          *v6 = 0LL;
        }
        std::vector<CDepthSortingLayer>::_Tidy(v4);
        v4 += 7;
        v6 += 7;
      }
      while ( v4 != v5 );
      v4 = (_QWORD *)*((_QWORD *)this + 89);
    }
    std::_Deallocate<16,0>(v4, 56 * ((*((_QWORD *)this + 91) - (_QWORD)v4) / 56LL));
    *((_QWORD *)this + 89) = 0LL;
    *((_QWORD *)this + 90) = 0LL;
    *((_QWORD *)this + 91) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 664);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 632);
  WPF::ProcessHeapImpl::Free(*((void **)this + 74));
  CLightStack::~CLightStack((CPreComputeContext *)((char *)this + 296));
  WPF::ProcessHeapImpl::Free(*((void **)this + 35));
  WPF::ProcessHeapImpl::Free(*((void **)this + 31));
  WPF::ProcessHeapImpl::Free(*((void **)this + 27));
  WPF::ProcessHeapImpl::Free(*((void **)this + 23));
  WPF::ProcessHeapImpl::Free(*((void **)this + 19));
  WPF::ProcessHeapImpl::Free(*((void **)this + 15));
  WPF::ProcessHeapImpl::Free(*((void **)this + 11));
  WPF::ProcessHeapImpl::Free(*((void **)this + 7));
  WPF::ProcessHeapImpl::Free(*((void **)this + 3));
}
