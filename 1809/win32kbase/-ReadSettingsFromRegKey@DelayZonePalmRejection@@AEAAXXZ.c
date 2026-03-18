/*
 * XREFs of ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0006DB0
 * Callers:
 *     ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0006758 (-Initialize@DelayZonePalmRejection@@AEAAXXZ.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C0006ED0 (rimRegQueryRegistryDWord.c)
 */

void __fastcall DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection **v2; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_1C01CE120 & 1) == 0 )
  {
    dword_1C01CE008 = 1;
    dword_1C01CE120 |= 1u;
    qword_1C01CE000 = (__int64)L"RejectionEnabled";
    qword_1C01CE010 = (__int64)L"DelayZonePalmRejectionThresholdMS";
    dword_1C01CE018 = 175;
    dword_1C01CE01C = 175;
    qword_1C01CE020 = (__int64)L"DelayZonePalmRejectionExtensionSizeDips";
    dword_1C01CE028 = 250;
    dword_1C01CE02C = 250;
    qword_1C01CE030 = (__int64)L"DisableTimeThreshold";
    dword_1C01CE038 = 60000;
    dword_1C01CE03C = 60000;
    dword_1C01CE00C = 1;
  }
  v2 = (DelayZonePalmRejection **)&qword_1C01CE000;
  do
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\DelayZonePalmRejection");
    *((_DWORD *)v2 + 3) = rimRegQueryRegistryDWord(&DestinationString, *v2, *((unsigned int *)v2 + 2));
    v2 += 2;
  }
  while ( v2 != &DelayZonePalmRejection::s_instance );
  *((_DWORD *)this + 24) = dword_1C01CE00C;
  *((_DWORD *)this + 25) = dword_1C01CE01C;
  *((_DWORD *)this + 26) = dword_1C01CE02C;
  *((_DWORD *)this + 27) = dword_1C01CE03C;
}
