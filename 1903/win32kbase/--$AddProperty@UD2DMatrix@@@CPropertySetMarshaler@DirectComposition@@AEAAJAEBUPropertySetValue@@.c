/*
 * XREFs of ??$AddProperty@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DMatrix@@@Z @ 0x1C00BF9F0
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0080CF0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x1C0092DA0 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelMod.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<D2DMatrix>(
        __int64 a1,
        _DWORD *a2,
        __int128 *a3)
{
  _QWORD *v3; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 56);
  v5 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<D2DMatrix>(
              a1 + 56,
              a2[2],
              a3,
              &v8) >= 0 )
  {
    if ( v8 == *a2 && (v6 = *(_DWORD *)(*v3 + 8LL * v8 + 4) & 0x1FFFFFFF, v6 == a2[1]) )
      *(_DWORD *)(*v3 + 8LL * v8 + 4) = v6 | 0x20000000;
    else
      return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v5;
}
