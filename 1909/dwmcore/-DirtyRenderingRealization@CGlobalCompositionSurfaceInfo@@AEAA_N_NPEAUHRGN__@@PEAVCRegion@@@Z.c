/*
 * XREFs of ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x180064F70
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180062BD4 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM.c)
 * Callees:
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180061E70 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x180062294 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18006C668 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        struct CRegion *a4)
{
  char v4; // bl
  unsigned int *v9; // r8
  unsigned int RectangleCount; // eax
  int v12; // r9d
  int v13; // r10d
  _DWORD *v14; // rdx
  int v15; // [rsp+20h] [rbp-48h] BYREF
  int v16; // [rsp+24h] [rbp-44h] BYREF
  _DWORD v17[16]; // [rsp+28h] [rbp-40h] BYREF

  v4 = 0;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 20) + 144LL) + 32LL))(
      *((_QWORD *)this + 20) + 144LL,
      &v16,
      &v15);
    if ( a3 == (HRGN)1 )
    {
      v12 = v16;
      v13 = v15;
      if ( v16 <= 0 || v15 <= 0 )
      {
        **(_DWORD **)a4 = 0;
      }
      else
      {
        v14 = *(_DWORD **)a4;
        v14[1] = 0;
        *v14 = 2;
        v14[2] = v12;
        v14[3] = 0;
        v14[4] = 16;
        v14[7] = 0;
        v14[8] = v12;
        v14[5] = v13;
        v14[6] = 16;
      }
    }
    else
    {
      CRegion::SetHRGN(a4, a3, v9);
      CRegion::GetBoundingRect(a4, (struct MilRectU *)v17);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(a4);
      if ( v17[0] || v17[1] || RectangleCount != 1 || v17[2] != v16 || v17[3] != v15 )
        *((_BYTE *)this + 240) = 1;
    }
    v4 = 1;
  }
  if ( a3 == (HRGN)1 || a2 && *((_DWORD *)this + 36) > 1u )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 20) + 144LL) + 128LL))(*((_QWORD *)this + 20) + 144LL);
  }
  else if ( v4 )
  {
    (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)(*((_QWORD *)this + 20) + 144LL) + 120LL))(
      *((_QWORD *)this + 20) + 144LL,
      a4);
  }
  return v4;
}
