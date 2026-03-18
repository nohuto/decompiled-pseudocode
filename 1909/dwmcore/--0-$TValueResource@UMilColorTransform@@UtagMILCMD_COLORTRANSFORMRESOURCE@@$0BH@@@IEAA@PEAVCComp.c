/*
 * XREFs of ??0?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@IEAA@PEAVCComposition@@@Z @ 0x18019B238
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,23>::TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,23>(
        __int64 a1,
        __int64 a2)
{
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  _OWORD v10[6]; // [rsp+20h] [rbp-78h] BYREF
  int v11; // [rsp+80h] [rbp-18h]

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,23>::`vftable';
  memset_0(v10, 0, 0x64uLL);
  v3 = v10[1];
  v4 = v11;
  *(_OWORD *)(a1 + 56) = v10[0];
  v5 = v10[2];
  *(_OWORD *)(a1 + 72) = v3;
  v6 = v10[3];
  *(_OWORD *)(a1 + 88) = v5;
  v7 = v10[4];
  *(_OWORD *)(a1 + 104) = v6;
  v8 = v10[5];
  *(_OWORD *)(a1 + 120) = v7;
  *(_OWORD *)(a1 + 136) = v8;
  *(_DWORD *)(a1 + 152) = v4;
  return a1;
}
