/*
 * XREFs of ProcLibTraceUnexpectedTurboDisable @ 0x1C00081C8
 * Callers:
 *     SetGV3PerfState @ 0x1C00019E0 (SetGV3PerfState.c)
 *     SetGV3PerfStateAndTurbo @ 0x1C0007310 (SetGV3PerfStateAndTurbo.c)
 *     SetTurboDisablePolicy @ 0x1C00073F0 (SetTurboDisablePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x1C000823C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0008264 (_TlgWrite.c)
 */

void __fastcall ProcLibTraceUnexpectedTurboDisable(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1C0015030 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
      TlgWrite(v1, &unk_1C001122C, v2, v3, 2u, &pData);
  }
}
