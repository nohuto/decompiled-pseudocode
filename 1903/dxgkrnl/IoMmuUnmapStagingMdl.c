/*
 * XREFs of IoMmuUnmapStagingMdl @ 0x1C0050304
 * Callers:
 *     DpiUnmapIommuIdentityRangeInternal @ 0x1C0050C0C (DpiUnmapIommuIdentityRangeInternal.c)
 * Callees:
 *     IoMmuAllocatePageHistoryEntry @ 0x1C004FE2C (IoMmuAllocatePageHistoryEntry.c)
 *     IoMmuUnmapStagingMdlInternal @ 0x1C0050368 (IoMmuUnmapStagingMdlInternal.c)
 */

__int64 __fastcall IoMmuUnmapStagingMdl(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 PageHistoryEntry; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+3Ch] [rbp-Ch]

  v11 = 0;
  v10 = 0;
  v7[0] = a2 + 48;
  v8 = *(_DWORD *)(a2 + 40) >> 12;
  v7[1] = *(_QWORD *)(a1 + 48) + 48LL;
  v9 = *(_DWORD *)(a1 + 112);
  PageHistoryEntry = IoMmuAllocatePageHistoryEntry(a1 + 16, 0, a3, a4);
  return IoMmuUnmapStagingMdlInternal(a1, v7, PageHistoryEntry);
}
