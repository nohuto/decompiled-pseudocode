/*
 * XREFs of KiAssignFixedNodes @ 0x1409F76E0
 * Callers:
 *     KiPerformGroupConfiguration @ 0x1409B75EC (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAssignFixedNodes(__int64 *a1, __int64 a2, unsigned __int16 a3, char a4, int *a5, _WORD *a6)
{
  unsigned __int16 v7; // r15
  _WORD *v8; // rdi
  __int64 i; // rcx
  int v10; // eax
  int *v11; // rdi
  __int64 j; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  unsigned __int16 k; // di
  __int64 v16; // rax
  char v17; // bl
  unsigned int v18; // r11d
  unsigned __int16 v19; // cx
  unsigned __int16 v20; // dx
  unsigned __int16 *v21; // r10
  int *v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rax

  v7 = a2;
  v8 = a6;
  for ( i = 20LL; i; --i )
    *v8++ = 0;
  v10 = KiMaximumGroupSize;
  v11 = a5;
  for ( j = 20LL; j; --j )
    *v11++ = v10;
  if ( (_WORD)a2 )
  {
    v13 = a1;
    a2 = (unsigned __int16)a2;
    do
    {
      v14 = *v13++;
      *(_WORD *)(v14 + 144) = -1;
      *(_BYTE *)(v14 + 173) &= ~2u;
      --a2;
    }
    while ( a2 );
  }
  for ( k = 0; k < v7; ++k )
  {
    v16 = a1[k];
    v17 = *(_BYTE *)(v16 + 173);
    if ( (v17 & 8) != 0 )
    {
      if ( k >= a3 )
      {
        v18 = KiMaximumGroupSize;
        v19 = 20;
        v20 = 0;
        if ( !a3 )
          goto LABEL_22;
        v21 = a6;
        v22 = a5;
        do
        {
          if ( *v22 >= (unsigned int)*(unsigned __int8 *)(v16 + 172) && *v21 < v18 )
          {
            v18 = *v21;
            v19 = v20;
          }
          ++v20;
          ++v22;
          ++v21;
        }
        while ( v20 < a3 );
        if ( v19 == 20 )
        {
LABEL_22:
          if ( !a4 )
            return 0;
          if ( !*(_WORD *)(v16 + 146) )
          {
            if ( (v17 & 2) == 0 )
            {
              do
                --k;
              while ( (*(_BYTE *)(a1[k] + 173) & 2) == 0 );
            }
            v24 = a1[k];
            v25 = *(unsigned __int16 *)(v24 + 144);
            *(_WORD *)(v24 + 144) = -1;
            *(_BYTE *)(v24 + 173) &= ~2u;
            --a6[v25];
            a5[v25] += *(unsigned __int8 *)(v24 + 172);
          }
        }
        else
        {
          *(_WORD *)(v16 + 144) = v19;
          *(_BYTE *)(v16 + 173) |= 2u;
          v23 = *(unsigned __int8 *)(v16 + 172);
          ++a6[v19];
          a5[v19] -= v23;
        }
      }
      else
      {
        ++a6[k];
        *(_WORD *)(v16 + 144) = k;
        *(_BYTE *)(v16 + 173) |= 2u;
        a5[k] -= *(unsigned __int8 *)(v16 + 172);
      }
    }
  }
  return 1;
}
