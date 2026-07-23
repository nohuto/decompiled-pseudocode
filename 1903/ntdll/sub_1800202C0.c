/*
 * XREFs of sub_1800202C0 @ 0x1800202C0
 * Callers:
 *     sub_18000108C @ 0x18000108C (sub_18000108C.c)
 *     sub_18001F4F0 @ 0x18001F4F0 (sub_18001F4F0.c)
 * Callees:
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 */

unsigned int *__fastcall sub_1800202C0(char *BaseAddress, signed __int64 a2, char *a3, char *a4)
{
  __int64 v6; // r10
  unsigned int v7; // r9d
  char *v8; // rdi
  unsigned int *v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // r11d

  if ( (unsigned __int64)BaseAddress >= *(_QWORD *)(a2 + 8)
    && (unsigned __int64)BaseAddress < *(_QWORD *)(a2 + 8) + (unsigned __int64)*(unsigned int *)(a2 + 16) )
  {
    goto LABEL_3;
  }
  if ( (unsigned __int64)BaseAddress >= *((_QWORD *)&xmmword_18017A4E0 + 1)
    && (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18017A4E0 + 1)
                                     + (unsigned __int64)(unsigned int)qword_18017A4F0 )
  {
    *(_OWORD *)a2 = xmmword_18017A4E0;
    *(_QWORD *)(a2 + 16) = qword_18017A4F0;
LABEL_3:
    v6 = *(_QWORD *)a2;
    goto LABEL_4;
  }
  v6 = sub_18001E620((unsigned __int64)BaseAddress, a2, a3, a4);
LABEL_4:
  if ( v6 )
  {
    v7 = *(_DWORD *)(a2 + 20) / 0xCu;
    if ( !v7 )
      goto LABEL_19;
    v8 = &BaseAddress[-*(_QWORD *)(a2 + 8)];
    v9 = (unsigned int *)(v6 + 12LL * (v7 - 1));
    if ( (unsigned __int64)v8 < *v9 )
    {
      v10 = 0;
      v11 = v7 - 2;
      while ( v11 >= v10 )
      {
        v12 = (v11 + v10) >> 1;
        v9 = (unsigned int *)(v6 + 12LL * v12);
        if ( (unsigned __int64)v8 < *v9 )
        {
          v11 = v12 - 1;
        }
        else
        {
          if ( (unsigned __int64)v8 < v9[3] )
            break;
          v10 = v12 + 1;
        }
      }
    }
    if ( (unsigned __int64)v8 < *v9 || (unsigned __int64)v8 >= v9[1] )
LABEL_19:
      v9 = 0LL;
    if ( v9 )
    {
      if ( (v9[2] & 1) != 0 )
        return (unsigned int *)(*(_QWORD *)(a2 + 8) - 1LL + v9[2]);
    }
    return v9;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
    return 0LL;
  }
}
