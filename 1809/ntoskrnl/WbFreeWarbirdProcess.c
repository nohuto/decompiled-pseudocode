/*
 * XREFs of WbFreeWarbirdProcess @ 0x140691158
 * Callers:
 *     sub_14062656C @ 0x14062656C (sub_14062656C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WbFreeWarbirdEncryptionSegment @ 0x140585AE0 (WbFreeWarbirdEncryptionSegment.c)
 *     sub_140625A74 @ 0x140625A74 (sub_140625A74.c)
 *     sub_140626220 @ 0x140626220 (sub_140626220.c)
 *     sub_140691290 @ 0x140691290 (sub_140691290.c)
 *     WbFreeMemoryBlock @ 0x1406921E4 (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbFreeWarbirdProcess(_DWORD *P)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  unsigned int j; // ebp
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( P )
  {
    for ( i = 0; i < P[23]; ++i )
      sub_140626220((__int64)P, *(_QWORD *)(P[22] * i + *((_QWORD *)P + 13)));
    sub_140691290(P + 22);
    for ( j = 0; j < P[3]; ++j )
      sub_140625A74((__int64)P, *(_QWORD *)(j * P[2] + *((_QWORD *)P + 3)));
    sub_140691290(P + 2);
    v5 = (char *)(P + 16);
    while ( 1 )
    {
      v6 = *(_QWORD *)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (char *)v6 == v5 )
        break;
      sub_140625A74((__int64)P, v6);
    }
    for ( k = 0; k < P[35]; ++k )
      WbFreeWarbirdEncryptionSegment(*(_QWORD **)(k * P[34] + *((_QWORD *)P + 19)));
    sub_140691290(P + 34);
    if ( P[47] )
    {
      do
        WbFreeMemoryBlock(*(PVOID **)(P[46] * v1++ + *((_QWORD *)P + 25)));
      while ( v1 < P[47] );
    }
    sub_140691290(P + 46);
    ExFreePoolWithTag(P, 0x42524157u);
  }
  return 0LL;
}
