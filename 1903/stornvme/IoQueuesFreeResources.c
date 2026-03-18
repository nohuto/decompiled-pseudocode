/*
 * XREFs of IoQueuesFreeResources @ 0x1C0009B48
 * Callers:
 *     IoQueuesCreation @ 0x1C000980C (IoQueuesCreation.c)
 *     NVMeControllerRemove @ 0x1C000B684 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B984 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned __int16 v4; // si
  __int64 v5; // rbp
  unsigned __int16 v6; // si
  __int64 v7; // r14
  __int64 v8; // r8
  __int64 v9; // rdi
  unsigned int i; // ebp
  __int64 v11; // r8
  __int64 v12; // r8

  v2 = 16 * *(unsigned __int16 *)(a1 + 270);
  result = *(unsigned __int16 *)(a1 + 270) << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 760) )
    {
      v4 = 0;
      if ( *(_WORD *)(a1 + 272) )
      {
        v5 = (unsigned int)result;
        do
          result = NVMeFreeDmaBuffer(a1, v5, *(_QWORD *)(136LL * v4++ + *(_QWORD *)(a1 + 760)));
        while ( v4 < *(_WORD *)(a1 + 272) );
      }
    }
    if ( *(_QWORD *)(a1 + 768) )
    {
      v6 = 0;
      if ( *(_WORD *)(a1 + 274) )
      {
        v7 = v2;
        do
        {
          v8 = *(_QWORD *)(a1 + 768);
          v9 = 344LL * v6;
          if ( *(_BYTE *)(v9 + v8 + 200) && *(_QWORD *)(v9 + v8 + 208) )
          {
            for ( i = 0;
                  i < *(unsigned __int16 *)(a1 + 202);
                  StorPortExtendedFunction(
                    91LL,
                    a1,
                    *(_QWORD *)(*(_QWORD *)(v9 + *(_QWORD *)(a1 + 768) + 208) + 8LL * i++)) )
            {
              ;
            }
            v8 = *(_QWORD *)(a1 + 768);
            if ( *(_QWORD *)(v9 + v8 + 208) )
            {
              StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v9 + v8 + 208));
              v8 = *(_QWORD *)(a1 + 768);
            }
          }
          result = NVMeFreeDmaBuffer(a1, v7, *(_QWORD *)(v9 + v8));
          ++v6;
        }
        while ( v6 < *(_WORD *)(a1 + 274) );
      }
    }
    v11 = *(_QWORD *)(a1 + 760);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 24) )
      {
        StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v11 + 24));
        v11 = *(_QWORD *)(a1 + 760);
      }
      result = *(_QWORD *)(v11 + 32);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v11 + 32));
        v11 = *(_QWORD *)(a1 + 760);
      }
      if ( v11 )
        result = StorPortExtendedFunction(1LL, a1, v11);
    }
    v12 = *(_QWORD *)(a1 + 768);
    if ( v12 )
    {
      result = *(_QWORD *)(v12 + 192);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v12 + 192));
        v12 = *(_QWORD *)(a1 + 768);
      }
      if ( v12 )
        result = StorPortExtendedFunction(1LL, a1, v12);
    }
  }
  *(_QWORD *)(a1 + 768) = 0LL;
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_DWORD *)(a1 + 272) = 0;
  return result;
}
