/*
 * XREFs of PopIsRunningAsLocalSystem @ 0x14072B17C
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400F0060 (RtlCheckTokenMembership.c)
 */

BOOLEAN PopIsRunningAsLocalSystem()
{
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF

  IsMember = 0;
  RtlCheckTokenMembership(0LL, SeLocalSystemSid, &IsMember);
  return IsMember;
}
