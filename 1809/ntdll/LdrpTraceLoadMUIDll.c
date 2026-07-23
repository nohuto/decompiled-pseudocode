/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800E2D68
 * Callers:
 *     LdrpAccessResourceData @ 0x180014704 (LdrpAccessResourceData.c)
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x1800381C0 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800385D8 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x180039780 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x180039A78 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x180039E54 (RtlpResUltimateFallbackInfo.c)
 *     LdrMapAndVerifyResourceFile @ 0x18003A040 (LdrMapAndVerifyResourceFile.c)
 *     LdrResGetRCConfig @ 0x18003A160 (LdrResGetRCConfig.c)
 *     LdrFindResource_U @ 0x18003C340 (LdrFindResource_U.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrFindResourceEx_U @ 0x180084750 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18008F700 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800E2A84 (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800E5280 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E581C (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E5FC0 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
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
