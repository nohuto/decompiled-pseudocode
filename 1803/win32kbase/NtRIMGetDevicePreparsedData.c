/*
 * XREFs of NtRIMGetDevicePreparsedData @ 0x1C00DF580
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetDevicePreparsedData @ 0x1C00E1E40 (RIMGetDevicePreparsedData.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMGetDevicePreparsedData(int a1, int a2, int a3, int a4)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMGetDevicePreparsedData(a1, a2, a3, a4, 1);
  else
    return 3221225506LL;
}
