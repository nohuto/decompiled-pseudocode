/*
 * XREFs of sub_1800313F0 @ 0x1800313F0
 * Callers:
 *     TpWaitForWait @ 0x18002F0B0 (TpWaitForWait.c)
 *     sub_18002FF6C @ 0x18002FF6C (sub_18002FF6C.c)
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     TpSetWaitEx @ 0x1800312D0 (TpSetWaitEx.c)
 * Callees:
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall sub_1800313F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  int v4; // r10d

  if ( (unsigned int)sub_180036544(a1, a2, a3, a1)
    && *(__int64 (__fastcall ***)())(v3 + 8) == off_180118330
    && !NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    return 1LL;
  }
  if ( v4 || !NtCurrentPeb()->Ldr->ShutdownInProgress )
    sub_18010EFC8();
  return 0LL;
}
