/*
 * XREFs of ?GetHideFileExtensionsEnabled@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1800811F4
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x18003E898 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 * Callees:
 *     <none>
 */

char __fastcall CortanaDesktopExperienceView::GetHideFileExtensionsEnabled(CortanaDesktopExperienceView *this)
{
  char v1; // bl
  LSTATUS ValueW; // eax
  signed int v3; // edx
  char v4; // al
  bool v6; // zf
  CortanaDesktopExperienceView *v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF

  v7 = this;
  v9 = 4;
  v1 = 0;
  v8 = 0;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"HideFileExt",
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
      goto LABEL_6;
    goto LABEL_5;
  }
  if ( v8 != 4 )
  {
    if ( v9 == 4 && (unsigned __int16)((_WORD)v7 - 48) <= 1u )
    {
      v6 = (_WORD)v7 == 49;
      goto LABEL_12;
    }
LABEL_5:
    v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_6:
    v4 = (char)v7;
    goto LABEL_7;
  }
  v6 = (_DWORD)v7 == 1;
  if ( (unsigned int)v7 > 1 )
    goto LABEL_5;
LABEL_12:
  v3 = 0;
  v4 = v6;
LABEL_7:
  if ( v3 >= 0 )
    return v4;
  return v1;
}
