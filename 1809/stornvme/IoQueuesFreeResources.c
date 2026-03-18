/*
 * XREFs of IoQueuesFreeResources @ 0x1C000C5E0
 * Callers:
 *     IoQueuesCreation @ 0x1C000C350 (IoQueuesCreation.c)
 *     NVMeControllerRemove @ 0x1C000DF24 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000E2F8 (NVMeControllerStop.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 */

__int64 __fastcall IoQueuesFreeResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 result; // rax
  unsigned __int16 v7; // si
  __int64 v8; // rbp
  unsigned __int16 v9; // si
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned int i; // ebp
  __int64 v14; // r8
  __int64 v15; // r8

  v5 = 16 * *(unsigned __int16 *)(a1 + 262);
  result = *(unsigned __int16 *)(a1 + 262) << 6;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    if ( *(_QWORD *)(a1 + 752) )
    {
      v7 = 0;
      if ( *(_WORD *)(a1 + 264) )
      {
        v8 = (unsigned int)result;
        do
          result = NVMeFreeDmaBuffer(a1, v8, *(_QWORD *)(136LL * v7++ + *(_QWORD *)(a1 + 752)));
        while ( v7 < *(_WORD *)(a1 + 264) );
      }
    }
    if ( *(_QWORD *)(a1 + 760) )
    {
      v9 = 0;
      if ( *(_WORD *)(a1 + 266) )
      {
        v10 = v5;
        do
        {
          v11 = *(_QWORD *)(a1 + 760);
          v12 = 344LL * v9;
          if ( *(_BYTE *)(v12 + v11 + 200) && *(_QWORD *)(v12 + v11 + 208) )
          {
            for ( i = 0;
                  i < *(unsigned __int16 *)(a1 + 194);
                  StorPortExtendedFunction(
                    91LL,
                    a1,
                    *(_QWORD *)(*(_QWORD *)(v12 + *(_QWORD *)(a1 + 760) + 208) + 8LL * i++),
                    1LL) )
            {
              ;
            }
            v11 = *(_QWORD *)(a1 + 760);
            if ( *(_QWORD *)(v12 + v11 + 208) )
            {
              StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v12 + v11 + 208), a4);
              v11 = *(_QWORD *)(a1 + 760);
            }
          }
          result = NVMeFreeDmaBuffer(a1, v10, *(_QWORD *)(v12 + v11));
          ++v9;
        }
        while ( v9 < *(_WORD *)(a1 + 266) );
      }
    }
    v14 = *(_QWORD *)(a1 + 752);
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 24) )
      {
        StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v14 + 24), a4);
        v14 = *(_QWORD *)(a1 + 752);
      }
      result = *(_QWORD *)(v14 + 32);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v14 + 32), a4);
        v14 = *(_QWORD *)(a1 + 752);
      }
      if ( v14 )
        result = StorPortExtendedFunction(1LL, a1, v14, a4);
    }
    v15 = *(_QWORD *)(a1 + 760);
    if ( v15 )
    {
      result = *(_QWORD *)(v15 + 192);
      if ( result )
      {
        result = StorPortExtendedFunction(1LL, a1, *(_QWORD *)(v15 + 192), a4);
        v15 = *(_QWORD *)(a1 + 760);
      }
      if ( v15 )
        result = StorPortExtendedFunction(1LL, a1, v15, a4);
    }
  }
  *(_QWORD *)(a1 + 760) = 0LL;
  *(_QWORD *)(a1 + 752) = 0LL;
  *(_DWORD *)(a1 + 264) = 0;
  return result;
}
