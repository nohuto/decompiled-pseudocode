/*
 * XREFs of PiForEachDriverQueryRoutine @ 0x14070E2DC
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x1406EF79C (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlULongSub @ 0x140101D94 (RtlULongSub.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiForEachDriverQueryRoutine(int a1, const WCHAR *a2, ULONG a3, _QWORD *a4)
{
  ULONG v5; // r10d
  const WCHAR *v6; // rbx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG pulResult; // [rsp+50h] [rbp+18h] BYREF

  pulResult = a3;
  v5 = a3;
  v6 = a2;
  result = 0LL;
  if ( (a1 == 1 || a1 == 7) && a3 > 2 )
  {
    if ( a1 == 1 )
    {
      RtlInitUnicodeString(&DestinationString, a2);
      return ((__int64 (__fastcall *)(_QWORD, UNICODE_STRING *, _QWORD))a4[1])(*a4, &DestinationString, a4[2]);
    }
    else if ( *a2 )
    {
      while ( 1 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( v6[v8] );
        v9 = v8 + 1;
        if ( RtlULongSub(v5, 2 * v9, &pulResult) < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, v6);
        result = ((__int64 (__fastcall *)(_QWORD, UNICODE_STRING *, _QWORD))a4[1])(*a4, &DestinationString, a4[2]);
        if ( (int)result >= 0 )
        {
          v5 = pulResult;
          if ( pulResult >= 2 )
          {
            v6 += v9;
            if ( *v6 )
              continue;
          }
        }
        return result;
      }
      return 0LL;
    }
  }
  return result;
}
