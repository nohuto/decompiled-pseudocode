/*
 * XREFs of RtlWow64PushCrossProcessWork @ 0x1800FF320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlWow64PushCrossProcessWork(volatile signed __int64 *a1, _DWORD *a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt
  signed __int64 i; // [rsp+8h] [rbp-20h]
  signed __int64 v6; // [rsp+48h] [rbp+20h]

  v2 = *a1;
  for ( i = *a1; ; i = v2 )
  {
    *a2 = v2;
    HIDWORD(v6) = HIDWORD(v2) + 1;
    LODWORD(v6) = (_DWORD)a2 - (_DWORD)a1;
    v3 = i;
    v2 = _InterlockedCompareExchange64(a1, v6, i);
    if ( v3 == v2 )
      break;
  }
  return 1;
}
