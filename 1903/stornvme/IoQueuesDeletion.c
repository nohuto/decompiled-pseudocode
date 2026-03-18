/*
 * XREFs of IoQueuesDeletion @ 0x1C00098AC
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000B448 (NVMeControllerPowerDown.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x1C0015718 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015B44 (NVMeIoSubmissionQueueDelete.c)
 */

char __fastcall IoQueuesDeletion(__int64 a1)
{
  char v2; // si
  unsigned __int16 v3; // dx
  unsigned __int16 i; // di
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 j; // di
  unsigned __int16 v13; // [rsp+78h] [rbp+38h]
  unsigned __int16 v14; // [rsp+78h] [rbp+38h]
  __int16 v15; // [rsp+78h] [rbp+38h]
  unsigned __int16 v16; // [rsp+78h] [rbp+38h]
  unsigned __int16 v17; // [rsp+78h] [rbp+38h]

  v2 = 1;
  v13 = 0;
  if ( *(_WORD *)(a1 + 408) > 4u )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL);
      if ( *(_WORD *)(a1 + 408) <= 4u )
        break;
      ++v13;
    }
    while ( v13 < 0x3E8u );
  }
  v3 = *(_WORD *)(a1 + 272);
  v14 = 0;
  if ( v3 )
  {
    do
    {
      for ( i = 0; i < 0x3E8u; ++i )
      {
        StorPortExtendedFunction(81LL, a1, 10000LL);
        v5 = v14;
        if ( !*(_WORD *)(136LL * v14 + *(_QWORD *)(a1 + 760) + 128) )
          break;
      }
      v3 = *(_WORD *)(a1 + 272);
      ++v14;
    }
    while ( (unsigned __int16)(v5 + 1) < v3 );
  }
  v6 = *(_WORD *)(a1 + 274);
  v7 = 0;
  v15 = 0;
  if ( v6 )
  {
    v8 = 0;
    do
    {
      v9 = 344LL * v8;
      v10 = *(_QWORD *)(a1 + 768);
      if ( *(_BYTE *)(v9 + v10 + 200) )
      {
        if ( *(_QWORD *)(v9 + v10 + 208) )
        {
          for ( j = 0; j < *(_WORD *)(a1 + 202); ++j )
          {
            StorPortExtendedFunction(
              90LL,
              a1,
              *(_QWORD *)(*(_QWORD *)(344LL * v7 + *(_QWORD *)(a1 + 768) + 208) + 8LL * j));
            v7 = v15;
          }
        }
      }
      v6 = *(_WORD *)(a1 + 274);
      v15 = ++v7;
      v8 = v7;
    }
    while ( v7 < v6 );
    v3 = *(_WORD *)(a1 + 272);
  }
  v16 = 0;
  if ( v3 )
  {
    do
    {
      v2 = NVMeIoSubmissionQueueDelete(a1);
      if ( !v2 )
      {
        *(_DWORD *)(a1 + 24) = 15;
        StorPortExtendedFunction(98LL, a1, 0LL);
      }
      ++v16;
    }
    while ( v16 < *(_WORD *)(a1 + 272) );
    v6 = *(_WORD *)(a1 + 274);
  }
  v17 = 0;
  if ( v6 )
  {
    do
    {
      v2 = NVMeIoCompletionQueueDelete(a1);
      if ( !v2 )
      {
        *(_DWORD *)(a1 + 24) = 16;
        StorPortExtendedFunction(98LL, a1, 0LL);
      }
      ++v17;
    }
    while ( v17 < *(_WORD *)(a1 + 274) );
  }
  return v2;
}
