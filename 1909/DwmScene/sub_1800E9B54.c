/*
 * XREFs of sub_1800E9B54 @ 0x1800E9B54
 * Callers:
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800E9B54(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 *v7; // rax
  _QWORD v8[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v9[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+90h] [rbp-48h] BYREF

  result = *(_BYTE *)(a1 + 8);
  if ( result )
  {
    sub_1800636EC(a1);
    if ( a2 >= (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) / 56LL )
    {
      sub_18000E4E8(v9);
      v7 = sub_18000E4E8(v8);
      sub_18006586C(pExceptionObject, v7, 65LL, (__int64)v9, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    *(_QWORD *)(56 * a2 + *(_QWORD *)(a1 + 32) + 48) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                                                     + 1000000000 * (perf_counter / perf_frequency);
    return sub_180063778(a1);
  }
  return result;
}
