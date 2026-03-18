/*
 * XREFs of IrqPolicyQueryInterruptSteeringEnabled @ 0x1C009D894
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0099260 (ProcessorpFindIdtEntriesApic.c)
 *     IrqPolicyUpdatePolicy @ 0x1C00BE698 (IrqPolicyUpdatePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

char __fastcall IrqPolicyQueryInterruptSteeringEnabled(__int128 *a1)
{
  char v1; // bl
  __int64 v3; // xmm1_8
  int v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]

  v1 = 1;
  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 2);
    v5 = *a1;
    v6 = v3;
  }
  else
  {
    v5 = 0x1FFFFFFFFuLL;
    v6 = 0LL;
  }
  v4 = 0;
  if ( (int)ZwQuerySystemInformationEx(180LL, &v5, 24LL, &v4, 4, 0LL) < 0 || (v4 & 1) == 0 )
    return 0;
  return v1;
}
