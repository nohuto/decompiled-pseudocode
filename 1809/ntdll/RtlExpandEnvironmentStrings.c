/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x180056C00
 * Callers:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180056B80 (RtlExpandEnvironmentStrings_U.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // r15
  int v10; // edi
  __int64 v11; // rsi
  _WORD *v12; // r13
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rbp
  int EnvironmentVariable; // ecx
  __int64 v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+80h] [rbp+18h]

  v17 = a1;
  v7 = a3;
  v10 = 0;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  do
  {
    if ( *a2 != 37 )
      goto LABEL_3;
    v14 = v7 - 1;
    v15 = 0LL;
    v12 = a2 + 1;
    if ( v7 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v12 == 37 )
        break;
      ++v12;
      ++v15;
    }
    while ( v15 < v14 );
    if ( v15
      && v15 < v14
      && ((EnvironmentVariable = RtlQueryEnvironmentVariable(a1, a2 + 1, v15),
           (int)(EnvironmentVariable + 0x80000000) < 0)
       || EnvironmentVariable == -1073741789) )
    {
      v11 += v18;
      if ( EnvironmentVariable == -1073741789 )
        --v11;
      v7 += -2LL - v15;
      if ( EnvironmentVariable < 0 )
      {
        v10 = EnvironmentVariable;
      }
      else
      {
        a5 -= v18;
        a4 += v18;
      }
    }
    else
    {
LABEL_3:
      if ( v10 >= 0 )
      {
        if ( a5 <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --a5;
          *a4++ = *a2;
        }
      }
      ++v11;
      v12 = a2;
      --v7;
    }
    a1 = v17;
    a2 = v12 + 1;
  }
  while ( v7 );
  if ( v10 >= 0 )
  {
LABEL_9:
    if ( a5 )
      *a4 = 0;
    else
      v10 = -1073741789;
  }
  if ( a6 )
    *a6 = v11 + 1;
  return (unsigned int)v10;
}
