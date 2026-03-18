/*
 * XREFs of ?CopySubresourceRectInternal1@CD3DDeviceLevel1@@AEAAXPEAUID3D11Resource@@IPEBUtagRECT@@0IPEBUtagPOINT@@I@Z @ 0x1800908FC
 * Callers:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180090558 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0@Z @ 0x180090804 (-CopySurfaceRegionAndCountPixels@CHwFullScreenRenderTarget@@AEAAIPEAVCD3DSurface@@AEBVCRegion@@0.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z @ 0x1801FB744 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAUID3D11Texture2D@@IPEBUtagRECT@@0IPEBUtagPOINT@@_N@Z.c)
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x1801FB7A4 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxdddddd @ 0x1801FDB7C (McTemplateU0xxdddddd.c)
 */

void __fastcall CD3DDeviceLevel1::CopySubresourceRectInternal1(
        CD3DDeviceLevel1 *this,
        struct ID3D11Resource *a2,
        int a3,
        const struct tagRECT *a4,
        struct ID3D11Resource *a5,
        unsigned int a6,
        const struct tagPOINT *a7,
        unsigned int a8)
{
  _DWORD *v8; // rdi
  int v9; // r14d
  LONG left; // eax
  unsigned int x; // esi
  LONG y; // ebp
  int v13; // edx
  int v14; // ecx
  _DWORD v15[6]; // [rsp+60h] [rbp-58h] BYREF

  v8 = 0LL;
  v9 = (int)a2;
  if ( a4 )
  {
    left = a4->left;
    v15[2] = 0;
    v8 = v15;
    v15[0] = left;
    v15[1] = a4->top;
    v15[3] = a4->right;
    v15[4] = a4->bottom;
    v15[5] = 1;
  }
  x = 0;
  y = 0;
  if ( a7 )
  {
    x = a7->x;
    y = a7->y;
  }
  (*(void (__fastcall **)(_QWORD, struct ID3D11Resource *, _QWORD, _QWORD, LONG, _DWORD, struct ID3D11Resource *, int, _DWORD *, unsigned int))(**((_QWORD **)this + 80) + 920LL))(
    *((_QWORD *)this + 80),
    a5,
    a6,
    x,
    y,
    0,
    a2,
    a3,
    v8,
    a8);
  if ( (a8 & 4) != 0 && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xxdddddd(v14, v13, v9, (_DWORD)a5, *v8, v8[1], v8[3], v8[4], x, y);
}
