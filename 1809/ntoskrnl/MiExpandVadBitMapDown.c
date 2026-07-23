/*
 * XREFs of MiExpandVadBitMapDown @ 0x140859C74
 * Callers:
 *     MiExpandVadBitMap @ 0x14067AE8C (MiExpandVadBitMap.c)
 * Callees:
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiUpdateVadBits @ 0x14067AFD0 (MiUpdateVadBits.c)
 */

__int64 __fastcall MiExpandVadBitMapDown(_DWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // ebp
  _DWORD *v9; // rsi
  int v10; // ebx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v5 = 8 * (a1[2] - qword_14043B5E8);
  v6 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode;
  if ( a2 > v5 )
    return 0LL;
  v7 = (a2 >> 6) + ((a2 & 0x3F) != 0);
  v8 = ((unsigned int)(8 * v7) >> 12) + (((8 * v7) & 0xFFF) != 0);
  v9 = (_DWORD *)(*((_QWORD *)a1 + 1) - (v8 << 12));
  if ( (int)MiMakeHyperRangeAccessible((unsigned __int64)v9, *((_QWORD *)a1 + 1) - 1LL, &v12, a4) < 0 )
    return 0LL;
  *(_DWORD *)(v6 + 220) += v12;
  *a1 += v8 << 15;
  v10 = v5 - (v8 << 15);
  *((_QWORD *)a1 + 1) = v9;
  if ( v9 == (_DWORD *)qword_14043B5E8 )
  {
    *v9 |= 1u;
    v10 = 1;
  }
  a1[5] = 0;
  a1[4] = v10;
  a1[6] = v10;
  MiUpdateVadBits(
    (*((_QWORD *)a1 + 1) - qword_14043B5E8) << 19,
    ((*((_QWORD *)a1 + 1) - qword_14043B5E8) << 19) + ((unsigned __int64)v8 << 31));
  return 1LL;
}
