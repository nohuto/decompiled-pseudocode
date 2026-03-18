/*
 * XREFs of NtRIMGetDeviceProperties @ 0x1C01367E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C006C8A0 (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     RIMGetDeviceProperties @ 0x1C0138B40 (RIMGetDeviceProperties.c)
 */

__int64 __fastcall NtRIMGetDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetDeviceProperties(a1, a2, a3, 1LL);
  else
    return 3221225506LL;
}
