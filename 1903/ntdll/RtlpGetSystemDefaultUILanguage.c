/*
 * XREFs of RtlpGetSystemDefaultUILanguage @ 0x1800730B0
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180007B50 (RtlpQueryDefaultUILanguage.c)
 *     sub_180013124 @ 0x180013124 (sub_180013124.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC2E0 (RtlpCleanupRegistryKeys.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x1800141C0 (RtlpCreateProcessRegistryInfo.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     ZwIsUILanguageComitted @ 0x18009E690 (ZwIsUILanguageComitted.c)
 *     ZwQueryInstallUILanguage @ 0x18009F010 (ZwQueryInstallUILanguage.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlpGetSystemDefaultUILanguage(LANGID DefaultUILanguageId, PLCID Lcid)
{
  PLCID v2; // rbx
  LANGID *v3; // rsi
  int v4; // edi
  int v6; // eax
  LANGID InstallUILanguageId; // [rsp+40h] [rbp+8h] BYREF
  DWORD *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = Lcid;
  InstallUILanguageId = 0;
  v3 = (LANGID *)DefaultUILanguageId;
  v8 = 0LL;
  v4 = 0;
  if ( DefaultUILanguageId )
  {
    *(_WORD *)DefaultUILanguageId = 0;
    if ( !Lcid && (v6 = RtlpCreateProcessRegistryInfo(&v8), v2 = v8, v4 = v6, v6 < 0)
      || (!v2 || !*((_WORD *)v2 + 2) ? (v4 = -1073741595) : (InstallUILanguageId = *((_WORD *)v2 + 2)), v4 < 0) )
    {
      v4 = ZwQueryInstallUILanguage(&InstallUILanguageId);
      if ( v4 < 0 )
        return v4;
      if ( ZwIsUILanguageComitted() >= 0 )
      {
        if ( v2 )
        {
          sub_18008B794(v2, (char *)v2 + 6, v2 + 2);
          *((_WORD *)v2 + 2) = InstallUILanguageId;
        }
      }
    }
    *v3 = InstallUILanguageId;
    return v4;
  }
  return -1073741811;
}
