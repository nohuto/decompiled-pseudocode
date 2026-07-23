/*
 * XREFs of WheaInitializeRecordHeader @ 0x140320940
 * Callers:
 *     WheapCreateRecordFromGenericErrorData @ 0x140320C44 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x14015DB34 (RtlpTimeToTimeFields.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  __int64 v2; // r8
  int v3; // ecx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  memset(a1, 0, 0x80uLL);
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[4] |= 2u;
  *a1 = 1380274243;
  *((_WORD *)a1 + 2) = 528;
  *((_WORD *)a1 + 5) = 0;
  a1[3] = 3;
  *((GUID *)a1 + 4) = WHEA_RECORD_CREATOR_GUID;
  v6 = MEMORY[0xFFFFF78000000014];
  RtlpTimeToTimeFields(&v6, &v5, v2);
  v3 = (__int16)v5;
  *((_BYTE *)a1 + 24) = BYTE10(v5);
  *((_BYTE *)a1 + 25) = BYTE8(v5);
  *((_BYTE *)a1 + 26) = BYTE6(v5);
  *((_QWORD *)a1 + 3) &= ~0x1000000uLL;
  *((_BYTE *)a1 + 28) = BYTE4(v5);
  *((_BYTE *)a1 + 29) = BYTE2(v5);
  *((_BYTE *)a1 + 31) = v3 / 100;
  *((_BYTE *)a1 + 30) = v3 % 100;
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&WheapErrorRecordId);
  return 0LL;
}
