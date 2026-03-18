/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005C3EC
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005C0CC (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C005C50C (RIMRegQueryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  bool *v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C02156C8 & 1) == 0 )
  {
    dword_1C0215468 = 1;
    dword_1C02156C8 |= 1u;
    qword_1C0215460 = (__int64)L"RejectionEnabled";
    qword_1C0215470 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C0215478 = 175;
    dword_1C021547C = 175;
    qword_1C0215480 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C0215488 = 250;
    dword_1C021548C = 250;
    qword_1C0215490 = (__int64)L"DisableTimeThreshold";
    dword_1C0215498 = 60000;
    dword_1C021549C = 60000;
    dword_1C021546C = 1;
  }
  v2 = (bool *)&qword_1C0215460;
  do
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\DelayZonePalmRejection");
    RIMRegQueryDWord(&DestinationString, *(_QWORD *)v2, *((unsigned int *)v2 + 2), v2 + 12);
    v2 += 16;
  }
  while ( v2 != &UIPrivelegeIsolation::fEnforce );
  *((_DWORD *)this + 24) = dword_1C021546C;
  *((_DWORD *)this + 25) = dword_1C021547C;
  *((_DWORD *)this + 26) = dword_1C021548C;
  *((_DWORD *)this + 27) = dword_1C021549C;
}
