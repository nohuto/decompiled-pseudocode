/*
 * XREFs of KiAbCrossThreadRelease @ 0x14016C6E8
 * Callers:
 *     KeAbCrossThreadRelease @ 0x14016C6B4 (KeAbCrossThreadRelease.c)
 *     KeAbCrossThreadDelete @ 0x1402B0538 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiAbEntryRemoveFromTree @ 0x140061200 (KiAbEntryRemoveFromTree.c)
 */

unsigned __int8 __fastcall KiAbCrossThreadRelease(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  int v6; // r9d
  unsigned __int8 result; // al
  int v8; // [rsp+38h] [rbp+10h] BYREF

  KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a2);
  v6 = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a2 + 26) &= ~1u;
  v8 = v6 & 0x1FFFF;
  *(_DWORD *)(a2 + 88) = v6 & 0xFFFE0000;
  KiAbThreadRemoveBoosts(a3, a1, &v8);
  *(_QWORD *)(a2 + 32) = 0LL;
  result = 1 << ((__int64)(a2 - a3 - 800) / 96);
  _InterlockedOr8((volatile signed __int8 *)(a3 + 1422), result);
  return result;
}
