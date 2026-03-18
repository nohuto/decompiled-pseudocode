/*
 * XREFs of ??0?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@IEAA@PEAVCComposition@@@Z @ 0x1800E7878
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TValueResource<float,tagMILCMD_FLOATRESOURCE,57>::TValueResource<float,tagMILCMD_FLOATRESOURCE,57>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<float,tagMILCMD_FLOATRESOURCE,57>::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 56) = 0;
  return result;
}
