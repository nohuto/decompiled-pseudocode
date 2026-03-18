/*
 * XREFs of ?ProcessUpdate@?$TValueResource@UMilPoint2D@@UMILCMD_POINTRESOURCE@@$0GL@@@QEAAJPEAVCResourceTable@@PEBUMILCMD_POINTRESOURCE@@@Z @ 0x18001FBD0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TValueResource<MilPoint2D,MILCMD_POINTRESOURCE,107>::ProcessUpdate(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax

  v3 = *a1;
  *(_OWORD *)(a1 + 7) = *(_OWORD *)(a3 + 8);
  (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(v3 + 64))(a1, 0LL, 0LL);
  return 0LL;
}
