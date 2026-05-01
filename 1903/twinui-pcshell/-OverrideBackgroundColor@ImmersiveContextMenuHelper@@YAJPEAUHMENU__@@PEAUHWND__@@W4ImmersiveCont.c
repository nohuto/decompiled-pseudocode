/*
 * XREFs of ?OverrideBackgroundColor@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@W4ImmersiveContextMenuOptions@@@Z @ 0x180418C94
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x18041863C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180116D70 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall ImmersiveContextMenuHelper::OverrideBackgroundColor(HMENU a1, HWND a2, char a3)
{
  char v3; // r15
  const wchar_t *v4; // rbp
  const WCHAR *v6; // rsi
  const WCHAR *v8; // rdx
  HRESULT ThemeColor; // ebx
  HTHEME v10; // rdi
  HWND Parent; // rax
  MENUINFO v13; // [rsp+30h] [rbp-58h] BYREF
  COLORREF color; // [rsp+A0h] [rbp+18h] BYREF

  v3 = byte_18059B684;
  v4 = L"LightMode_ImmersiveStart::Menu";
  v13.cbSize = 40;
  v13.fMask = -2147483646;
  v6 = L"DarkMode_ImmersiveStart::Menu";
  memset(&v13.dwStyle, 0, 32);
  v8 = L"DarkMode_ImmersiveStart::Menu";
  ThemeColor = -2147418113;
  if ( (a3 & 8) == 0 )
    v4 = L"ImmersiveStart::Menu";
  if ( !byte_18059B684 )
    v8 = v4;
  v10 = OpenThemeData(a2, v8);
  if ( v10 )
    goto LABEL_9;
  if ( !v3 )
    v6 = v4;
  Parent = GetParent(a2);
  v10 = OpenThemeData(Parent, v6);
  if ( v10 )
  {
LABEL_9:
    ThemeColor = GetThemeColor(v10, 9, 0, 3802, &color);
    if ( ThemeColor >= 0 )
    {
      v13.hbrBack = CreateSolidBrush(color);
      if ( SetMenuInfo(a1, &v13) )
        ThemeColor = 0;
      else
        ThemeColor = ResultFromKnownLastError();
    }
    CloseThemeData(v10);
  }
  return (unsigned int)ThemeColor;
}
