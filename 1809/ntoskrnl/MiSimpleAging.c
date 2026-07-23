/*
 * XREFs of MiSimpleAging @ 0x1401312D0
 * Callers:
 *     MiReduceWs @ 0x140130E6C (MiReduceWs.c)
 * Callees:
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiGenerateRandomPte @ 0x1401311EC (MiGenerateRandomPte.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiSimpleAging(__int64 a1, char a2)
{
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  char v10; // r11
  unsigned __int64 RandomPte; // rax
  _QWORD v13[22]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v14[32]; // [rsp+D0h] [rbp-30h] BYREF
  int v15; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v16; // [rsp+1D4h] [rbp+D4h]
  __int64 v17; // [rsp+1D8h] [rbp+D8h]
  __int64 v18; // [rsp+1E0h] [rbp+E0h]
  __int64 v19; // [rsp+1E8h] [rbp+E8h]
  _DWORD v20[68]; // [rsp+290h] [rbp+190h] BYREF

  memset(v14, 0, sizeof(v14));
  *(_QWORD *)&v4 = memset(v13, 0, sizeof(v13));
  if ( (*(_BYTE *)(a1 + 184) & 0x40) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 136);
    v4 = *(unsigned __int64 *)(a1 + 152) * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
    if ( v5 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      v6 = *(_QWORD *)(a1 + 40);
      v4 = v5 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL;
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
      if ( v7 + v6 >= (*((_QWORD *)&v4 + 1) & 0xFFFFFFFFFFFFFFFCuLL) && v5 - v7 - v6 < 0x400 )
      {
        v8 = v6 >> 5;
        v17 = 20LL;
        if ( v8 < 8 )
          v8 = 8LL;
        v14[6] = v8;
        v15 = MiTbFlushType(a1);
        v14[7] = &v15;
        v16 = v9;
        v18 = v9;
        v19 = v9;
        if ( (v10 & 7) == 0 && *(_QWORD *)(a1 + 576) != v9 )
        {
          v20[0] = v9;
          v14[31] = v20;
          v20[1] = 32;
        }
        LODWORD(v14[0]) |= 4u;
        v13[21] = v14;
        v13[3] = a1;
        BYTE4(v13[0]) = a2;
        RandomPte = MiGenerateRandomPte((__int64)v13);
        v13[5] = -1LL;
        v13[7] = RandomPte;
        v13[19] = MiSimpleAgePte;
        v13[20] = MiSimpleAgeWorkingSetTail;
        LODWORD(v13[0]) = 6;
        *(_QWORD *)&v4 = MiWalkPageTables((int *)v13);
      }
    }
  }
  return v4;
}
