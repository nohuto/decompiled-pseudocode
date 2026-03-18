/*
 * XREFs of sub_1401B8C80 @ 0x1401B8C80
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x14036D310 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1401B8C80(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 288))(a1);
}
