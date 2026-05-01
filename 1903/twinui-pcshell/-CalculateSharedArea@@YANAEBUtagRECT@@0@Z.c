/*
 * XREFs of ?CalculateSharedArea@@YANAEBUtagRECT@@0@Z @ 0x18025F1FC
 * Callers:
 *     ?IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplateAppliedToView@TabViewManagerMeasures@@@Z @ 0x18025F93C (-IsWindowMisbehaving@ViewGroup@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@1AEAVGroupWindowTemplat.c)
 * Callees:
 *     <none>
 */

double __fastcall CalculateSharedArea(const struct tagRECT *a1, const struct tagRECT *a2)
{
  LONG right; // edi
  LONG bottom; // r10d
  LONG top; // r8d
  LONG left; // esi
  LONG v6; // ebx
  LONG v7; // r11d
  LONG v8; // r9d
  LONG v9; // ecx
  LONG v10; // eax
  LONG v11; // eax
  int v12; // r11d
  LONG v14; // [rsp+Ch] [rbp-Ch]

  right = a1->right;
  bottom = a1->bottom;
  top = a1->top;
  left = a1->left;
  v6 = a2->right;
  v7 = v6;
  v8 = a2->bottom;
  v9 = a2->left;
  if ( right < v6 )
    v7 = right;
  v10 = a2->bottom;
  if ( bottom < v8 )
    v10 = bottom;
  v14 = v10;
  v11 = a2->top;
  if ( left > v9 )
    v9 = left;
  if ( top > v11 )
    v11 = top;
  v12 = v7 - v9;
  if ( v12 <= 0 || v14 - v11 <= 0 )
    return 0.0;
  else
    return (double)(v12 * (v14 - v11))
         / ((double)((v6 - a2->left) * (v8 - a2->top))
          + (double)((right - left) * (bottom - top))
          - (double)(v12 * (v14 - v11)));
}
