/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0IAAAAAAAAAAA@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18004B828
 * Callers:
 *     ??1?$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180046374 (--1-$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Par.c)
 * Callees:
 *     _TlgWrite @ 0x180001200 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 */

int __fastcall _TlgWriteActivityAutoStop<140737488355328,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  __int64 v2; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u && (*((_QWORD *)a1 + 2) & 0x800000000000LL) != 0 )
  {
    v2 = *((_QWORD *)a1 + 3) & 0x800000000000LL;
    if ( v2 == *((_QWORD *)a1 + 3) )
      LODWORD(v2) = TlgWrite(a1, &unk_18016CDB3, a2, 0LL, 2u, &pData);
  }
  return v2;
}
