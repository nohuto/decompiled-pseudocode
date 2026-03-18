/*
 * XREFs of ??$AddProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x1C00BFCC0
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0080CF0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     ??$AddProperty@_N@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_NPEAI@Z @ 0x1C01A9BB0 (--$AddProperty@_N@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<bool>(__int64 a1, _DWORD *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_QWORD *)(a1 + 56);
  v5 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<bool>(
              a1 + 56,
              (unsigned int)a2[2],
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
