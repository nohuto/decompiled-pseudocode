/*
 * XREFs of InitializePerfOptions @ 0x1C00096C0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
 * Callees:
 *     memset @ 0x1C0005400 (memset.c)
 */

char __fastcall InitializePerfOptions(__int64 a1)
{
  bool v1; // zf
  int v4; // esi
  int v5; // eax
  _QWORD v6[5]; // [rsp+20h] [rbp-30h] BYREF

  v1 = *(_BYTE *)(a1 + 16) == 0;
  memset(&v6[1], 0, 32);
  if ( !v1 )
    return 1;
  v6[0] = 0x2800000005LL;
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 1LL)
    || (v6[1] & 1) == 0
    || (v6[1] & 2) == 0
    || (v6[1] & 4) == 0
    || (v6[1] & 8) == 0 )
  {
    return 0;
  }
  if ( (v6[1] & 0x40) == 0 )
    *(_DWORD *)(a1 + 52) &= ~8u;
  v4 = *(_DWORD *)(a1 + 52);
  memset(v6, 0, sizeof(v6));
  v5 = 15;
  v6[0] = 0x2800000005LL;
  if ( (v4 & 8) != 0 )
    v5 = 79;
  LODWORD(v6[1]) = v5;
  if ( *(_WORD *)(a1 + 240) <= 1u )
  {
    v6[2] = 0LL;
  }
  else
  {
    HIDWORD(v6[2]) = *(unsigned __int16 *)(a1 + 274);
    LODWORD(v6[2]) = 1;
  }
  HIDWORD(v6[1]) = *(unsigned __int16 *)(a1 + 202);
  v6[4] = *(_QWORD *)(a1 + 256);
  if ( (unsigned int)StorPortExtendedFunction(14LL, a1, 0LL) )
    return 0;
  *(_DWORD *)(a1 + 212) = v6[3];
  return 1;
}
