/*
 * XREFs of ?SetGlyphImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@W4VerticalAlignment@1@H@Z @ 0x18002522C
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z @ 0x180025104 (-DrawStateW@CButton@@AEAAJPEAVCAtlasButton@@W4ButtonStates@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasButton::SetGlyphImage(__int64 a1, volatile signed __int32 *a2, __int64 a3, int a4)
{
  CBaseObject *v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax

  v6 = *(CBaseObject **)(a1 + 144);
  if ( v6 != (CBaseObject *)a2 || *(_DWORD *)(a1 + 152) != 1 || a4 != *(_DWORD *)(a1 + 156) )
  {
    *(_DWORD *)(a1 + 152) = 1;
    if ( v6 )
      result = CBaseObject::Release(v6);
    *(_QWORD *)(a1 + 144) = a2;
    if ( a2 )
      _InterlockedIncrement(a2 + 2);
    *(_DWORD *)(a1 + 96) |= 1u;
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
      return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 0x2000LL);
  }
  return result;
}
