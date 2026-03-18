/*
 * XREFs of PiForEachDriverQueryRoutine @ 0x14073B6C0
 * Callers:
 *     PpForEachDeviceInstanceDriver @ 0x140724BF8 (PpForEachDeviceInstanceDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlULongSub @ 0x1401006A4 (RtlULongSub.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PiForEachDriverQueryRoutine(int a1, const WCHAR *a2, ULONG a3, _QWORD *a4)
{
  __int64 result; // rax
  ULONG v6; // r10d
  const WCHAR *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG pulResult; // [rsp+50h] [rbp+18h] BYREF

  pulResult = a3;
  result = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = a3;
  v7 = a2;
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
        while ( v7[v8] );
        v9 = v8 + 1;
        if ( RtlULongSub(v6, 2 * v9, &pulResult) < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, v7);
        result = ((__int64 (__fastcall *)(_QWORD, UNICODE_STRING *, _QWORD))a4[1])(*a4, &DestinationString, a4[2]);
        if ( (int)result >= 0 )
        {
          v6 = pulResult;
          if ( pulResult >= 2 )
          {
            v7 += v9;
            if ( *v7 )
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
