/*
 * XREFs of CmpInitializeLightWeightTransactionType @ 0x140760AE4
 * Callers:
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 */

__int64 CmpInitializeLightWeightTransactionType()
{
  __int128 v1; // [rsp+30h] [rbp-39h]
  __int128 v2[8]; // [rsp+40h] [rbp-29h] BYREF

  *(_QWORD *)&v1 = 0x12003E00120001LL;
  *((_QWORD *)&v1 + 1) = 0x1F003F00120018LL;
  memset(v2, 0, 0x78uLL);
  v2[3] = 0uLL;
  LOWORD(v2[0]) = 120;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xE3 | 0xC;
  *(_QWORD *)&v2[4] = CmpCloseLightWeightTransaction;
  *((_QWORD *)&v2[4] + 1) = CmpDeleteLightWeightTransaction;
  DWORD2(v2[0]) = 48;
  *(__int128 *)((char *)v2 + 12) = v1;
  HIDWORD(v2[1]) = 2031679;
  *(_QWORD *)((char *)&v2[2] + 4) = 0x1800000001LL;
  return ObCreateObjectTypeEx(&CmpTransactionTypeNameString, v2, 0LL, 0LL, &CmRegistryTransactionType);
}
