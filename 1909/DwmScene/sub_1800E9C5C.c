/*
 * XREFs of sub_1800E9C5C @ 0x1800E9C5C
 * Callers:
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 *     sub_1800797D4 @ 0x1800797D4 (sub_1800797D4.c)
 *     sub_18007A5B0 @ 0x18007A5B0 (sub_18007A5B0.c)
 *     sub_18007CCF4 @ 0x18007CCF4 (sub_18007CCF4.c)
 *     sub_18007D6D0 @ 0x18007D6D0 (sub_18007D6D0.c)
 * Callees:
 *     sub_18003C424 @ 0x18003C424 (sub_18003C424.c)
 *     _Query_perf_counter @ 0x18012750E (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180127514 (_Query_perf_frequency.c)
 */

__int64 __fastcall sub_1800E9C5C(__int64 a1, __int64 a2)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  float v6; // xmm0_4
  __int64 v7; // rcx
  float *v8; // rdx
  float *v9; // r9
  __int64 result; // rax
  float v11[6]; // [rsp+20h] [rbp-18h] BYREF

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v6 = (float)(int)(1000000000 * (perf_counter / perf_frequency)
                  + 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                  - *(_DWORD *)(a2 + 16))
     / 1000000.0;
  v7 = a1 + 8 * (*(int *)(a2 + 8) + 2LL * *(int *)(a2 + 8) + 7);
  v8 = *(float **)(v7 + 8);
  v11[0] = v6;
  if ( *(float **)(v7 + 16) == v8 )
  {
    sub_18003C424((const void **)v7, v8, v11);
  }
  else
  {
    *v8 = v6;
    *(_QWORD *)(v7 + 8) = v8 + 1;
  }
  v9 = *(float **)(a1 + 280);
  if ( ((((unsigned __int64)v9 - *(_QWORD *)(a1 + 272)) ^ (*(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 64)
                                                         - *(_QWORD *)(a1 + 24LL * *(int *)(a2 + 8) + 56))) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(float **)(a1 + 288) == v9 )
    {
      return sub_18003C424((const void **)(a1 + 272), *(_BYTE **)(a1 + 280), v11);
    }
    else
    {
      result = (__int64)(v9 + 1);
      *v9 = v11[0];
      *(_QWORD *)(a1 + 280) = v9 + 1;
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 280);
    *(float *)(result - 4) = v11[0] + *(float *)(result - 4);
  }
  return result;
}
