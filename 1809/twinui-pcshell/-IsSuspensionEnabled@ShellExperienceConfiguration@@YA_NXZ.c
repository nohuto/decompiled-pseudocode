/*
 * XREFs of ?IsSuspensionEnabled@ShellExperienceConfiguration@@YA_NXZ @ 0x180215D14
 * Callers:
 *     ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x1802161D0 (-OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z.c)
 *     ?OnIdleStateChanged@WindowEventDispatcher@@UEAAJH@Z @ 0x180229690 (-OnIdleStateChanged@WindowEventDispatcher@@UEAAJH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ShellExperienceConfiguration::IsSuspensionEnabled(ShellExperienceConfiguration *this)
{
  int v1; // eax
  LSTATUS ValueW; // eax
  signed int v3; // ecx
  bool v4; // zf
  unsigned int v6; // [rsp+50h] [rbp+8h] BYREF
  DWORD v7; // [rsp+58h] [rbp+10h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v1 = `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled;
  if ( !`ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled )
  {
    v7 = 0;
    `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled = 2;
    v8 = 4;
    ValueW = RegGetValueW(
               HKEY_LOCAL_MACHINE,
               L"Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\ShellExperienceHost.exe",
               L"AllowSuspension",
               0x10000012u,
               &v7,
               &v6,
               &v8);
    LOWORD(v3) = 13;
    if ( ValueW )
    {
      if ( ValueW == 234 )
        ValueW = 13;
      v3 = ValueW;
      if ( ValueW <= 0 )
        goto LABEL_14;
    }
    else if ( v7 == 4 )
    {
      if ( v6 <= 1 )
      {
        v3 = 0;
        v4 = v6 == 1;
LABEL_6:
        LOBYTE(ValueW) = v4;
        goto LABEL_15;
      }
    }
    else if ( v8 == 4 && (unsigned __int16)(v6 - 48) <= 1u )
    {
      v3 = 0;
      ValueW = 0;
      v4 = (_WORD)v6 == 49;
      goto LABEL_6;
    }
    v3 = (unsigned __int16)v3 | 0x80070000;
LABEL_14:
    ValueW = v6;
LABEL_15:
    if ( v3 < 0 )
    {
      v1 = `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled;
    }
    else
    {
      v1 = (ValueW ^ 1) + 1;
      `ShellExperienceConfiguration::IsSuspensionEnabled'::`2'::s_suspensionEnabled = v1;
    }
  }
  return v1 == 1;
}
