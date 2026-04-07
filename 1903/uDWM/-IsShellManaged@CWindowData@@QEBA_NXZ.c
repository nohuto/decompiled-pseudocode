/*
 * XREFs of ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180016034
 * Callers:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014220 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015EF0 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsShellManaged(CWindowData *this)
{
  bool result; // al

  result = (*((_BYTE *)this + 608) & 0x40) != 0;
  if ( (*((_BYTE *)this + 608) & 0x40) != 0 )
    return GetPropW(*((HWND *)this + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") == 0LL;
  return result;
}
