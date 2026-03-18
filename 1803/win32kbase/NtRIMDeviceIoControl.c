/*
 * XREFs of NtRIMDeviceIoControl @ 0x1C00DF300
 * Callers:
 *     <none>
 * Callees:
 *     RIMDeviceIoControl @ 0x1C00E0E20 (RIMDeviceIoControl.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C013EE7C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 */

__int64 __fastcall NtRIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9)
{
  if ( (unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return RIMDeviceIoControl(a1, a2, a3, a4, a5, a6, a7, a8, 0LL, 0, a9, 1);
  else
    return 3221225506LL;
}
