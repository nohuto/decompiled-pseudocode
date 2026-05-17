/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x1800171C0
 * Callers:
 *     RtlExpandEnvironmentStrings_U @ 0x1800028C0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlGetPersistedStateLocation @ 0x18006FCC0 (RtlGetPersistedStateLocation.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlExpandEnvironmentStrings(
        __int64 a1,
        _WORD *a2,
        __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v8; // rdi
  int v9; // r12d
  __int64 v11; // r15
  _WORD *v12; // rbp
  __int64 result; // rax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rax
  int v16; // edx
  __int64 v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = a1;
  v6 = a3;
  v8 = a5;
  v9 = 0;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_9;
  do
  {
    if ( *a2 != 37 )
      goto LABEL_3;
    v14 = 0LL;
    v12 = a2 + 1;
    v15 = v6 - 1;
    if ( v6 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v12 == 37 )
        break;
      ++v12;
      ++v14;
    }
    while ( v14 < v15 );
    if ( v14
      && v14 < v15
      && ((v16 = RtlQueryEnvironmentVariable(a1, a2 + 1, v14, a4, v8, &v18), (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v11 += v18;
      if ( v16 == -1073741789 )
        --v11;
      v6 += -2LL - v14;
      if ( v16 < 0 )
      {
        v9 = v16;
      }
      else
      {
        v8 -= v18;
        a4 += v18;
      }
    }
    else
    {
LABEL_3:
      if ( v9 >= 0 )
      {
        if ( v8 <= 1 )
        {
          v9 = -1073741789;
        }
        else
        {
          --v8;
          *a4++ = *a2;
        }
      }
      ++v11;
      v12 = a2;
      --v6;
    }
    a1 = v17;
    a2 = v12 + 1;
  }
  while ( v6 );
  if ( v9 >= 0 )
  {
LABEL_9:
    if ( v8 )
      *a4 = 0;
    else
      v9 = -1073741789;
  }
  result = (unsigned int)v9;
  if ( a6 )
    *a6 = v11 + 1;
  return result;
}
