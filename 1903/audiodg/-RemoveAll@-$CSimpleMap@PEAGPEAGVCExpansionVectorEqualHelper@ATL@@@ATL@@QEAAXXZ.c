/*
 * XREFs of ?RemoveAll@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAXXZ @ 0x1400511CC
 * Callers:
 *     ??1CRegObject@ATL@@UEAA@XZ @ 0x14004DAB8 (--1CRegObject@ATL@@UEAA@XZ.c)
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14004EAE8 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    free(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 8);
  if ( v3 )
  {
    free(v3);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)(a1 + 16) = 0;
}
