/*
 * XREFs of MmLoadSystemImage @ 0x14070B620
 * Callers:
 *     IoLoadCrashDumpDriver @ 0x140295080 (IoLoadCrashDumpDriver.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x14070AF00 (IopLoadDriver.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 */

__int64 __fastcall MmLoadSystemImage(int a1, int a2, int a3, int a4, __int64 a5, __int64 a6)
{
  if ( (a4 & 0x7FFFFFFC) != 0 )
    return 3221225714LL;
  else
    return MmLoadSystemImageEx(a1, a2, a3, a4, a5, a6);
}
