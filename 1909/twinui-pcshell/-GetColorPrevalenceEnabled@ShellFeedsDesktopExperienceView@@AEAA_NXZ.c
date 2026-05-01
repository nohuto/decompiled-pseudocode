/*
 * XREFs of ?GetColorPrevalenceEnabled@ShellFeedsDesktopExperienceView@@AEAA_NXZ @ 0x18009CBE8
 * Callers:
 *     ?BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING__@@@Z @ 0x18009BEE0 (-BuildAdditionalArgsString@ShellFeedsDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUHSTRING_.c)
 *     ?OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z @ 0x18009DC90 (-OnMessage@ShellFeedsDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShellFeedsDesktopExperienceView::GetColorPrevalenceEnabled(ShellFeedsDesktopExperienceView *this)
{
  char v1; // bl
  LSTATUS ValueW; // eax
  signed int v3; // edx
  bool v4; // zf
  char v5; // al
  ShellFeedsDesktopExperienceView *v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF

  v7 = this;
  v9 = 4;
  v1 = 0;
  v8 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Themes\\Personalize",
             L"ColorPrevalence",
             0x10000012u,
             &v8,
             &v7,
             &v9);
  LOWORD(v3) = 13;
  if ( ValueW )
  {
    if ( ValueW == 234 )
      ValueW = 13;
    v3 = ValueW;
    if ( ValueW <= 0 )
      goto LABEL_12;
  }
  else if ( v8 == 4 )
  {
    v4 = (_DWORD)v7 == 1;
    if ( (unsigned int)v7 <= 1 )
    {
LABEL_4:
      v3 = 0;
      v5 = v4;
      goto LABEL_13;
    }
  }
  else if ( v9 == 4 && (unsigned __int16)((_WORD)v7 - 48) <= 1u )
  {
    v4 = (_WORD)v7 == 49;
    goto LABEL_4;
  }
  v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_12:
  v5 = (char)v7;
LABEL_13:
  if ( v3 >= 0 )
    return v5;
  return v1;
}
