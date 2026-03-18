/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180020FB0
 * Callers:
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1800177F0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z.c)
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180020DB0 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBi.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x180020F60 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@IPEAPEAV1@@Z @ 0x180021110 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDeviceLevel1@@PEAVIWarpPrivateAPI@@PEAUIDXGIResource@@I.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // r12
  char *v6; // rax
  char *v11; // rsi
  __int64 v12; // rax
  CGdiSpriteBitmap *v13; // rbx
  __int64 v14; // rcx
  struct IWarpPrivateAPI *v15; // r13
  struct IUnknown **v16; // rdx
  int v17; // eax
  __m128i v18; // xmm0
  unsigned int v19; // ecx
  struct IDXGIResource *v21; // [rsp+60h] [rbp+8h] BYREF

  v5 = a5;
  v6 = (char *)this + 260;
  *a3 = 0;
  *v5 = 0LL;
  *a2 = 0LL;
  *a4 = 0;
  if ( !*((_BYTE *)this + 261) || *v6 )
  {
    v11 = (char *)this + 260;
    v21 = 0LL;
    v12 = *((_QWORD *)this + 3);
    v13 = 0LL;
    a5 = 0LL;
    v14 = *(_QWORD *)(v12 + 24);
    v6 = v11;
    v15 = *(struct IWarpPrivateAPI **)(v14 + 616);
    *((_BYTE *)this + 261) = 1;
    *v11 = 0;
    if ( v15 )
    {
      if ( (***((int (__fastcall ****)(_QWORD, GUID *, struct IDXGIResource **))this + 17))(
             *((_QWORD *)this + 17),
             &GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b,
             &v21) >= 0 )
      {
        if ( (int)CWarpLockSubresource::Create(
                    *(struct CD3DDeviceLevel1 **)(*((_QWORD *)this + 3) + 24LL),
                    v15,
                    v21,
                    *((_DWORD *)this + 64),
                    (struct CWarpLockSubresource **)&a5) < 0 )
        {
          v13 = (CGdiSpriteBitmap *)a5;
        }
        else
        {
          v16 = a5;
          v17 = *((_DWORD *)this + 43);
          *v5 = (struct IUnknown *)a5;
          v18 = *((__m128i *)v16 + 3);
          *v11 = 1;
          *a2 = (unsigned __int8 *)v18.m128i_i64[0];
          v19 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 8));
          *a3 = v19;
          *a4 = v19 * v17;
        }
      }
      if ( v21 )
        ((void (__fastcall *)(struct IDXGIResource *))v21->lpVtbl->Release)(v21);
      v6 = v11;
      if ( v13 )
      {
        CGdiSpriteBitmap::Release(v13);
        v6 = v11;
      }
    }
  }
  return *v6;
}
