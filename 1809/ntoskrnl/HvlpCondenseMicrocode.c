/*
 * XREFs of HvlpCondenseMicrocode @ 0x140817AA4
 * Callers:
 *     HvlUpdateMicrocodeDatabase @ 0x140817A80 (HvlUpdateMicrocodeDatabase.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140279480 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x140322400 (HvcallFastExtended.c)
 *     HvcallInitInputControl @ 0x140322434 (HvcallInitInputControl.c)
 */

__int64 HvlpCondenseMicrocode()
{
  int v0; // ecx
  unsigned __int16 v1; // ax
  __int64 v3; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v4[16]; // [rsp+40h] [rbp-38h] BYREF
  int v5; // [rsp+50h] [rbp-28h]

  v5 = 1;
  HvcallInitInputControl(7, &v3);
  LODWORD(v3) = v3 | 0x10000;
  v1 = HvcallFastExtended(v3, (__int64)v4, (unsigned int)(v0 + 17), 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
