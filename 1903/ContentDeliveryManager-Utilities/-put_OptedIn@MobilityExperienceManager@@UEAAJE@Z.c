/*
 * XREFs of ?put_OptedIn@MobilityExperienceManager@@UEAAJE@Z @ 0x18009CE60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall MobilityExperienceManager::put_OptedIn(MobilityExperienceManager *this, char a2)
{
  LSTATUS v2; // eax
  signed int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  BOOL Data; // [rsp+48h] [rbp+10h] BYREF

  Data = a2 != 0;
  v2 = RegSetKeyValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
         L"OptedIn",
         4u,
         &Data,
         4u);
  v3 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v3 = v2;
  if ( v3 >= 0 )
    v3 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
      (const char *)(unsigned int)v3);
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\mobilityexperience\\lib\\mobilityexperience.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
