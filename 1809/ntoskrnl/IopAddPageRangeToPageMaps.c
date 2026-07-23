/*
 * XREFs of IopAddPageRangeToPageMaps @ 0x140280F6C
 * Callers:
 *     IopAddPageToPageMap @ 0x140281058 (IopAddPageToPageMap.c)
 * Callees:
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 */

void __fastcall IopAddPageRangeToPageMaps(
        __int64 a1,
        __int128 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  __int128 v9; // xmm0
  unsigned int v10; // esi
  unsigned int v11; // ebx
  int v12; // edi
  unsigned int v13; // eax
  _OWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF

  RtlSetBitsEx((__int64)a2, a3, a4);
  if ( a1 )
  {
    if ( (a5 & 0xFF0) != 0 )
    {
      v9 = *a2;
      v10 = 56;
      v11 = (unsigned __int8)(a5 >> 4);
      v12 = (((unsigned __int64)(*(_QWORD *)(a1 + 48) + 7LL) >> 3) + 7) & 0xFFFFFFF8;
      v14[0] = v9;
      if ( (unsigned __int8)(a5 >> 4) )
      {
        do
        {
          v10 += v12;
          if ( v10 + v12 > (unsigned __int64)(*(_QWORD *)(a1 + 32) - 0x2000LL) )
            break;
          *((_QWORD *)&v14[0] + 1) = a1 + v10;
          if ( (v11 & 1) != 0 )
          {
            RtlSetBitsEx((__int64)v14, a3, a4);
          }
          else if ( (v11 & 0x10) != 0 )
          {
            RtlClearBitsEx((__int64)v14, a3, a4);
            v11 &= ~0x10u;
          }
          v13 = v11;
          v11 >>= 1;
        }
        while ( v13 >= 2 );
      }
    }
  }
}
