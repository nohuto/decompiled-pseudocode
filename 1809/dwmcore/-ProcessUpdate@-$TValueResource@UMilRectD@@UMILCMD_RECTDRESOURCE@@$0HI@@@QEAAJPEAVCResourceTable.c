/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UMilRectD@@UMILCMD_RECTDRESOURCE@@$0HI@@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTDRESOURCE@@@Z @ 0x18014BC7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<MilRectD,MILCMD_RECTDRESOURCE,120>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  void (__fastcall *v4)(__int64 *, _QWORD, _QWORD); // rax

  v3 = *a1;
  *(_OWORD *)(a1 + 7) = *(_OWORD *)(a3 + 8);
  v4 = *(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 64);
  *(_OWORD *)(a1 + 9) = *(_OWORD *)(a3 + 24);
  v4(a1, 0LL, 0LL);
  return 0LL;
}
