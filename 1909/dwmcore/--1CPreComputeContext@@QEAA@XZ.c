/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x180023E30
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x180023D80 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180025500 (--1CLightStack@@QEAA@XZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x18002568C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@VCDepthSortingLayer@@V?$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ @ 0x18025106C (-_Tidy@-$vector@VCDepthSortingLayer@@V-$allocator@VCDepthSortingLayer@@@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this, unsigned int a2)
{
  CContentBounder *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rbp
  _QWORD *v6; // rsi
  __int64 v7; // rcx

  v3 = (CContentBounder *)*((_QWORD *)this + 79);
  if ( v3 )
    CContentBounder::`scalar deleting destructor'(v3, a2);
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
  v4 = *((_QWORD *)this + 90);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 91);
    if ( v4 != v5 )
    {
      v6 = (_QWORD *)(v4 + 48);
      do
      {
        v7 = *(v6 - 2);
        if ( v7 )
        {
          std::_Deallocate<16,0>(v7, 176 * ((*v6 - v7) / 176));
          *(v6 - 2) = 0LL;
          *(v6 - 1) = 0LL;
          *v6 = 0LL;
        }
        std::vector<CDepthSortingLayer>::_Tidy(v4);
        v4 += 56LL;
        v6 += 7;
      }
      while ( v4 != v5 );
      v4 = *((_QWORD *)this + 90);
    }
    std::_Deallocate<16,0>(v4, 56 * ((*((_QWORD *)this + 92) - v4) / 56));
    *((_QWORD *)this + 90) = 0LL;
    *((_QWORD *)this + 91) = 0LL;
    *((_QWORD *)this + 92) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 672);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 640);
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
