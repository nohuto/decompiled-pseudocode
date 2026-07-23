/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x1400A5FC0
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x1400A5F8C (PpmContinueActiveTimeAccumulation.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 */

__int64 __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx

  result = __rdtsc();
  v8 = result;
  if ( (*(_QWORD *)(a1 + 25248) & 0x8000000000LL) != 0 )
  {
    result = __readmsr(0xDB2u);
    v9 = result;
  }
  else
  {
    v9 = 0LL;
  }
  if ( a3 )
  {
    v10 = a2 - *(_QWORD *)(a1 + 23920);
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 23936), a2 - *(_QWORD *)(a1 + 23920));
    if ( (*(_QWORD *)(a1 + 25248) & 0x8000000000LL) != 0 )
    {
      result = PpmConvertTime(v10, v8 - *(_QWORD *)(a1 + 23888), v9 - *(_QWORD *)(a1 + 24000), a4);
      *(_QWORD *)(a1 + 24008) += result;
    }
  }
  *(_QWORD *)(a1 + 23920) = a2;
  if ( a3 )
  {
    v11 = *(_QWORD *)(a1 + 23888);
    if ( v8 > v11 )
    {
      result = v8 - v11;
      *(_QWORD *)(a1 + 23896) += v8 - v11;
    }
  }
  *(_QWORD *)(a1 + 23888) = v8;
  if ( (*(_QWORD *)(a1 + 25248) & 0x8000000000LL) != 0 )
    *(_QWORD *)(a1 + 24000) = v9;
  return result;
}
