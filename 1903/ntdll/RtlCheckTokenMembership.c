/*
 * XREFs of RtlCheckTokenMembership @ 0x1800E49A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCheckTokenMembership(__int64 a1, __int64 a2, _BYTE *a3)
{
  return RtlCheckTokenMembershipEx(a1, a2, 0, a3);
}
