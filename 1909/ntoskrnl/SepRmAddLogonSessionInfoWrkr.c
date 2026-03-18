/*
 * XREFs of SepRmAddLogonSessionInfoWrkr @ 0x1406E4720
 * Callers:
 *     SepRmCommandServerThread @ 0x1407683E0 (SepRmCommandServerThread.c)
 * Callees:
 *     SepUpdateLogonSessionTrack @ 0x1406E4744 (SepUpdateLogonSessionTrack.c)
 */

__int64 __fastcall SepRmAddLogonSessionInfoWrkr(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = SepUpdateLogonSessionTrack(a1 + 44);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
