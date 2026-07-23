/*
 * XREFs of MiExpandVadBitMap @ 0x14067AE8C
 * Callers:
 *     MiFindEmptyAddressRange @ 0x1405F3500 (MiFindEmptyAddressRange.c)
 *     MiInitializeVadBitMap @ 0x14067ADA0 (MiInitializeVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x14067AFD0 (MiUpdateVadBits.c)
 *     MiExpandVadBitMapDown @ 0x140859C74 (MiExpandVadBitMapDown.c)
 */

__int64 __fastcall MiExpandVadBitMap(int *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int64 v7; // r12
  int v8; // r15d
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  unsigned int v12; // r8d
  int v13; // edx
  unsigned int v14; // r15d
  unsigned int v15; // ecx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v6 = (unsigned int)*a1;
  v7 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  v8 = v6 + 8 * (a1[2] - qword_14043B5E8);
  if ( a2 > a1[7] - v8 + 1 )
    return MiExpandVadBitMapDown(a1, a2);
  v9 = *((_QWORD *)a1 + 1);
  v10 = v9 + ((unsigned __int64)(unsigned int)v6 >> 3);
  v11 = (v6 + 8 * (v9 - qword_14043B5E8)) << 16;
  if ( (int)MiMakeHyperRangeAccessible(v10, v9 + ((unsigned __int64)((unsigned int)v6 + a2 - 1) >> 3), &v17, a4) < 0 )
    return 0LL;
  *(_DWORD *)(v7 + 220) += v17;
  v12 = ((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) >> 12) + (((8 * ((a2 >> 6) + ((a2 & 0x3F) != 0))) & 0xFFF) != 0);
  v13 = (v12 << 15) + *a1;
  v14 = (v12 << 15) + v8;
  *a1 = v13;
  v15 = a1[7];
  if ( v14 > v15 + 1 )
    *a1 = v15 - v14 + v13 + 1;
  if ( v10 == qword_14043B5E8 )
  {
    **((_DWORD **)a1 + 1) |= 1u;
    if ( (_DWORD)v6 )
      a1[4] = 1;
  }
  MiUpdateVadBits(v11, v11 + ((unsigned __int64)v12 << 31));
  return 1LL;
}
