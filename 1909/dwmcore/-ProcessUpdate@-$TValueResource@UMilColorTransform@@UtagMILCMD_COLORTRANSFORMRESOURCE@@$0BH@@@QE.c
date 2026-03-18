/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORTRANSFORMRESOURCE@@@Z @ 0x18019FFFC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<MilColorTransform,tagMILCMD_COLORTRANSFORMRESOURCE,23>::ProcessUpdate(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a3 + 8);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a3 + 24);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a3 + 40);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a3 + 56);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a3 + 72);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a3 + 88);
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a3 + 104);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
  return 0LL;
}
