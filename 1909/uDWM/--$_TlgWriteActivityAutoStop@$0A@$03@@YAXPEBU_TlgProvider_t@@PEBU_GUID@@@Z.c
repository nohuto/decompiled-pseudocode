/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800B25CC
 * Callers:
 *     ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180008564 (--1-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 * Callees:
 *     _TlgWrite @ 0x180008F5C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall _TlgWriteActivityAutoStop<0,4>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 4u )
    return TlgWrite(a1, &unk_1800C9DC2, a2, 0LL, 2u, &pData);
  return result;
}
