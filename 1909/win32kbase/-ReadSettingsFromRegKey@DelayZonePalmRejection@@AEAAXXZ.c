/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005E06C
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005E944 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     RIMRegQueryDWord @ 0x1C005E18C (RIMRegQueryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  bool *v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C02126C8 & 1) == 0 )
  {
    dword_1C0212468 = 1;
    dword_1C02126C8 |= 1u;
    qword_1C0212460 = (__int64)L"RejectionEnabled";
    qword_1C0212470 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C0212478 = 175;
    dword_1C021247C = 175;
    qword_1C0212480 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C0212488 = 250;
    dword_1C021248C = 250;
    qword_1C0212490 = (__int64)L"DisableTimeThreshold";
    dword_1C0212498 = 60000;
    dword_1C021249C = 60000;
    dword_1C021246C = 1;
  }
  v2 = (bool *)&qword_1C0212460;
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
  *((_DWORD *)this + 24) = dword_1C021246C;
  *((_DWORD *)this + 25) = dword_1C021247C;
  *((_DWORD *)this + 26) = dword_1C021248C;
  *((_DWORD *)this + 27) = dword_1C021249C;
}
