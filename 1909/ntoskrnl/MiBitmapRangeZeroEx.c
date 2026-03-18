/*
 * XREFs of MiBitmapRangeZeroEx @ 0x1401183B0
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x14005F0B0 (MiFillPteHierarchy.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MiBitmapRangeZeroEx(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v6; // esi
  unsigned int v7; // r11d
  __int64 v8; // rbx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 i; // r10
  int v13; // r11d
  __int64 result; // rax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  memset(v19, 0, 0x20uLL);
  v6 = 0;
  MiFillPteHierarchy(a2 / 8 + v3, v19);
  v8 = v7;
  while ( 1 )
  {
    v9 = v19[--v8];
    if ( MiPteInShadowRange(v9)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v10 & 1) != 0
      && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v16 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v11 >> 3) & 0x1FF));
        v17 = v10 | 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = v10;
        v10 = v17;
        if ( (v16 & 0x42) != 0 )
          v10 = v17 | 0x42;
      }
    }
    if ( !v10 )
      break;
    if ( (v10 & 0x81) == 0x81 )
      i = -1LL;
    if ( i == -1 )
      goto LABEL_10;
    if ( !v8 )
      goto LABEL_11;
  }
  v6 = 1;
LABEL_10:
  for ( i = (__int64)((v11 + 8) << 25) >> 16; v13; --v13 )
    i = i << 25 >> 16;
LABEL_11:
  if ( !i )
    i = (signed __int64)((v19[0] << 25) + 0x10000000) >> 16;
  result = v6;
  *a3 = 8 * (i - v3);
  return result;
}
