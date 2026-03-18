/*
 * XREFs of IoGetDumpStack @ 0x14072B1A8
 * Callers:
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 * Callees:
 *     IopLoadCrashdumpDriver @ 0x140182104 (IopLoadCrashdumpDriver.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoGetDumpStack(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  result = IopLoadCrashdumpDriver();
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(const wchar_t *, __int64, __int64, _QWORD, _QWORD))qword_140468040)(
             L"hiber_",
             a2,
             2LL,
             a4,
             0LL);
  return result;
}
