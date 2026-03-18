/*
 * XREFs of ?UpdateSubresource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@PEBUtagRECT@@PEBXI_N3@Z @ 0x18009B384
 * Callers:
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180004D98 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800984E0 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::UpdateSubresource(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        const struct tagRECT *a3,
        const void *a4,
        unsigned int a5,
        bool a6,
        bool a7)
{
  LONG left; // eax
  __int64 v8; // rcx
  _DWORD v9[6]; // [rsp+50h] [rbp-28h] BYREF

  left = a3->left;
  v8 = *((_QWORD *)this + 80);
  v9[2] = 0;
  v9[0] = left;
  v9[1] = a3->top;
  v9[3] = a3->right;
  v9[4] = a3->bottom;
  v9[5] = 1;
  (*(void (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _DWORD *, const void *, unsigned int, _DWORD, bool))(*(_QWORD *)v8 + 928LL))(
    v8,
    a2,
    0LL,
    v9,
    a4,
    a5,
    0,
    a7);
}
