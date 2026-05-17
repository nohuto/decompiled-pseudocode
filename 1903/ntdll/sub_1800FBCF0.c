/*
 * XREFs of sub_1800FBCF0 @ 0x1800FBCF0
 * Callers:
 *     <none>
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     sub_1800FBB70 @ 0x1800FBB70 (sub_1800FBB70.c)
 */

__int64 __fastcall sub_1800FBCF0(__int64 a1, __int64 *a2)
{
  ZwWaitForSingleObject();
  sub_1800FBB70(a2);
  return (unsigned int)_InterlockedExchange(&dword_180163B70, 0);
}
