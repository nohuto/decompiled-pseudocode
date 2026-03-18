/*
 * XREFs of WheaInitializeRecordHeader @ 0x140340DF0
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x140341124 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheapGetTimestamp @ 0x140340D68 (WheapGetTimestamp.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  memset(a1, 0, 0x80uLL);
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[4] |= 2u;
  *((GUID *)a1 + 4) = WHEA_RECORD_CREATOR_GUID;
  *a1 = 1380274243;
  *((_WORD *)a1 + 2) = 528;
  a1[3] = 3;
  WheapGetTimestamp((_BYTE *)a1 + 24, v2, v3);
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&WheapErrorRecordId);
  return 0LL;
}
