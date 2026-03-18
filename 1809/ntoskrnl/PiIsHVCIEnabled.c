/*
 * XREFs of PiIsHVCIEnabled @ 0x1407639B0
 * Callers:
 *     PiIsDriverBlocked @ 0x14067EB10 (PiIsDriverBlocked.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401B8830 (ZwQuerySystemInformation.c)
 */

bool PiIsHVCIEnabled()
{
  char v0; // bl
  __int64 SystemInformation; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) >= 0 )
    return (SystemInformation & 0x40000000000LL) != 0;
  return v0;
}
