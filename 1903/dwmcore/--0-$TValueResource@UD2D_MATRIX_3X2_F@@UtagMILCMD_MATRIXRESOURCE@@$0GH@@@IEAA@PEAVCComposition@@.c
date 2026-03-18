/*
 * XREFs of ??0?$TValueResource@UD2D_MATRIX_3X2_F@@UtagMILCMD_MATRIXRESOURCE@@$0GH@@@IEAA@PEAVCComposition@@@Z @ 0x18019CAA4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,103>::TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,103>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,103>::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 56) = 0uLL;
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
