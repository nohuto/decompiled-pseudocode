/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180247D5C
 * Callers:
 *     ??1?$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180249844 (--1-$ActivityData@VTabShellTelemetryProvider@@U_TlgReflectorTag_Param0IsProviderTyp_ea_180249844.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

void __fastcall _TlgWriteActivityAutoStop<70368744177664,4>(const struct _TlgProvider_t *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 4u )
  {
    if ( TlgKeywordOn(a1, 0x400000000000uLL) )
      TlgWrite(v1, &unk_1804F1B06, v2, 0LL, 2u, &pData);
  }
}
