/*
 * XREFs of WbFreeWarbirdProcess @ 0x1406ADB40
 * Callers:
 *     sub_1405CAC58 @ 0x1405CAC58 (sub_1405CAC58.c)
 * Callees:
 *     WbFreeWarbirdEncryptionSegment @ 0x1405B42E8 (WbFreeWarbirdEncryptionSegment.c)
 *     sub_1405CA528 @ 0x1405CA528 (sub_1405CA528.c)
 *     sub_1405CA63C @ 0x1405CA63C (sub_1405CA63C.c)
 *     sub_1405CA880 @ 0x1405CA880 (sub_1405CA880.c)
 *     sub_1406ADC70 @ 0x1406ADC70 (sub_1406ADC70.c)
 *     WbFreeMemoryBlock @ 0x1406AF0E4 (WbFreeMemoryBlock.c)
 */

__int64 __fastcall WbFreeWarbirdProcess(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int i; // ebp
  unsigned int j; // ebp
  __int64 *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int k; // esi

  v1 = 0;
  if ( a1 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 92); ++i )
      sub_1405CA63C(a1, *(_QWORD *)(*(_DWORD *)(a1 + 88) * i + *(_QWORD *)(a1 + 104)));
    sub_1406ADC70(a1 + 88);
    for ( j = 0; j < *(_DWORD *)(a1 + 12); ++j )
      sub_1405CA528(a1, *(_QWORD *)(j * *(_DWORD *)(a1 + 8) + *(_QWORD *)(a1 + 24)));
    sub_1406ADC70(a1 + 8);
    v5 = (__int64 *)(a1 + 64);
    while ( 1 )
    {
      v6 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (v7 = *(_QWORD *)v6, *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      if ( (__int64 *)v6 == v5 )
        break;
      sub_1405CA528(a1, v6);
    }
    for ( k = 0; k < *(_DWORD *)(a1 + 140); ++k )
      WbFreeWarbirdEncryptionSegment(*(_QWORD **)(k * *(_DWORD *)(a1 + 136) + *(_QWORD *)(a1 + 152)));
    sub_1406ADC70(a1 + 136);
    if ( *(_DWORD *)(a1 + 188) )
    {
      do
        WbFreeMemoryBlock(*(PVOID **)(*(_DWORD *)(a1 + 184) * v1++ + *(_QWORD *)(a1 + 200)));
      while ( v1 < *(_DWORD *)(a1 + 188) );
    }
    sub_1406ADC70(a1 + 184);
    sub_1405CA880((void *)a1);
  }
  return 0LL;
}
