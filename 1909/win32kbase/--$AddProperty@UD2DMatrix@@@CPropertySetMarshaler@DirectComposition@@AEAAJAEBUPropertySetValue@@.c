/*
 * XREFs of ??$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C00BD960
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C007D280 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1C01A7918 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMod.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DMatrix>(
              a1 + 56,
              (unsigned int)a2[2],
              a3,
              &v9) >= 0 )
  {
    if ( v9 == *a2 && (v6 = *(_QWORD *)(a1 + 56), v7 = *(_DWORD *)(v6 + 8LL * v9 + 4) & 0x1FFFFFFF, v7 == a2[1]) )
    {
      *(_DWORD *)(v6 + 8LL * v9 + 4) = v7 | 0x20000000;
    }
    else
    {
      --*(_DWORD *)(a1 + 64);
      v5 = -1073741811;
      *(_DWORD *)(a1 + 80) -= 64;
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v5;
}
