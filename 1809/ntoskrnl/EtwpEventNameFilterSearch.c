/*
 * XREFs of EtwpEventNameFilterSearch @ 0x14031489C
 * Callers:
 *     EtwpApplyEventNameFilter @ 0x1403143B8 (EtwpApplyEventNameFilter.c)
 * Callees:
 *     <none>
 */

char __fastcall EtwpEventNameFilterSearch(const char *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v3; // r11
  unsigned __int8 *v5; // r10
  __int64 v6; // r9
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r11d
  int v11; // r11d
  int v12; // r11d
  int v13; // r11d
  int v14; // r11d
  int v15; // r11d
  unsigned int v16; // ebx
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // rdx

  v3 = a2;
  v5 = (unsigned __int8 *)a1;
  v6 = 314159LL;
  if ( a2 >= 8uLL )
  {
    v7 = (unsigned __int64)a2 >> 3;
    v3 = a2 - 8 * v7;
    do
    {
      v8 = v5[6] + 37 * (v5[5] + 37 * (v5[4] + 37 * (v5[3] + 37 * (v5[2] + 37 * (v5[1] + 37 * (*v5 + 37 * v6))))));
      v9 = v5[7];
      v5 += 8;
      v6 = v9 + 37 * v8;
      --v7;
    }
    while ( v7 );
  }
  if ( v3 >= 1 && v3 <= 7 )
  {
    v10 = v3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                if ( v15 != 1 )
                  goto LABEL_20;
                v6 = *v5++ + 37 * v6;
              }
              v6 = *v5++ + 37 * v6;
            }
            v6 = *v5++ + 37 * v6;
          }
          v6 = *v5++ + 37 * v6;
        }
        v6 = *v5++ + 37 * v6;
      }
      v6 = *v5++ + 37 * v6;
    }
    v6 = *v5 + 37 * v6;
  }
LABEL_20:
  v16 = *(_DWORD *)(a3 + 28);
  v17 = -1LL << (*(_BYTE *)(a3 + 28) & 0x1F);
  v18 = v17 & v6;
  if ( v16 >= 0x20 )
  {
    v19 = *(_QWORD *)(a3 + 32)
        + 8
        * ((((v17 & (unsigned __int64)v6) >> 56)
          + 37
          * ((unsigned __int8)((v17 & (unsigned __int64)v6) >> 48)
           + 37
           * ((unsigned __int8)((unsigned __int16)((v17 & (unsigned __int64)v6) >> 32) >> 8)
            + 37
            * ((unsigned __int8)((v17 & (unsigned __int64)v6) >> 32)
             + 37
             * ((((unsigned int)v17 & (unsigned int)v6) >> 24)
              + 37
              * ((unsigned __int8)(((unsigned int)v17 & (unsigned int)v6) >> 16)
               + 37 * ((unsigned __int8)((unsigned __int16)(v17 & v6) >> 8) + 37 * ((unsigned __int8)v18 + 11623883)))))))) & ((v16 >> 5) - 1));
    do
    {
      v19 = *(_QWORD *)v19;
      if ( (v19 & 1) != 0 )
        goto LABEL_29;
    }
    while ( v18 != (v17 & *(_QWORD *)(v19 + 8)) );
LABEL_30:
    while ( v19 )
    {
      if ( !strcmp(a1, *(const char **)(v19 + 16)) )
        return 1;
      while ( 1 )
      {
        v19 = *(_QWORD *)v19;
        if ( (v19 & 1) != 0 )
          break;
        if ( (v6 & (-1LL << (v16 & 0x1F))) == ((-1LL << (v16 & 0x1F)) & *(_QWORD *)(v19 + 8)) )
          goto LABEL_30;
      }
LABEL_29:
      v19 = 0LL;
    }
  }
  return 0;
}
