/*
 * XREFs of ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x1C00BD9E8
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C007D280 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2DQuaternion@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@PEAI@Z @ 0x1C01A7A54 (--$AddProperty@UD2DQuaternion@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKerne.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v5; // edi
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DQuaternion>(
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
      *(_DWORD *)(a1 + 80) -= 16;
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v5;
}
