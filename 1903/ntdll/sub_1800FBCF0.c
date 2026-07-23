/*
 * XREFs of sub_1800FBCF0 @ 0x1800FBCF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     sub_1800FBB70 @ 0x1800FBB70 (sub_1800FBB70.c)
 */

void __fastcall sub_1800FBCF0(PTP_CALLBACK_INSTANCE a1, HANDLE *a2, PTP_WORK a3)
{
  ZwWaitForSingleObject(a2[2], 0, 0LL);
  sub_1800FBB70((__int64)a2);
  _InterlockedExchange(&dword_180163B70, 0);
}
