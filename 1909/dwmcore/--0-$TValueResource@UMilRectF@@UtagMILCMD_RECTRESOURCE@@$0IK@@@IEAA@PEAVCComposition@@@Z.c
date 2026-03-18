/*
 * XREFs of ??0?$TValueResource@UMilRectF@@UtagMILCMD_RECTRESOURCE@@$0IK@@@IEAA@PEAVCComposition@@@Z @ 0x18001E448
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TValueResource<MilRectF,tagMILCMD_RECTRESOURCE,138>::TValueResource<MilRectF,tagMILCMD_RECTRESOURCE,138>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<MilRectF,tagMILCMD_RECTRESOURCE,138>::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 56) = 0uLL;
  return result;
}
