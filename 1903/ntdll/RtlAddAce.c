/*
 * XREFs of RtlAddAce @ 0x1800689C0
 * Callers:
 *     RtlCreateAndSetSD @ 0x1800686E0 (RtlCreateAndSetSD.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014B00 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180014E40 (RtlValidAcl.c)
 */

__int64 __fastcall RtlAddAce(__int64 a1, unsigned int a2, unsigned int a3, char *a4, unsigned int a5)
{
  unsigned __int8 *v9; // rcx
  char v10; // r15
  __int64 v11; // r11
  unsigned __int64 v12; // rdx
  __int16 v13; // r12
  unsigned __int8 v14; // al
  unsigned int v15; // ecx
  __int64 i; // rdx
  int v17; // r8d
  __int64 v18; // r9
  char *v19; // rdi
  __int64 result; // rax
  __int64 v21; // r10
  bool v22; // cf
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v23) )
    return 3221225485LL;
  v9 = (unsigned __int8 *)a4;
  v10 = a2;
  v11 = a5;
  if ( (unsigned __int8)a2 <= *(_BYTE *)a1 )
    v10 = *(_BYTE *)a1;
  v12 = (unsigned __int64)&a4[a5];
  v13 = 0;
  if ( (unsigned __int64)a4 < v12 )
  {
    do
    {
      v14 = *v9;
      if ( *v9 > 3u )
      {
        if ( v14 <= 4u )
        {
          v22 = a2 < 3;
        }
        else
        {
          if ( v14 > 8u )
            goto LABEL_7;
          v22 = a2 < 4;
        }
        if ( v22 )
          return 3221225485LL;
      }
LABEL_7:
      ++v13;
      v9 += *((unsigned __int16 *)v9 + 1);
    }
    while ( (unsigned __int64)v9 < v12 );
  }
  if ( (unsigned __int64)v9 > v12 )
    return 3221225485LL;
  if ( !v23[0] || (unsigned __int64)a5 + v23[0] > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225507LL;
  v15 = 0;
  for ( i = a1 + 8; v15 < a3; i += *(unsigned __int16 *)(i + 2) )
  {
    if ( v15 >= *(unsigned __int16 *)(a1 + 4) )
      break;
    ++v15;
  }
  v17 = LODWORD(v23[0]) - i - 1;
  v18 = v17;
  if ( v17 >= 0 )
  {
    v21 = v17 + a5;
    do
    {
      *(_BYTE *)(v21 + i) = *(_BYTE *)(v18 + i);
      v21 = (unsigned int)(v21 - 1);
      --v18;
    }
    while ( v18 >= 0 );
  }
  if ( a5 )
  {
    v19 = &a4[-i];
    do
    {
      *(_BYTE *)i = v19[i];
      ++i;
      --v11;
    }
    while ( v11 );
  }
  *(_WORD *)(a1 + 4) += v13;
  result = 0LL;
  *(_BYTE *)a1 = v10;
  return result;
}
