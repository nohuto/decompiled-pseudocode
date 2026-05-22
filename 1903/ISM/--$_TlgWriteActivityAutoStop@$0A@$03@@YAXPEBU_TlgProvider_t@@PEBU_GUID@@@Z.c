/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800E02B4
 * Callers:
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E07D0 (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflecto_ea_1800E07D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 */

TLG_STATUS __fastcall _TlgWriteActivityAutoStop<0,4>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 4u )
    return TlgWrite(a1, &unk_18019E625, a2, 0LL, 2u, &pData);
  return result;
}
