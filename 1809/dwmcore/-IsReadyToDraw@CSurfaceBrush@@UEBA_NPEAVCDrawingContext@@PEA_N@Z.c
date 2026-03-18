/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x18009F920
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z @ 0x18008CFC0 (-GetCurrentSize@CCachedVisualImage@@QEBAXPEAI0@Z.c)
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x1800A12BC (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this, struct CDrawingContext *a2, bool *a3)
{
  unsigned __int8 v4; // di
  __int64 v5; // rcx
  char v6; // si
  char v8; // al
  __int64 v9; // r8
  char v10; // al
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  char v14; // al
  __int64 *v15; // rcx
  bool v16; // zf
  __int64 v17; // rax
  CCompositionSurfaceInfo *v18; // rcx
  __int64 v19; // rax
  struct D2D_RECT_F *v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+24h] [rbp-34h] BYREF
  struct D2D_RECT_F v23; // [rsp+28h] [rbp-30h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 11);
  v6 = 0;
  if ( v5 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 48LL))(v5, 15LL);
    v9 = *((_QWORD *)this + 11);
    if ( v8 )
    {
      v20 = (struct D2D_RECT_F *)(v9 - 16);
      if ( !v9 )
        v20 = 0LL;
      v23 = v20[9];
      CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)v20, &v21, &v22);
      if ( !v21 || !v22 || IsEmpty(&v23) )
      {
        v4 = 0;
        goto LABEL_7;
      }
      goto LABEL_6;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 48LL))(*((_QWORD *)this + 11), 37LL);
    v11 = (_QWORD *)*((_QWORD *)this + 11);
    if ( !v10 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v11 + 48LL))(v11, 109LL);
      v15 = (__int64 *)*((_QWORD *)this + 11);
      v16 = v14 == 0;
      v17 = *v15;
      if ( !v16 )
      {
        v4 = 1;
        v6 = (*(__int64 (**)(void))(v17 + 192))();
        goto LABEL_7;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(v17 + 48))(v15, 79LL) )
        goto LABEL_7;
      v6 = 0;
      goto LABEL_6;
    }
    v12 = v11[11];
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 120)
        || !*(_BYTE *)(v12 + 408)
        && (v18 = (CCompositionSurfaceInfo *)v11[11],
            *(_BYTE *)(v12 + 408) = 1,
            CCompositionSurfaceInfo::EnsureCurrentRenderingRealization(v18),
            v19 = *(_QWORD *)(v12 + 120),
            *(_BYTE *)(v12 + 408) = 0,
            v19) )
      {
LABEL_6:
        v4 = 1;
      }
    }
  }
LABEL_7:
  *a3 = v6;
  return v4;
}
