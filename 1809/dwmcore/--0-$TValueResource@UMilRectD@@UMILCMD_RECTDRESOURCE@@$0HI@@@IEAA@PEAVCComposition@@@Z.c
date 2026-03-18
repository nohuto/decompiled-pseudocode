/*
 * XREFs of ??0?$TValueResource@UMilRectD@@UMILCMD_RECTDRESOURCE@@$0HI@@@IEAA@PEAVCComposition@@@Z @ 0x180172DC0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall TValueResource<MilRectD,MILCMD_RECTDRESOURCE,120>::TValueResource<MilRectD,MILCMD_RECTDRESOURCE,120>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // xmm1
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<MilRectD,MILCMD_RECTDRESOURCE,120>::`vftable';
  memset_0(v5, 0, sizeof(v5));
  result = a1;
  v4 = v5[1];
  *(_OWORD *)(a1 + 56) = v5[0];
  *(_OWORD *)(a1 + 72) = v4;
  return result;
}
