/*
 * XREFs of xxxUserYield @ 0x1C01B381C
 * Callers:
 *     NtUserYieldTask @ 0x1C01F7520 (NtUserYieldTask.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C0049610 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxUserYield(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 440); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(a1 + 440) )
    xxxReceiveMessage(a1);
  return 1LL;
}
