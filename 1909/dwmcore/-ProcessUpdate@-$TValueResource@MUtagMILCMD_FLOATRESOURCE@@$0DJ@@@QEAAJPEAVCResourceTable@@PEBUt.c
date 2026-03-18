/*
 * XREFs of ?ProcessUpdate@?$TValueResource@MUtagMILCMD_FLOATRESOURCE@@$0DJ@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FLOATRESOURCE@@@Z @ 0x1800E79CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<float,tagMILCMD_FLOATRESOURCE,57>::ProcessUpdate(_DWORD *a1, __int64 a2, __int64 a3)
{
  a1[14] = *(_DWORD *)(a3 + 8);
  (*(void (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, 0LL, 0LL);
  return 0LL;
}
