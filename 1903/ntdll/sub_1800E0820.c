/*
 * XREFs of sub_1800E0820 @ 0x1800E0820
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrAccessResource_0 @ 0x18001F250 (LdrAccessResource_0.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     LdrpResGetResourceDirectory @ 0x1800571D0 (LdrpResGetResourceDirectory.c)
 *     sub_1800575E0 @ 0x1800575E0 (sub_1800575E0.c)
 *     LdrpResGetMappingSize @ 0x180058740 (LdrpResGetMappingSize.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 *     LdrResGetRCConfig @ 0x180058E50 (LdrResGetRCConfig.c)
 *     sub_1800598B0 @ 0x1800598B0 (sub_1800598B0.c)
 *     LdrFindResource_U @ 0x18006F950 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x18007F660 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18008BB60 (LdrResRelease.c)
 *     sub_1800E053C @ 0x1800E053C (sub_1800E053C.c)
 *     sub_1800E2500 @ 0x1800E2500 (sub_1800E2500.c)
 *     sub_1800E2674 @ 0x1800E2674 (sub_1800E2674.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 *     sub_1800E323C @ 0x1800E323C (sub_1800E323C.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __fastcall sub_1800E0820(unsigned __int16 *a1, unsigned int a2)
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
  *(_OWORD *)&Fields[3] = xmmword_18013A440;
  return ZwTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}
