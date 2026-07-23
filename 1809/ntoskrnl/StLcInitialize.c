/*
 * XREFs of StLcInitialize @ 0x1400E4B3C
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400E4568 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall StLcInitialize(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  LARGE_INTEGER result; // rax
  unsigned int *i; // r8
  LONGLONG v7; // rcx
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  result = KeQueryPerformanceCounter(&PerformanceFrequency);
  for ( i = a3; i < a3 + 32; i += 4 )
  {
    v7 = PerformanceFrequency.QuadPart * *i;
    i[2] = 0;
    result.QuadPart = (unsigned __int64)((unsigned __int128)(v7 * (__int128)0x431BDE82D7B634DBLL) >> 64) >> 63;
    *(_QWORD *)i = v7 / 1000000;
  }
  *((_QWORD *)a3 + 14) = -1LL;
  *((_DWORD *)a1 + 2) = 8;
  a1[2] = a3;
  *a1 = a3;
  return result;
}
