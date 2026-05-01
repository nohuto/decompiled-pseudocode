/*
 * XREFs of ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180407458
 * Callers:
 *     ?ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z @ 0x1801DB8D0 (-ActivateApp@PenWorkspaceDiscoverBroker@@UEAAJPEBG@Z.c)
 *     ?GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z @ 0x1801DBCC0 (-GetAumid@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAGPEAU_FILETIME@@@Z.c)
 *     ?GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z @ 0x1801DC460 (-GetPackageFullNameFromAppId@PenWorkspaceDiscoverBroker@@UEAAJPEBGPEAPEAG@Z.c)
 *     ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1801DC4E0 (-GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z.c)
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x1801DC640 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1801E4F20 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 * Callees:
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x18001D880 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z @ 0x180406F50 (-GetCallingProcessAppId@CallerIdentity@@YAJPEAPEAG@Z.c)
 *     ?IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z @ 0x1804074C4 (-IsShellExperienceAppId@CallerIdentity@@YA_NPEBG@Z.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x18040839C (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 */

__int64 __fastcall CallerIdentity::EnsureCallingProcessIsShellExperience(CallerIdentity *this, __int64 a2, bool *a3)
{
  unsigned __int16 **v4; // rdx
  const unsigned __int16 *v5; // rdx
  signed int CallingProcessAppId; // ebx
  LPCWCH lpString2; // [rsp+30h] [rbp+8h] BYREF

  if ( CallerIdentity::CheckCallerCapability(this, (const unsigned __int16 *)&lpString2, a3) >= 0 && (_BYTE)lpString2 )
    return 0LL;
  lpString2 = 0LL;
  CoTaskMemFree(0LL);
  CallingProcessAppId = CallerIdentity::GetCallingProcessAppId((unsigned int **)&lpString2, v4);
  if ( CallingProcessAppId >= 0 )
    CallingProcessAppId = !CallerIdentity::IsShellExperienceAppId(lpString2, v5) ? 0x80070005 : 0;
  CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>((LPVOID *)&lpString2);
  return (unsigned int)CallingProcessAppId;
}
