/*
 * XREFs of RtlWow64PopAllCrossProcessWork @ 0x1800FF1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *__fastcall RtlWow64PopAllCrossProcessWork(volatile signed __int64 *a1)
{
  signed __int64 v2; // rax
  int *result; // rax
  signed __int64 v4; // rtt
  int *v5; // rdx
  int *j; // rcx
  int *v7; // r10
  int *v8; // r9
  int v9; // ecx
  int *v10; // [rsp+0h] [rbp-18h]
  signed __int64 v11; // [rsp+28h] [rbp+10h]
  signed __int64 i; // [rsp+30h] [rbp+18h]

  v2 = *a1;
  for ( i = *a1; ; i = v2 )
  {
    if ( !(_DWORD)v2 )
      return 0LL;
    v10 = (int *)((char *)a1 + (unsigned int)v2);
    HIDWORD(v11) = HIDWORD(v2) + 1;
    LODWORD(v11) = 0;
    v4 = i;
    v2 = _InterlockedCompareExchange64(a1, v11, i);
    if ( v4 == v2 )
      break;
  }
  result = 0LL;
  v5 = v10;
  for ( j = 0LL; ; j = v7 )
  {
    v7 = v5;
    if ( !v5 )
      break;
    if ( *v5 )
      v8 = (int *)((char *)a1 + (unsigned int)*v5);
    else
      v8 = 0LL;
    if ( j )
      v9 = (_DWORD)j - (_DWORD)a1;
    else
      v9 = 0;
    *v5 = v9;
    result = v5;
    v5 = v8;
  }
  return result;
}
