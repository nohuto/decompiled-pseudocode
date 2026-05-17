/*
 * XREFs of RtlWow64PopCrossProcessWork @ 0x1800FF290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlWow64PopCrossProcessWork(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  _DWORD *result; // rax
  signed __int64 v3; // rtt
  _DWORD *v4; // [rsp+0h] [rbp-28h]
  signed __int64 v5; // [rsp+40h] [rbp+18h]
  signed __int64 i; // [rsp+48h] [rbp+20h]

  v1 = *a1;
  for ( i = *a1; ; i = v1 )
  {
    if ( !(_DWORD)v1 )
      return 0LL;
    v4 = (_DWORD *)((char *)a1 + (unsigned int)v1);
    HIDWORD(v5) = HIDWORD(v1) + 1;
    LODWORD(v5) = *v4;
    v3 = i;
    v1 = _InterlockedCompareExchange64(a1, v5, i);
    if ( v3 == v1 )
      break;
  }
  result = v4;
  *v4 = 0;
  return result;
}
