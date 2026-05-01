/*
 * XREFs of ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800145EC
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000EE8C (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x180067184 (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006FF10 (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x18001375C (CempHostInfoInitialize.c)
 */

__int64 __fastcall HampUtilValidateAndCapturePsmInformation(
        STRSAFE_LPWSTR pszDest,
        STRSAFE_PCNZWCH pszSrc,
        PSID SourceSid,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  unsigned int v11; // ebx
  unsigned int v12; // eax

  v11 = 0;
  if ( (unsigned __int8)PsmIsValidKey(pszSrc) )
  {
    if ( a4 >= 0xC && RtlValidSid(SourceSid) && RtlLengthSid(SourceSid) == a4 )
    {
      if ( !a6 )
        return (unsigned int)-1073741580;
      if ( ((a6 - 1) & a6) != 0 )
        return (unsigned int)-1073741580;
      _BitScanForward(&v12, a6);
      if ( v12 >= 4 )
      {
        return (unsigned int)-1073741580;
      }
      else if ( a7 == -1LL )
      {
        return (unsigned int)-1073741579;
      }
      else
      {
        CempHostInfoInitialize(pszSrc, SourceSid, a5, a6, a7, pszDest);
      }
    }
    else
    {
      return (unsigned int)-1073741583;
    }
  }
  else
  {
    return (unsigned int)-1073741584;
  }
  return v11;
}
