/*
 * XREFs of ?DestroyBitmapRealizations@CPrimitiveGroupDrawListGenerator@@AEAAXXZ @ 0x1800C6228
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z @ 0x180052254 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@QEAAJPEBVCDrawingContext@@@Z.c)
 *     ?NotifyInvalidResource@CPrimitiveGroupDrawListGenerator@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802584C0 (-NotifyInvalidResource@CPrimitiveGroupDrawListGenerator@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008877C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E86DC (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroupDrawListGenerator::DestroyBitmapRealizations(CPrimitiveGroupDrawListGenerator *this)
{
  char *v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx
  char *v5; // rbx
  char *v6; // rbx

  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 14) = 0;
  v2 = (char *)*((_QWORD *)this + 14);
  *((_QWORD *)this + 14) = 0LL;
  if ( v2 )
  {
    v5 = v2 - 8;
    `vector destructor iterator'(
      v2,
      24LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v5, 24LL * *(_QWORD *)v5 + 8);
  }
  v3 = (char *)*((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v3 )
  {
    v6 = v3 - 8;
    `vector destructor iterator'(
      v3,
      24LL,
      *((_QWORD *)v3 - 1),
      (void (__fastcall *)(char *))CDrawListBitmap::~CDrawListBitmap);
    operator delete[](v6, 24LL * *(_QWORD *)v6 + 8);
  }
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 32LL))(v4, (char *)this + 16);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
  }
}
