/*
 * XREFs of RtlpGetLengthWithoutLastPathElement @ 0x180077414
 * Callers:
 *     RtlGetLengthWithoutLastFullDosOrNtPathElement @ 0x180077400 (RtlGetLengthWithoutLastFullDosOrNtPathElement.c)
 * Callees:
 *     RtlpDetermineDosPathNameType4 @ 0x180077514 (RtlpDetermineDosPathNameType4.c)
 */

__int64 __fastcall RtlpGetLengthWithoutLastPathElement(__int64 a1, __int64 a2, unsigned __int16 *a3, int *a4)
{
  __int64 result; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // [rsp+38h] [rbp+10h] BYREF
  int v14; // [rsp+40h] [rbp+18h] BYREF

  result = 0LL;
  v13 = 0;
  v14 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !a3 || (_DWORD)a1 || !a4 )
    return 3221225485LL;
  v7 = *a3 >> 1;
  if ( !v7 )
    return result;
  result = RtlpDetermineDosPathNameType4(a1, a3, &v13, &v14);
  if ( (int)result < 0 )
    return result;
  if ( ((1 << v13) & 0xD6) == 0 || (v14 & 0x200) != 0 )
    return 3221225485LL;
  v8 = *((_QWORD *)a3 + 1);
  do
  {
    v9 = (unsigned int)(v7 - 1);
    if ( *(_WORD *)(v8 + 2 * v9) != 47 && *(_WORD *)(v8 + 2 * v9) != 92 )
      break;
    --v7;
  }
  while ( (_DWORD)v9 );
  if ( v7 )
  {
    do
    {
      v10 = (unsigned int)(v7 - 1);
      if ( *(_WORD *)(v8 + 2 * v10) == 92 )
        break;
      if ( *(_WORD *)(v8 + 2 * v10) == 47 )
        break;
      --v7;
    }
    while ( (_DWORD)v10 );
    if ( v7 )
    {
      do
      {
        v11 = (unsigned int)(v7 - 1);
        if ( *(_WORD *)(v8 + 2 * v11) != 92 && *(_WORD *)(v8 + 2 * v11) != 47 )
          break;
        --v7;
      }
      while ( (_DWORD)v11 );
    }
  }
  v12 = v7 + 1;
  if ( !v7 )
    v12 = 0;
  *a4 = v12;
  return 0LL;
}
