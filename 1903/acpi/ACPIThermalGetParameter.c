/*
 * XREFs of ACPIThermalGetParameter @ 0x1C0092FF8
 * Callers:
 *     ACPIThermalWorker @ 0x1C0091ED0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 */

__int64 __fastcall ACPIThermalGetParameter(__int64 *a1, void *a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned int v9; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+58h] [rbp-30h] BYREF
  char SourceString[4]; // [rsp+60h] [rbp-28h] BYREF
  char v12; // [rsp+64h] [rbp-24h]

  v10 = 0LL;
  if ( a2
    && (*(_DWORD *)SourceString = a3,
        v12 = 0,
        v9 = 4,
        result = OSReadRegValue(SourceString, a2, &v10, &v9),
        (int)result >= 0)
    && v9 == 4 )
  {
    v8 = v10;
  }
  else
  {
    result = ACPIGet(a1, a3, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v10, 0LL);
    v8 = v10;
    if ( (int)result < 0 )
      v8 = 0LL;
  }
  *a4 = v8;
  return result;
}
