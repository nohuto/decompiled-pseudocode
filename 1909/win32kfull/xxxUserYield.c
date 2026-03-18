/*
 * XREFs of xxxUserYield @ 0x1C01EB5EC
 * Callers:
 *     NtUserYieldTask @ 0x1C0236E60 (NtUserYieldTask.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C003F6A0 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxUserYield(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 440); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(a1 + 440) )
    xxxReceiveMessage(a1);
  return 1LL;
}
