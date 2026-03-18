/*
 * XREFs of itrp_FLIPPT @ 0x1C02C7A00
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C02C4D20 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPPT(__int64 a1)
{
  int *v2; // rsi
  int v3; // edi
  __int64 v4; // r12
  _WORD *v5; // r8
  __int64 v6; // rbx
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax
  int v10; // r15d
  __int64 v11; // rbp
  int v12; // r14d
  __int16 v13; // ax
  __int64 result; // rax

  v2 = (int *)qword_1C0327168;
  v3 = dword_1C03271A0;
  v4 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C0327180 ^ *(_QWORD *)qword_1C0327180 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0327180 + 424)) == *(_QWORD *)(qword_1C0327180 + 432)
    && dword_1C03271A0 + 1LL <= (unsigned __int64)((qword_1C0327168 - *(_QWORD *)qword_1C0327180) >> 2) )
  {
    if ( dword_1C03271A0 >= 0 )
    {
      do
      {
        --v2;
        v5 = *(_WORD **)(qword_1C0327180 + 344);
        v6 = *v2;
        v7 = v5[4];
        v8 = v5[6];
        v9 = v7;
        if ( v7 <= v8 )
          v9 = v5[6];
        if ( v9 <= 1u )
        {
          v10 = 1;
        }
        else
        {
          if ( v7 <= v8 )
            v7 = v5[6];
          v10 = v7;
        }
        v11 = LocalGS;
        if ( qword_1C0327178 == LocalGS )
        {
          if ( (int)v6 >= (unsigned __int16)v5[8] || (int)v6 < 0 )
            goto LABEL_24;
          v12 = 1;
        }
        else
        {
          if ( (int)v6 >= *(_DWORD *)(qword_1C0327180 + 440) || (int)v6 < 0 )
          {
LABEL_24:
            dword_1C03271D0 = 4370;
            return qword_1C03271D8;
          }
          v12 = 5;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
          goto LABEL_24;
        v13 = *(_WORD *)(v11 + 80);
        if ( v13 >= 1 && v13 <= v10 && (int)v6 >= v12 + *(__int16 *)(*(_QWORD *)(v11 + 64) + 2LL * (v13 - 1)) )
          goto LABEL_24;
        *(_BYTE *)(v6 + v4) ^= 1u;
        --v3;
      }
      while ( v3 >= 0 );
    }
    dword_1C03271A0 = 0;
    result = a1;
    qword_1C0327168 = (__int64)v2;
  }
  else
  {
    dword_1C03271D0 = 4368;
    return qword_1C03271D8;
  }
  return result;
}
