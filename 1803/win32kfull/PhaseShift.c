/*
 * XREFs of PhaseShift @ 0x1C02C56C8
 * Callers:
 *     ExecutePhaseControl @ 0x1C02C5014 (ExecutePhaseControl.c)
 *     PhaseShift @ 0x1C02C56C8 (PhaseShift.c)
 * Callees:
 *     CompDiv @ 0x1C02B2EE4 (CompDiv.c)
 *     CalcAvgXPhaseShift @ 0x1C02C4DD0 (CalcAvgXPhaseShift.c)
 *     PhaseShift @ 0x1C02C56C8 (PhaseShift.c)
 */

__int64 __fastcall PhaseShift(__int64 a1, __int64 a2, unsigned __int16 a3, int a4)
{
  unsigned __int16 v4; // r11
  __int64 v6; // r10
  __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int16 v11; // ax
  __int16 v12; // ax
  int v13; // eax
  __int16 v14; // ax
  int v15; // r9d
  __int16 v16; // cx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int16 v19; // ax
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int16 v24; // ax
  __int64 v25; // [rsp+30h] [rbp-28h]
  __int64 v26; // [rsp+30h] [rbp-28h]
  __int64 v27; // [rsp+38h] [rbp-20h]

  v4 = a3;
  v6 = a1;
  if ( a4 == -1 )
    return 0LL;
  v8 = *(_QWORD *)(a2 + 104);
  v9 = a4;
  v25 = a4;
  v10 = 3LL * a4;
  v11 = *(_WORD *)(v8 + 12LL * a4 + 6);
  if ( (v11 & 4) != 0 )
    return 0LL;
  v12 = v11 | 4;
  *(_WORD *)(v8 + 12LL * a4 + 6) = v12;
  if ( (v12 & 2) == 0 )
  {
    if ( a4 <= *(__int16 *)(*(_QWORD *)(a2 + 64) + 2LL * (*(__int16 *)(a2 + 80) - 1)) )
    {
      v14 = *(_WORD *)(v8 + 12LL * a4);
      if ( v14 != -1 )
      {
        v16 = *(_WORD *)(v8 + 12LL * a4 + 2);
        if ( v16 == -1 )
        {
          v13 = PhaseShift(v6, a2, a3, (unsigned int)v14);
        }
        else
        {
          v17 = PhaseShift(v6, a2, a3, (unsigned int)v16);
          v18 = PhaseShift(a1, a2, a3, (unsigned int)*(__int16 *)(v8 + 4 * v10));
          v13 = CalcAvgXPhaseShift(a2, *(__int16 *)(v8 + 4 * v10), a4, *(__int16 *)(v8 + 4 * v10 + 2), v18, v17);
          v9 = v25;
        }
        goto LABEL_13;
      }
      if ( !a3 )
      {
        v15 = 0;
        goto LABEL_14;
      }
    }
    v13 = CompDiv(
            0x10000,
            (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 468LL) - 0x10000) * (__int64)*(int *)(*(_QWORD *)a2 + 4LL * a4));
LABEL_13:
    v4 = a3;
    v6 = a1;
    v15 = v13;
LABEL_14:
    v12 = *(_WORD *)(v8 + 4 * v10 + 6);
    if ( (v12 & 2) == 0 )
    {
      v19 = *(_WORD *)(v8 + 4 * v10 + 4);
      if ( v19 == -1
        || (v20 = *(_QWORD *)(a2 + 104),
            v27 = v20,
            v21 = 3LL * v19,
            v26 = v21,
            (*(_BYTE *)(v20 + 12LL * v19 + 6) & 2) != 0) )
      {
        if ( v4 )
        {
          if ( *(_WORD *)(v8 + 4 * v10 + 2) == 0xFFFF )
          {
            v24 = *(_WORD *)(v8 + 4 * v10);
            if ( v24 == -1
              || *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v9) != *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * v24) )
            {
              v15 = CompDiv(
                      0x10000,
                      (*(_DWORD *)(*(_QWORD *)(v6 + 64) + 468LL) - 0x10000) * (__int64)*(int *)(*(_QWORD *)a2 + 4 * v9));
            }
          }
        }
        if ( *(_WORD *)(v8 + 4 * v10) != 0xFFFF )
          *(_DWORD *)(*(_QWORD *)a2 + 4 * v9) += v15;
      }
      else
      {
        if ( *(_WORD *)(v8 + 4 * v10) == 0xFFFF || *(_WORD *)(v8 + 4 * v10 + 2) == 0xFFFF )
        {
          v22 = CompDiv(
                  0x20000,
                  (*(_DWORD *)(*(_QWORD *)(v6 + 64) + 468LL) - 0x10000)
                * (__int64)(*(_DWORD *)(*(_QWORD *)a2 + 4 * v9) + *(_DWORD *)(*(_QWORD *)a2 + 4LL * v19)));
          v21 = v26;
          v15 = v22;
          v20 = v27;
        }
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v9) += v15;
        v23 = *(__int16 *)(v8 + 4 * v10 + 4);
        *(_DWORD *)(*(_QWORD *)a2 + 4 * v23) += v15;
        *(_WORD *)(v20 + 4 * v21 + 6) |= 2u;
        *(_DWORD *)(v20 + 4 * v21 + 8) = v15;
      }
      *(_WORD *)(v8 + 4 * v10 + 6) |= 2u;
      v12 = *(_WORD *)(v8 + 4 * v10 + 6);
      *(_DWORD *)(v8 + 4 * v10 + 8) = v15;
    }
  }
  *(_WORD *)(v8 + 4 * v10 + 6) = v12 & 0xFFFB;
  return *(unsigned int *)(v8 + 4 * v10 + 8);
}
