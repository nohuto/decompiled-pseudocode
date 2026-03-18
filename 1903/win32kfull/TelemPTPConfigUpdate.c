/*
 * XREFs of TelemPTPConfigUpdate @ 0x1C020FA20
 * Callers:
 *     <none>
 * Callees:
 *     _TelemPTPConfigUpdateEx @ 0x1C020FA84 (_TelemPTPConfigUpdateEx.c)
 */

__int64 TelemPTPConfigUpdate()
{
  __int64 v1[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v2[2]; // [rsp+50h] [rbp-10h] BYREF

  v2[0] = 0LL;
  v1[0] = 0LL;
  v1[1] = 0LL;
  v2[1] = 0LL;
  return TelemPTPConfigUpdateEx(0, 1, 0, 0, (__int64)v2, (__int64)v1, 0LL);
}
