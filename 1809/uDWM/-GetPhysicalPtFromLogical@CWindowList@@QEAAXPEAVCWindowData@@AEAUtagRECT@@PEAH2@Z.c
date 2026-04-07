/*
 * XREFs of ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x1800151EC
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x1800142F0 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18008AE8C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     floor_0 @ 0x18004E25A (floor_0.c)
 */

void __fastcall CWindowList::GetPhysicalPtFromLogical(
        CWindowList *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5)
{
  LONG left; // edi
  LONG top; // esi
  float v9; // xmm7_4

  left = a3->left;
  top = a3->top;
  if ( (double)*((int *)a2 + 82) != 0.0 || (double)*((int *)a2 + 83) != 0.0 )
  {
    left -= (int)floor_0((float)*((int *)a2 + 82) + 0.5);
    top -= (int)floor_0((float)*((int *)a2 + 83) + 0.5);
  }
  v9 = *((float *)a2 + 76);
  if ( v9 != 1.0 )
  {
    left = (int)floor_0((float)((float)left * v9) + 0.5);
    top = (int)floor_0((float)((float)top * v9) + 0.5);
  }
  if ( (double)*((int *)a2 + 84) != 0.0 || (double)*((int *)a2 + 85) != 0.0 )
  {
    left += (int)floor_0((float)*((int *)a2 + 84) + 0.5);
    top += (int)floor_0((float)*((int *)a2 + 85) + 0.5);
  }
  *a5 = top;
  *a4 = left;
}
