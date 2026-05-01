/*
 * XREFs of ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x1803B6498
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::OverrideBackgroundColor(HMENU a1, HWND a2, char a3)
{
  HRESULT ThemeColor; // edi
  const WCHAR *v7; // rsi
  HTHEME v8; // rbx
  HWND Parent; // rax
  MENUINFO v11; // [rsp+30h] [rbp-48h] BYREF
  COLORREF color; // [rsp+90h] [rbp+18h] BYREF

  ThemeColor = -2147418113;
  memset_0(&v11, 0, sizeof(v11));
  v11.cbSize = 40;
  v11.fMask = -2147483646;
  v7 = L"ImmersiveStartDark::Menu";
  if ( (a3 & 8) == 0 )
    v7 = L"ImmersiveStart::Menu";
  v8 = OpenThemeData(a2, v7);
  if ( v8 || (Parent = GetParent(a2), (v8 = OpenThemeData(Parent, v7)) != 0LL) )
  {
    ThemeColor = GetThemeColor(v8, 9, 0, 3802, &color);
    if ( ThemeColor >= 0 )
    {
      v11.hbrBack = CreateSolidBrush(color);
      if ( SetMenuInfo(a1, &v11) )
        ThemeColor = 0;
      else
        ThemeColor = ResultFromKnownLastError();
    }
    CloseThemeData(v8);
  }
  return (unsigned int)ThemeColor;
}
