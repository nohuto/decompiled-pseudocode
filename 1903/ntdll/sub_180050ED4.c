/*
 * XREFs of sub_180050ED4 @ 0x180050ED4
 * Callers:
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 * Callees:
 *     sub_18004DC4C @ 0x18004DC4C (sub_18004DC4C.c)
 *     sub_180050F4C @ 0x180050F4C (sub_180050F4C.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

void __fastcall sub_180050ED4(__int64 a1)
{
  signed __int64 v2; // r8
  _QWORD v3[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (byte_180166058 & 2) != 0 && sub_18004DC4C(a1) )
  {
    memset(v3, 0, 0x30uLL);
    while ( 1 )
    {
      LOBYTE(v2) = 1;
      if ( (int)sub_180050F4C(a1, v3, v2) < 0 )
        break;
      if ( (BYTE2(v3[2]) & 0x11) == 0x11 )
        v2 = _InterlockedExchangeAdd64(
               (volatile signed __int64 *)(*(_QWORD *)(qword_180163B58 + 8LL * LOWORD(v3[4]) - 8) + 32LL),
               -v3[1]);
    }
  }
}
