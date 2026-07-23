/*
 * XREFs of MiBitmapRangeZero @ 0x1400973B0
 * Callers:
 *     MiReturnPageTablePageCommitment @ 0x1405ED380 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiFillPteHierarchy @ 0x140099020 (MiFillPteHierarchy.c)
 */

__int64 __fastcall MiBitmapRangeZero(__int64 a1, int a2, int *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  unsigned int v6; // r11d
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // r9
  __int64 i; // r10
  int v12; // r11d
  int v13; // r10d
  __int64 result; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0;
  MiFillPteHierarchy(v3 + a2 / 8, v19);
  v7 = v6;
  while ( 1 )
  {
    v8 = v19[--v7];
    if ( MiPteInShadowRange(v8)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v9 & 1) != 0
      && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
    {
      v15 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 8 * ((v10 >> 3) & 0x1FF));
        v17 = v9 | 0x20;
        if ( (v16 & 0x20) == 0 )
          v17 = v9;
        v9 = v17;
        if ( (v16 & 0x42) != 0 )
          v9 = v17 | 0x42;
      }
    }
    if ( !v9 )
      break;
    if ( (v9 & 0x81) == 0x81 )
      i = -1LL;
    if ( i == -1 )
      goto LABEL_10;
    if ( !v7 )
      goto LABEL_11;
  }
  v4 = 1;
LABEL_10:
  for ( i = (__int64)((v10 + 8) << 25) >> 16; v12; --v12 )
    i = i << 25 >> 16;
LABEL_11:
  if ( !i )
    i = ((v19[0] << 25) + 0x10000000LL) >> 16;
  if ( (unsigned __int64)(8 * (i - v3)) >= 0x100000000LL )
    v13 = -1;
  else
    v13 = 8 * (i - v3);
  result = v4;
  *a3 = v13;
  return result;
}
