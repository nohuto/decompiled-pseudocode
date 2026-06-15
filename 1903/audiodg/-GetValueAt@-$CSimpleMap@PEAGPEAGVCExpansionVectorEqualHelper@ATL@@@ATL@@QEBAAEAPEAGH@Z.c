/*
 * XREFs of ?GetValueAt@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEBAAEAPEAGH@Z @ 0x14004F7A0
 * Callers:
 *     ?ClearReplacements@CExpansionVector@ATL@@QEAAJXZ @ 0x14004EAE8 (-ClearReplacements@CExpansionVector@ATL@@QEAAJXZ.c)
 *     ?StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z @ 0x14005138C (-StrFromMap@CRegObject@ATL@@QEAAPEBGPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::GetValueAt(
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 16) )
  {
    RaiseException(0xC000008C, 1u, 0, 0LL);
    JUMPOUT(0x14004F7D2LL);
  }
  return *(_QWORD *)(a1 + 8) + 8LL * a2;
}
