/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180025B08
 * Callers:
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x180022CE0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180022D44 (-PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANT.c)
 *     ?PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x1800230D0 (-PushTarget@CD2DContext@@MEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z @ 0x180025ACC (-ApplyState@CD2DTarget@@QEAAXPEAVCD2DContext@@@Z.c)
 * Callees:
 *     ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180025BE4 (-D2DRemoveClip@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  unsigned int v2; // ebp
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]

  if ( *((_BYTE *)this + 56) )
  {
    v2 = *((_DWORD *)this + 19);
    if ( *((_BYTE *)this + 48) )
    {
      v3 = *((_QWORD *)this + 2);
      v8 = 0;
      v9 = 0;
      v4 = *(_QWORD *)(v3 + 232);
      v7 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 240LL))(v4, &v7);
      v5 = *(_QWORD *)(v3 + 240);
      *(_BYTE *)(v3 + 494) = 0;
      v6 = *(_OWORD *)((char *)this + 60);
      *(_DWORD *)(v3 + 456) = v2;
      *(_OWORD *)(v3 + 440) = v6;
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v5 + 80LL))(v5, (char *)this + 60, v2);
    }
    *((_BYTE *)this + 56) = 1;
  }
  else
  {
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
  }
}
