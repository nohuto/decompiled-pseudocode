/*
 * XREFs of sub_1800364D8 @ 0x1800364D8
 * Callers:
 *     TpReleaseWork @ 0x180031710 (TpReleaseWork.c)
 *     TpPostWork @ 0x180036570 (TpPostWork.c)
 *     TpWaitForWork @ 0x18007D170 (TpWaitForWork.c)
 * Callees:
 *     sub_180036544 @ 0x180036544 (sub_180036544.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall sub_1800364D8(PPEB_LDR_DATA Ldr, __int64 a2, __int64 a3)
{
  int v3; // r10d
  PPEB_LDR_DATA v4; // r9

  v3 = a3;
  v4 = Ldr;
  if ( Ldr )
  {
    if ( (unsigned int)sub_180036544(Ldr, a2, a3, Ldr) )
    {
      if ( v4->SsHandle == &off_180118390 )
      {
        Ldr = NtCurrentPeb()->Ldr;
        if ( !Ldr->ShutdownInProgress )
          return 1LL;
      }
    }
  }
  if ( v3 || (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
    sub_18010EFC8(Ldr, a2, a3, v4);
  return 0LL;
}
