/*
 * XREFs of NtRIMGetDeviceProperties @ 0x1C00DF610
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDeviceProperties @ 0x1C00E20D0 (RIMGetDeviceProperties.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMGetDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetDeviceProperties(a1, a2, a3, 1LL);
  else
    return 3221225506LL;
}
