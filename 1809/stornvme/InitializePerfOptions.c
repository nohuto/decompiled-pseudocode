/*
 * XREFs of InitializePerfOptions @ 0x1C000C200
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000DC08 (NVMeControllerInitPart2.c)
 * Callees:
 *     memset @ 0x1C0007F80 (memset.c)
 */

char __fastcall InitializePerfOptions(__int64 a1)
{
  int v3; // esi
  int v4; // eax
  _QWORD v5[6]; // [rsp+20h] [rbp-30h] BYREF

  memset(v5, 0, 0x28uLL);
  if ( *(_BYTE *)(a1 + 16) )
    return 1;
  v5[0] = 0x2800000005LL;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 1LL, v5)
    || (v5[1] & 1) == 0
    || (v5[1] & 2) == 0
    || (v5[1] & 4) == 0
    || (v5[1] & 8) == 0 )
  {
    return 0;
  }
  if ( (v5[1] & 0x40) == 0 )
    *(_DWORD *)(a1 + 52) &= ~8u;
  v3 = *(_DWORD *)(a1 + 52);
  memset(v5, 0, 0x28uLL);
  v4 = 15;
  v5[0] = 0x2800000005LL;
  if ( (v3 & 8) != 0 )
    v4 = 79;
  LODWORD(v5[1]) = v4;
  if ( *(_WORD *)(a1 + 232) <= 1u )
  {
    v5[2] = 0LL;
  }
  else
  {
    HIDWORD(v5[2]) = *(unsigned __int16 *)(a1 + 266);
    LODWORD(v5[2]) = 1;
  }
  HIDWORD(v5[1]) = *(unsigned __int16 *)(a1 + 194);
  v5[4] = *(_QWORD *)(a1 + 248);
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 0LL, v5) )
    return 0;
  *(_DWORD *)(a1 + 204) = v5[3];
  return 1;
}
