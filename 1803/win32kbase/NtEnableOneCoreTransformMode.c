/*
 * XREFs of NtEnableOneCoreTransformMode @ 0x1C00B3830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtEnableOneCoreTransformMode(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x1000000u;
  return 1LL;
}
