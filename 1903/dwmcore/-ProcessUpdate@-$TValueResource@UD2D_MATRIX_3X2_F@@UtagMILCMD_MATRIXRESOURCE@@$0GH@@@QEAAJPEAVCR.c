/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UD2D_MATRIX_3X2_F@@UtagMILCMD_MATRIXRESOURCE@@$0GH@@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MATRIXRESOURCE@@@Z @ 0x1801A1884
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<D2D_MATRIX_3X2_F,tagMILCMD_MATRIXRESOURCE,103>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  void (__fastcall *v4)(__int64 *, _QWORD, _QWORD); // rax

  v3 = *a1;
  *(_OWORD *)(a1 + 7) = *(_OWORD *)(a3 + 8);
  v4 = *(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 64);
  a1[9] = *(_QWORD *)(a3 + 24);
  v4(a1, 0LL, 0LL);
  return 0LL;
}
