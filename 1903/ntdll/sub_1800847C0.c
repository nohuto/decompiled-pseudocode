/*
 * XREFs of sub_1800847C0 @ 0x1800847C0
 * Callers:
 *     RtlSetSystemBootStatus @ 0x180084790 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x18008B5A0 (RtlGetSystemBootStatus.c)
 *     RtlGetSystemBootStatusEx @ 0x1800EADA0 (RtlGetSystemBootStatusEx.c)
 *     RtlSetSystemBootStatusEx @ 0x1800EAF10 (RtlSetSystemBootStatusEx.c)
 * Callees:
 *     ZwPowerInformation @ 0x18009D2B0 (ZwPowerInformation.c)
 */

__int64 __fastcall sub_1800847C0(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _DWORD v5[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  if ( a4 && 4 * (unsigned __int64)a3 > 0xFFFFFFFF )
    return 3221225621LL;
  v5[1] = 0;
  v5[3] = 0;
  v5[2] = a3;
  v5[0] = a1;
  v6 = a2;
  return ZwPowerInformation(87LL, v5);
}
