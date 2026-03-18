/*
 * XREFs of ?QueueForRender@CDrawListEntryBatch@@QEAAXPEAVIRenderTarget@@@Z @ 0x180023924
 * Callers:
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800230D0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800234C0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180046D70 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawListEntryBatch::QueueForRender(CDrawListEntryBatch *this, struct IRenderTarget *a2)
{
  int v4; // edx
  __int64 v5; // rax
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_DWORD *)((*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v6) + 8);
  *((_DWORD *)this + 18) = v4;
  if ( v4 == 1 )
    *((float *)this + 19) = (*(float (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 152LL))(a2);
  v5 = (*(__int64 (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a2 + 104LL))(a2);
  *((float *)this + 14) = 2.0 / (float)*(int *)(v5 + 140);
  LODWORD(v5) = *(_DWORD *)(v5 + 144);
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = -1082130432;
  *((_DWORD *)this + 17) = 1065353216;
  *((float *)this + 15) = -2.0 / (float)(int)v5;
}
