/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x1800C80F0
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x1800C8040 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180046DF0 (--1CLightStack@@QEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180046F4C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x1802527E0 (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this)
{
  CContentBounder *v2; // rcx
  _QWORD *v3; // rdi
  _QWORD *v4; // rbp
  _QWORD *v5; // rsi
  void *v6; // rcx

  v2 = (CContentBounder *)*((_QWORD *)this + 79);
  if ( v2 )
    CContentBounder::`scalar deleting destructor'(v2);
  operator delete(*((void **)this + 146));
  operator delete(*((void **)this + 141));
  operator delete(*((void **)this + 135));
  operator delete(*((void **)this + 131));
  operator delete(*((void **)this + 127));
  operator delete(*((void **)this + 123));
  operator delete(*((void **)this + 119));
  operator delete(*((void **)this + 115));
  operator delete(*((void **)this + 111));
  operator delete(*((void **)this + 107));
  operator delete(*((void **)this + 103));
  operator delete(*((void **)this + 99));
  operator delete(*((void **)this + 95));
  v3 = (_QWORD *)*((_QWORD *)this + 90);
  if ( v3 )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 91);
    if ( v3 != v4 )
    {
      v5 = v3 + 6;
      do
      {
        v6 = (void *)*(v5 - 2);
        if ( v6 )
        {
          std::_Deallocate<16,0>(v6, 176 * ((*v5 - (_QWORD)v6) / 176LL));
          *(v5 - 2) = 0LL;
          *(v5 - 1) = 0LL;
          *v5 = 0LL;
        }
        std::vector<CDepthSortingLayer>::_Tidy(v3);
        v3 += 7;
        v5 += 7;
      }
      while ( v3 != v4 );
      v3 = (_QWORD *)*((_QWORD *)this + 90);
    }
    std::_Deallocate<16,0>(v3, 56 * ((*((_QWORD *)this + 92) - (_QWORD)v3) / 56LL));
    *((_QWORD *)this + 90) = 0LL;
    *((_QWORD *)this + 91) = 0LL;
    *((_QWORD *)this + 92) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 672);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 640);
  operator delete(*((void **)this + 75));
  CLightStack::~CLightStack((CPreComputeContext *)((char *)this + 304));
  operator delete(*((void **)this + 36));
  operator delete(*((void **)this + 32));
  operator delete(*((void **)this + 28));
  operator delete(*((void **)this + 24));
  operator delete(*((void **)this + 20));
  operator delete(*((void **)this + 16));
  operator delete(*((void **)this + 12));
  operator delete(*((void **)this + 8));
  operator delete(*((void **)this + 4));
}
