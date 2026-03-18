/*
 * XREFs of BiGetCurrentBootEntryIdentifier @ 0x14073F638
 * Callers:
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

NTSTATUS __fastcall BiGetCurrentBootEntryIdentifier(_OWORD *a1)
{
  NTSTATUS result; // eax
  _OWORD SystemInformation[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  result = ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
    *a1 = SystemInformation[0];
  return result;
}
