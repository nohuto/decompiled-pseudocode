/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800645F0
 * Callers:
 *     ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180060560 (--1-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activity.c)
 *     ??1?$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$00$0EAAAAAAAAAAA@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AE010 (--1-$ActivityData@VSpatialInteractionTrace@SpatialInteractionDevices@@U_TlgReflectorTag_Param0Is.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

int __fastcall _TlgWriteActivityAutoStop<70368744177664,4>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  __int64 v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 4u && (*((_QWORD *)a1 + 2) & 0x400000000000LL) != 0 )
  {
    v2 = *((_QWORD *)a1 + 3) & 0x400000000000LL;
    if ( v2 == *((_QWORD *)a1 + 3) )
      LODWORD(v2) = TlgWrite(a1, &unk_180167B25, a2, 0LL, 2u, &pData);
  }
  return v2;
}
