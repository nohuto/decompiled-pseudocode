/*
 * XREFs of MiInitializePteInfo @ 0x1409B84C8
 * Callers:
 *     MiInitializeSystemSpaceMap @ 0x1407167FC (MiInitializeSystemSpaceMap.c)
 *     MiInitializeKernelStacks @ 0x1409B6C54 (MiInitializeKernelStacks.c)
 *     MiInitializeSystemPtes @ 0x1409B78BC (MiInitializeSystemPtes.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1407169C0 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiInitializePteInfo(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbp
  unsigned __int64 v11; // r10
  ULONG_PTR v14; // rax
  int v15; // eax
  __int64 result; // rax

  LODWORD(v7) = 0;
  v8 = 0LL;
  v9 = a6 >> 12;
  v11 = a3;
  if ( !a3 )
  {
    v7 = ((((v9 + a7 - 1LL) / a7 + 7) >> 3) + 4095) >> 12;
    v14 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v7);
    v8 = v14;
    if ( !v14 )
      return 0LL;
    v11 = (__int64)(v14 << 25) >> 16;
  }
  if ( !(unsigned int)MiInitializeDynamicBitmap((_QWORD *)a1, v11, v9 / a7, a4) )
  {
    if ( v8 )
      MiReleasePtes((__int64)&qword_14043C060, v8, v7);
    return 0LL;
  }
  *(_DWORD *)(a1 + 24) = 2;
  v15 = *(_DWORD *)(a1 + 24);
  if ( a7 == 16 )
    v15 = 6;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 24) = v15;
  *(_QWORD *)(a1 + 32) = a1 + 40;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)a1 = 0LL;
  result = 1LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 16) = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
