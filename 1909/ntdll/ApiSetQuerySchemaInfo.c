/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x1800DF938
 * Callers:
 *     ApiSetQueryApiSetPresenceEx @ 0x1800D57F0 (ApiSetQueryApiSetPresenceEx.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1800290D0 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(_DWORD *a1, unsigned __int16 *a2, char *a3, bool *a4)
{
  unsigned int v4; // ebx
  char v8; // si
  bool v9; // bp
  const WCHAR *v10; // r11
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // edx
  _WORD *v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // eax
  _WORD *v17; // r9
  int v18; // r10d
  int v19; // eax
  unsigned int *v20; // rax
  unsigned int *v21; // rdx
  unsigned int v22; // r10d
  unsigned int v23; // ecx
  _WORD *v24; // r8
  _WORD *v25; // r8
  int v26; // r9d
  int v27; // eax

  v4 = 0;
  v8 = 0;
  v9 = 0;
  if ( *a2 < 8u )
    return (unsigned int)-1073741811;
  v10 = (const WCHAR *)*((_QWORD *)a2 + 1);
  v11 = *(_QWORD *)v10 & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v11 != 0x2D004900500041LL && v11 != 0x2D005400580045LL )
    return (unsigned int)-1073741811;
  v12 = *a2;
  v13 = *a2;
  v14 = (_WORD *)((char *)v10 + v12);
  if ( (unsigned int)v12 > 1 )
  {
    do
    {
      v13 -= 2;
      --v14;
    }
    while ( *v14 != 45 && v13 > 1 );
  }
  if ( !((unsigned __int16)v13 >> 1) )
    return (unsigned int)-1073741811;
  v15 = 0;
  v16 = ((unsigned int)v12 - (unsigned __int16)v13) >> 1;
  if ( !v16 )
    return (unsigned int)-1073741811;
  if ( *(const WCHAR *)((char *)v10 + (unsigned __int16)v13) != 45 )
    return (unsigned int)-1073741811;
  v17 = (_WORD *)((char *)v10 + (unsigned __int16)v13 + 2);
  v18 = v16 - 1;
  if ( v16 == 1 )
    return (unsigned int)-1073741811;
  if ( (int)(v16 - 1) > 0 )
  {
    while ( (unsigned __int16)(*v17 - 48) <= 9u )
    {
      v19 = (unsigned __int16)*v17++;
      --v18;
      v15 = v19 + 2 * (5 * v15 - 24);
      if ( v18 <= 0 )
        goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
LABEL_14:
  v20 = (unsigned int *)ApiSetpSearchForApiSet(a1, v10, (unsigned __int16)v13 >> 1);
  v21 = v20;
  if ( v20 )
  {
    v22 = 0;
    v23 = (v20[2] - v20[3]) >> 1;
    if ( v23 )
    {
      v24 = (_WORD *)((char *)a1 + v20[1] + v20[3]);
      if ( *v24 == 45 )
      {
        v25 = v24 + 1;
        v26 = v23 - 1;
        if ( v23 != 1 )
        {
          if ( (int)(v23 - 1) <= 0 )
          {
LABEL_21:
            if ( v15 <= v22 )
            {
              v8 = 1;
              if ( v21[5] )
                v9 = *(_DWORD *)((char *)a1 + v21[4] + 16) != 0;
            }
          }
          else
          {
            while ( (unsigned __int16)(*v25 - 48) <= 9u )
            {
              v27 = (unsigned __int16)*v25++;
              --v26;
              v22 = v27 + 2 * (5 * v22 - 24);
              if ( v26 <= 0 )
                goto LABEL_21;
            }
          }
        }
      }
    }
  }
  *a3 = v8;
  *a4 = v9;
  return v4;
}
