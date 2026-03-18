/*
 * XREFs of NtRIMGetPhysicalDeviceRect @ 0x1C010C2E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00516BC (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C010E500 (RIMGetPhysicalDeviceRect.c)
 */

__int64 __fastcall NtRIMGetPhysicalDeviceRect(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetPhysicalDeviceRect(a1, a2, a3);
  else
    return 3221225506LL;
}
