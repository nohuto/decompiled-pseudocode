/*
 * XREFs of ??0?$TValueResource@UMilPoint2D@@UtagMILCMD_POINTRESOURCE@@$0HL@@@IEAA@PEAVCComposition@@@Z @ 0x18019CB8C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C4F0 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TValueResource<MilPoint2D,tagMILCMD_POINTRESOURCE,123>::TValueResource<MilPoint2D,tagMILCMD_POINTRESOURCE,123>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<MilPoint2D,tagMILCMD_POINTRESOURCE,123>::`vftable';
  result = a1;
  *(_OWORD *)(a1 + 56) = 0uLL;
  return result;
}
