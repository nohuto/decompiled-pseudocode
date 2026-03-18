/*
 * XREFs of IoGetDumpStack @ 0x1406DF0A4
 * Callers:
 *     PopAllocateHiberContext @ 0x1406DF554 (PopAllocateHiberContext.c)
 * Callees:
 *     IopLoadCrashdumpDriver @ 0x14017815C (IopLoadCrashdumpDriver.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoGetDumpStack(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  result = IopLoadCrashdumpDriver();
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(const wchar_t *, __int64, __int64, _QWORD, _QWORD))qword_14043C7D0)(
             L"hiber_",
             a2,
             2LL,
             a4,
             0LL);
  return result;
}
