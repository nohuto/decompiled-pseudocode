/*
 * XREFs of ?ProcessUpdate@?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CO@@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DOUBLERESOURCE@@@Z @ 0x18014BBE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<double,MILCMD_DOUBLERESOURCE,46>::ProcessUpdate(_QWORD *a1, __int64 a2, __int64 a3)
{
  a1[7] = *(_QWORD *)(a3 + 8);
  (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 64LL))(a1, 0LL, 0LL);
  return 0LL;
}
