/*
 * XREFs of ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18003CBD0
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18003C618 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18003CF38 (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x18003CFD0 (-SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z.c)
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x18008EBF8 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        char a2,
        HRGN a3,
        struct CRegion *a4)
{
  char v4; // bl
  unsigned int RectangleCount; // eax
  int v11; // r9d
  int v12; // r10d
  _DWORD *v13; // rdx
  int v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+24h] [rbp-44h] BYREF
  _DWORD v16[16]; // [rsp+28h] [rbp-40h] BYREF

  v4 = 0;
  if ( a3 )
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)(*((_QWORD *)this + 20) + 144LL) + 32LL))(
      *((_QWORD *)this + 20) + 144LL,
      &v15,
      &v14);
    if ( a3 == (HRGN)1 )
    {
      v11 = v15;
      v12 = v14;
      if ( v15 <= 0 || v14 <= 0 )
      {
        **(_DWORD **)a4 = 0;
      }
      else
      {
        v13 = *(_DWORD **)a4;
        v13[1] = 0;
        *v13 = 2;
        v13[2] = v11;
        v13[3] = 0;
        v13[4] = 16;
        v13[7] = 0;
        v13[8] = v11;
        v13[5] = v12;
        v13[6] = 16;
      }
    }
    else
    {
      CRegion::SetHRGN(a4, a3);
      CRegion::GetBoundingRect(a4, (struct MilRectU *)v16);
      RectangleCount = FastRegion::CRegion::GetRectangleCount(a4);
      if ( v16[0] || v16[1] || RectangleCount != 1 || v16[2] != v15 || v16[3] != v14 )
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
