/*
 * XREFs of VmpFillGpnRanges @ 0x14030C5D8
 * Callers:
 *     VmpPrefetchVirtualAddresses @ 0x14030D020 (VmpPrefetchVirtualAddresses.c)
 * Callees:
 *     VmpConvertPortionVpnRangeToGpnRange @ 0x14030C144 (VmpConvertPortionVpnRangeToGpnRange.c)
 */

unsigned __int64 __fastcall VmpFillGpnRanges(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 result; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r11
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  if ( a2[1] )
  {
    while ( 1 )
    {
      result = VmpConvertPortionVpnRangeToGpnRange(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, a6, &v15);
      v11 = *((_QWORD *)&v15 + 1);
      if ( !*((_QWORD *)&v15 + 1) )
        return result;
      v12 = *a4;
      if ( !*a4 )
        break;
      v13 = *(_QWORD *)(a3 + 16 * v12 - 8);
      v14 = *(_QWORD *)(a3 + 16 * v12 - 16);
      if ( v14 + v13 == (_QWORD)v15 )
      {
        result = v13 + *((_QWORD *)&v15 + 1);
        *(_QWORD *)(a3 + 16 * v12 - 8) = v13 + *((_QWORD *)&v15 + 1);
      }
      else
      {
        if ( v14 != (_QWORD)v15 + *((_QWORD *)&v15 + 1) )
          break;
        result = v13 + *((_QWORD *)&v15 + 1);
        *(_QWORD *)(a3 + 16 * v12 - 16) = v15;
        *(_QWORD *)(a3 + 16 * v12 - 8) = v13 + v11;
      }
LABEL_9:
      if ( !a2[1] )
        return result;
    }
    *(_OWORD *)(a3 + 16 * v12) = v15;
    result = v12 + 1;
    *a4 = v12 + 1;
    if ( v12 + 1 == a5 )
      return result;
    goto LABEL_9;
  }
  return result;
}
