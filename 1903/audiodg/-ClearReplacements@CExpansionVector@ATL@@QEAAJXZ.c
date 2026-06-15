/*
 * XREFs of ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14004EAE8
 * Callers:
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x14004DAB8 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?ClearReplacements@CRegObject@ATL@@UEAAJXZ @ 0x14004EB70 (-ClearReplacements@CRegObject@ATL@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x14004F7A0 (-GetValueAt@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z.c)
 *     ?RemoveAll@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAXXZ @ 0x1400511CC (-RemoveAll@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall ATL::CExpansionVector::ClearReplacements(ATL::CExpansionVector *this)
{
  int v1; // eax
  int v2; // edi
  __int64 v4; // rsi
  void **ValueAt; // rax

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  if ( v1 > 0 )
  {
    v4 = 0LL;
    do
    {
      if ( v2 < 0 || v2 >= v1 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x14004EB67LL);
      }
      operator delete(*(void **)(v4 + *(_QWORD *)this));
      ValueAt = (void **)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
                           this,
                           (unsigned int)v2);
      operator delete(*ValueAt);
      v1 = *((_DWORD *)this + 4);
      ++v2;
      v4 += 8LL;
    }
    while ( v2 < v1 );
  }
  ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::RemoveAll(this);
  return 0LL;
}
