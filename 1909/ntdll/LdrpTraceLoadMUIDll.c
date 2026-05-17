/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800E0910
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpAccessResourceData @ 0x18001F250 (LdrpAccessResourceData.c)
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x180057270 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180057680 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800587E0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x1800589F0 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x180058DC0 (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x180058EF0 (LdrResGetRCConfig.c)
 *     LdrMapAndVerifyResourceFile @ 0x180059950 (LdrMapAndVerifyResourceFile.c)
 *     LdrFindResource_U @ 0x18006FBA0 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x18007FD00 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18008C200 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800E062C (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800E25F0 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800E2764 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E2B8C (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E332C (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1)
{
  unsigned int v2; // edi
  _QWORD v4[6]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v5[272]; // [rsp+50h] [rbp-248h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v2 = 265;
  else
    v2 = *a1 >> 1;
  memmove(v5, *((const void **)a1 + 1), 2LL * v2);
  v5[v2] = 0;
  BYTE4(v4[0]) = 0;
  LOWORD(v4[0]) = 2 * (v2 + 25);
  *(_OWORD *)&v4[3] = LoadMUIDllGuid;
  return NtTraceEvent();
}
