/*
 * XREFs of ?CreateRectRgnCoerceInvalid@@YAPEAUHRGN__@@PEBUtagRECT@@@Z @ 0x180038914
 * Callers:
 *     ?ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z @ 0x180020304 (-ApplyMaximizedClip@CTopLevelWindow@@AEAAJPEAUHRGN__@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18007DE7C (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall CreateRectRgnCoerceInvalid(const struct tagRECT *a1)
{
  LONG left; // r11d
  int v2; // r10d
  LONG bottom; // eax
  int v4; // r9d
  int v5; // r8d
  int v6; // edx
  LONG right; // eax
  LONG top; // eax

  left = -134217728;
  v2 = 0x7FFFFFF;
  bottom = -134217728;
  v4 = 0x7FFFFFF;
  v5 = 0x7FFFFFF;
  if ( a1->bottom > -134217728 )
    bottom = a1->bottom;
  v6 = 0x7FFFFFF;
  if ( bottom < 0x7FFFFFF )
    v4 = bottom;
  right = -134217728;
  if ( a1->right > -134217728 )
    right = a1->right;
  if ( right < 0x7FFFFFF )
    v5 = right;
  top = -134217728;
  if ( a1->top > -134217728 )
    top = a1->top;
  if ( top < 0x7FFFFFF )
    v6 = top;
  if ( a1->left > -134217728 )
    left = a1->left;
  if ( left < 0x7FFFFFF )
    v2 = left;
  return CreateRectRgn(v2, v6, v5, v4);
}
