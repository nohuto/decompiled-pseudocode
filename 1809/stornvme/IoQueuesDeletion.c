/*
 * XREFs of IoQueuesDeletion @ 0x1C000C3F0
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000DD5C (NVMeControllerPowerDown.c)
 *     NVMeControllerStop @ 0x1C000E2F8 (NVMeControllerStop.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x1C0015B08 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0015F44 (NVMeIoSubmissionQueueDelete.c)
 */

char __fastcall IoQueuesDeletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // di
  char v6; // si
  unsigned __int16 v7; // cx
  unsigned __int16 i; // di
  unsigned __int16 j; // bp
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // di
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int16 k; // r14
  unsigned __int16 v15; // di
  unsigned __int16 v16; // di

  v5 = 0;
  v6 = 1;
  if ( *(_WORD *)(a1 + 400) > 4u )
  {
    do
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      if ( *(_WORD *)(a1 + 400) <= 4u )
        break;
      ++v5;
    }
    while ( v5 < 0x3E8u );
  }
  v7 = *(_WORD *)(a1 + 264);
  for ( i = 0; i < v7; ++i )
  {
    for ( j = 0; j < 0x3E8u; ++j )
    {
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      if ( !*(_WORD *)(136LL * i + *(_QWORD *)(a1 + 752) + 128) )
        break;
    }
    v7 = *(_WORD *)(a1 + 264);
  }
  v10 = *(_WORD *)(a1 + 266);
  v11 = 0;
  if ( v10 )
  {
    do
    {
      v12 = 344LL * v11;
      v13 = *(_QWORD *)(a1 + 760);
      if ( *(_BYTE *)(v13 + v12 + 200) )
      {
        if ( *(_QWORD *)(v13 + v12 + 208) )
        {
          for ( k = 0; k < *(_WORD *)(a1 + 194); ++k )
            StorPortExtendedFunction(
              90LL,
              a1,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 760) + v12 + 208) + 8LL * k),
              0LL);
        }
      }
      v10 = *(_WORD *)(a1 + 266);
      ++v11;
    }
    while ( v11 < v10 );
    v7 = *(_WORD *)(a1 + 264);
  }
  v15 = 0;
  if ( v7 )
  {
    do
    {
      v6 = NVMeIoSubmissionQueueDelete(a1, ++v15);
      if ( !v6 )
        *(_DWORD *)(a1 + 24) = 15;
    }
    while ( v15 < *(_WORD *)(a1 + 264) );
    v10 = *(_WORD *)(a1 + 266);
  }
  v16 = 0;
  if ( v10 )
  {
    do
    {
      v6 = NVMeIoCompletionQueueDelete(a1, ++v16);
      if ( !v6 )
        *(_DWORD *)(a1 + 24) = 16;
    }
    while ( v16 < *(_WORD *)(a1 + 266) );
  }
  return v6;
}
