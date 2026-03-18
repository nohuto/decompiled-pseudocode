/*
 * XREFs of NtRIMAreSiblingDevices @ 0x1C00DF2A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMAreSiblingDevices @ 0x1C00E0980 (RIMAreSiblingDevices.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMAreSiblingDevices(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMAreSiblingDevices(a1, a2, a3, 1LL);
  else
    return 3221225506LL;
}
