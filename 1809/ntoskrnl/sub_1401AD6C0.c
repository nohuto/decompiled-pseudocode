/*
 * XREFs of sub_1401AD6C0 @ 0x1401AD6C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlMdlReadCompleteDevEx @ 0x140332010 (FsRtlMdlReadCompleteDevEx.c)
 *     KeGuardDispatchICall @ 0x14034AB40 (KeGuardDispatchICall.c)
 */

__int64 __fastcall sub_1401AD6C0(__int64 a1)
{
  FsRtlMdlReadCompleteDevEx(a1 + 32);
  return (*(__int64 (__fastcall **)(__int64))(a1 + 280))(a1);
}
