/*
 * XREFs of PpmTranslateIdleAccounting @ 0x1402E3620
 * Callers:
 *     PpmWmiFireIdleAccountingEvent @ 0x1402E47D0 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6E00 (PpmEventTraceProcessorIdleAccounting.c)
 * Callees:
 *     PpmConvertTime @ 0x1400A7C54 (PpmConvertTime.c)
 *     PpmUpdateProcessorIdleAccounting @ 0x14018BB6C (PpmUpdateProcessorIdleAccounting.c)
 */

unsigned __int64 __fastcall PpmTranslateIdleAccounting(_QWORD *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r12
  int *v6; // rcx
  unsigned int v7; // edx
  unsigned __int64 result; // rax
  __int64 v9; // rdi
  _DWORD *v10; // rsi
  __int64 v11; // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbp
  _DWORD *v14; // rbx
  _DWORD *v15; // r14
  __int64 v16; // r13
  int v17; // eax
  _DWORD *v18; // r14
  __int64 v19; // rbp
  int v20; // eax
  unsigned __int64 v21; // rbx
  unsigned int v22; // r13d
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rdx
  _DWORD *v26; // rcx

  v3 = a3;
  PpmUpdateProcessorIdleAccounting(a1);
  v6 = (int *)a1[1];
  v7 = *v6;
  *(_DWORD *)a2 = *v6;
  *(_DWORD *)(a2 + 4) = v6[1];
  *(_DWORD *)(a2 + 8) = v6[2];
  *(_DWORD *)(a2 + 12) = v6[3];
  *(_QWORD *)(a2 + 16) = *((_QWORD *)v6 + 2);
  result = *((_QWORD *)v6 + 3);
  if ( v7 )
  {
    v9 = a2 + 32;
    v10 = v6 + 218;
    v11 = v7;
    v12 = *((_QWORD *)v6 + 3);
    do
    {
      v12 += *((_QWORD *)v10 - 104);
      v13 = PopQpcFrequency;
      *(_DWORD *)v9 = *(v10 - 206) + *(v10 - 205) + *(v10 - 204);
      *(_DWORD *)(v9 + 4) = *(v10 - 205);
      *(_DWORD *)(v9 + 20) = *(v10 - 206);
      *(_DWORD *)(v9 + 8) = *(v10 - 203);
      *(_QWORD *)(v9 - 8) = PpmConvertTime(*((_QWORD *)v10 - 104), v13, 0xF4240uLL);
      *(_DWORD *)(v9 + 12) = PpmConvertTime(*((_QWORD *)v10 - 101), v13, 0xF4240uLL);
      *(_DWORD *)(v9 + 16) = PpmConvertTime(*((_QWORD *)v10 - 100), v13, 0xF4240uLL);
      v14 = v10 - 130;
      v15 = (_DWORD *)(v9 + 36);
      v16 = 16LL;
      do
      {
        *(_QWORD *)(v15 - 3) = PpmConvertTime(*((_QWORD *)v14 - 2), v13, 0xF4240uLL);
        *(v15 - 1) = PpmConvertTime(*((_QWORD *)v14 - 1), v13, 0xF4240uLL);
        *v15 = PpmConvertTime(*(_QWORD *)v14, v13, 0xF4240uLL);
        v15 += 6;
        v17 = v14[2];
        v14 += 8;
        *(v15 - 5) = v17;
        --v16;
      }
      while ( v16 );
      v18 = v10 - 164;
      v19 = 4LL;
      do
      {
        v20 = v18[4];
        if ( v20 )
        {
          *(_DWORD *)(v9 + 40) += v20;
          v21 = PopQpcFrequency;
          *(_QWORD *)(v9 + 24) += PpmConvertTime(*((_QWORD *)v18 - 1), PopQpcFrequency, 0xF4240uLL);
          v22 = PpmConvertTime(*(_QWORD *)v18, v21, 0xF4240uLL);
          v23 = PpmConvertTime(*((_QWORD *)v18 + 1), v21, 0xF4240uLL);
          if ( *(_DWORD *)(v9 + 32) > v22 )
            *(_DWORD *)(v9 + 32) = v22;
          if ( *(_DWORD *)(v9 + 36) < v23 )
            *(_DWORD *)(v9 + 36) = v23;
        }
        v18 += 8;
        --v19;
      }
      while ( v19 );
      v24 = *(_DWORD *)(v9 + 8);
      v25 = 6LL;
      v26 = v10;
      do
      {
        v24 += *v26;
        v26 += 8;
        *(_DWORD *)(v9 + 8) = v24;
        --v25;
      }
      while ( v25 );
      v9 += 416LL;
      v10 += 250;
      --v11;
    }
    while ( v11 );
    result = v12;
    v3 = a3;
  }
  if ( v3 )
  {
    result = PpmConvertTime(result, PopQpcFrequency, 0xF4240uLL);
    *v3 = result;
  }
  return result;
}
