/*
 * XREFs of ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x18021B4D4
 * Callers:
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@Z @ 0x180028AE0 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@AEBVCMILMatrix@@@.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x18021B97C (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Rotate270(CMILMatrix *this)
{
  CMILMatrix *v1; // rdx
  __int64 v2; // r8
  int v3; // xmm0_4

  v1 = this;
  v2 = 4LL;
  do
  {
    v3 = *(_DWORD *)v1 ^ _xmm;
    *(_DWORD *)v1 = *((_DWORD *)v1 + 1);
    *((_DWORD *)v1 + 1) = v3;
    v1 = (CMILMatrix *)((char *)v1 + 16);
    --v2;
  }
  while ( v2 );
  *((_BYTE *)this + 65) &= 0xC0u;
  *((_BYTE *)this + 64) = 0;
}
