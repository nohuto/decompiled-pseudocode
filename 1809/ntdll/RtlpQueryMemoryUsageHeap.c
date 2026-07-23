/*
 * XREFs of RtlpQueryMemoryUsageHeap @ 0x1800F3CBC
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x18007D330 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHeapQueryTotalReserveSize @ 0x1800F3990 (RtlpHeapQueryTotalReserveSize.c)
 * Callees:
 *     RtlpGetLowFragHeapMetadataSize @ 0x18010A35C (RtlpGetLowFragHeapMetadataSize.c)
 */

__int64 __fastcall RtlpQueryMemoryUsageHeap(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // r8
  unsigned __int64 v5; // r9
  _QWORD *v6; // r11
  __int64 v7; // r10
  _QWORD **v8; // rbx
  _QWORD **v9; // rdi
  _QWORD *v10; // rax
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rsi
  _QWORD *v13; // r10
  _QWORD *i; // rax

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return 3221225474LL;
  *a2 = 0LL;
  *a3 = 0LL;
  RtlpGetLowFragHeapMetadataSize(a1, a2, a3, 0LL);
  v8 = (_QWORD **)(v7 + 288);
  v9 = (_QWORD **)(v7 + 272);
  while ( 1 )
  {
    v10 = *v8;
    v11 = -1LL;
    v12 = 0LL;
    v13 = 0LL;
    while ( v10 != v8 )
    {
      if ( (unsigned __int64)(v10 - 3) < v11 && (unsigned __int64)(v10 - 3) > v5 )
      {
        v11 = (unsigned __int64)(v10 - 3);
        v12 = v10 - 3;
      }
      v10 = (_QWORD *)*v10;
    }
    for ( i = *v9; i != v9; i = (_QWORD *)*i )
    {
      if ( (unsigned __int64)i < v11 && (unsigned __int64)i > v5 )
      {
        v11 = (unsigned __int64)i;
        v13 = i;
      }
    }
    if ( v11 == -1LL )
      break;
    v5 = 0LL;
    if ( !v13 )
      v5 = (unsigned __int64)v12;
    if ( v5 )
    {
      *v6 += (unsigned __int64)*(unsigned int *)(v5 + 56) << 12;
      *v4 += (unsigned __int64)(unsigned int)(*(_DWORD *)(v5 + 56) - *(_DWORD *)(v5 + 80)) << 12;
    }
    else
    {
      v5 = (unsigned __int64)v13;
      *v6 += v13[5];
      *v4 += v13[4];
    }
  }
  return 0LL;
}
