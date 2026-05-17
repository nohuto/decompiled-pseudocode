/*
 * XREFs of sub_18004AE3C @ 0x18004AE3C
 * Callers:
 *     sub_18004AC64 @ 0x18004AC64 (sub_18004AC64.c)
 *     sub_18004D024 @ 0x18004D024 (sub_18004D024.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_18004AE3C(__int64 a1, __int64 a2, int a3)
{
  char v6; // cl
  __int64 v7; // r8
  unsigned int v8; // eax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  int v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  if ( *(_BYTE *)(a2 + 17) )
  {
    v6 = *(_BYTE *)(a2 + 16);
    v9 = 4096LL;
    v7 = 1LL << v6;
    if ( (unsigned __int64)(1LL << v6) > 0xF0000 )
      v7 = 983040LL;
    v11 = a2 + v7 + *(unsigned __int16 *)(a2 + 18);
    v8 = sub_18004733C(a1, 1);
    ZwProtectVirtualMemory(-1LL, &v11, &v9, v8, &v10);
  }
  return RtlFreeHeap(a1, 0x800000u, a2);
}
