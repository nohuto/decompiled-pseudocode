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

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  unsigned int v4; // edi
  _QWORD Fields[6]; // [rsp+20h] [rbp-278h] BYREF
  _WORD v7[272]; // [rsp+50h] [rbp-248h] BYREF

  v2 = a2;
  memset(Fields, 0, sizeof(Fields));
  if ( (*a1 & 0xFFFEu) >= 0x212 )
    v4 = 265;
  else
    v4 = *a1 >> 1;
  memmove(v7, *((const void **)a1 + 1), 2LL * v4);
  v7[v4] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v4 + 25);
  *(GUID *)&Fields[3] = LoadMUIDllGuid;
  return NtTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}
