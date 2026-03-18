/*
 * XREFs of ?GetSize@CRenderTargetBitmap@@UEBAXPEAI0@Z @ 0x1801AB6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18005250C (-GetRenderBounds@CRenderTargetBitmap@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILS.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

void __fastcall CRenderTargetBitmap::GetSize(CRenderTargetBitmap *this, unsigned int *a2, unsigned int *a3)
{
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+2Ch] [rbp-1Ch]

  CRenderTargetBitmap::GetRenderBounds((__int64)this - 144, &v5);
  *a2 = v6 - v5;
  *a3 = v7 - HIDWORD(v5);
}
