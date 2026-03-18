/*
 * XREFs of RtlInitMinimalBarrier @ 0x14034ACEC
 * Callers:
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitMinimalBarrier(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[1] = a2;
  result = 0LL;
  *a1 = a2;
  return result;
}
