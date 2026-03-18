/*
 * XREFs of ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18025127C
 * Callers:
 *     ?DoGetTransform@CAtlasImageSource@@AEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180251118 (-DoGetTransform@CAtlasImageSource@@AEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?GetSize@CAtlasImageSource@@UEBAXPEAI0@Z @ 0x180251230 (-GetSize@CAtlasImageSource@@UEBAXPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

struct D2D_SIZE_U __fastcall CAtlasTexture::GetSize(CAtlasTexture *this, _DWORD *a2)
{
  __int64 v3; // rax
  int v4; // ecx
  struct D2D_SIZE_U result; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 104LL))(*((_QWORD *)this + 1));
  v4 = *(_DWORD *)(v3 + 140);
  a2[1] = *(_DWORD *)(v3 + 144);
  result = (struct D2D_SIZE_U)a2;
  *a2 = v4;
  return result;
}
