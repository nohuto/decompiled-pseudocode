/*
 * XREFs of VrpDereferenceDiffHiveEntryWithLock @ 0x14080E628
 * Callers:
 *     VrpDereferenceDiffHiveEntry @ 0x14080E5A4 (VrpDereferenceDiffHiveEntry.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall VrpDereferenceDiffHiveEntryWithLock(volatile signed __int64 *P)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r11
  volatile signed __int64 *i; // rdx

  v1 = _InterlockedDecrement64(P + 2);
  if ( v1 <= 0 )
  {
    if ( v1 )
      __fastfail(0xEu);
    v2 = P[1] & (-1LL << (dword_1404389A4 & 0x1F));
    for ( i = (volatile signed __int64 *)(qword_1404389A8
                                        + 8
                                        * ((HIBYTE(v2)
                                          + 37
                                          * (BYTE6(v2)
                                           + 37
                                           * (BYTE5(v2)
                                            + 37
                                            * (BYTE4(v2)
                                             + 37
                                             * (BYTE3(v2)
                                              + 37
                                              * (BYTE2(v2) + 37 * (BYTE1(v2) + 37 * ((unsigned __int8)v2 + 11623883)))))))) & (((unsigned int)dword_1404389A4 >> 5) - 1)));
          (*i & 1) == 0;
          i = (volatile signed __int64 *)*i )
    {
      if ( *(volatile signed __int64 **)i == P )
      {
        *i = *P;
        --gLoadedDiffHives;
        *P |= 0x8000000000000002uLL;
        break;
      }
    }
    ExFreePoolWithTag((PVOID)P, 0x67655256u);
  }
}
