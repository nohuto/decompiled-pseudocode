/*
 * XREFs of ?SetOpacity@CAtlasedImage@@QEAAXM@Z @ 0x180020CF4
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180020D74 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z @ 0x18003AB5C (-SetShadowOpacity@CTopLevelWindow@@QEAAXM@Z.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18007E4BC (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 * Callees:
 *     floor_0 @ 0x18004FACA (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetOpacity(CAtlasedImage *this, float a2)
{
  int v3; // ecx
  unsigned __int8 v4; // al
  int v5; // edi
  __int64 v6; // rcx

  v3 = (int)floor_0((float)(a2 * 255.0) + 0.5);
  v4 = -1;
  if ( v3 <= 255 )
  {
    v4 = 0;
    if ( v3 >= 0 )
      v4 = v3;
  }
  v5 = 16843009 * v4;
  if ( v5 != *((_DWORD *)this + 17) )
  {
    *((_DWORD *)this + 24) |= 2u;
    v6 = *((_QWORD *)this + 10);
    if ( v6 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, 0x2000LL);
    *((_DWORD *)this + 17) = v5;
  }
}
