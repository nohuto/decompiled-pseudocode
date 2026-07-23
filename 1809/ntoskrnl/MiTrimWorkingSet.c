/*
 * XREFs of MiTrimWorkingSet @ 0x140130F08
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MiReduceWs @ 0x140130E6C (MiReduceWs.c)
 *     MiForcedTrim @ 0x14013F310 (MiForcedTrim.c)
 * Callees:
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiTbFlushType @ 0x1400EDC24 (MiTbFlushType.c)
 *     MiLogTrimWs @ 0x140131118 (MiLogTrimWs.c)
 *     MiGenerateRandomPte @ 0x1401311EC (MiGenerateRandomPte.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiTrimWorkingSet(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rdx
  int v14; // r11d
  bool v15; // zf
  __int64 *v16; // r10
  __int64 v17; // rcx
  _QWORD *v18; // r8
  __int64 v19; // r9
  __int64 RandomPte; // rcx
  __int64 v21; // rax
  _QWORD v23[22]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v24[52]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v25[68]; // [rsp+280h] [rbp+180h] BYREF

  v6 = a4;
  memset(v24, 0, 0x198uLL);
  memset(v23, 0, sizeof(v23));
  v9 = v6 & 0xF;
  LODWORD(v24[0]) = v9;
  if ( (a5 & 2) != 0 )
  {
    v9 |= 0x20u;
    LODWORD(v24[0]) = v9;
  }
  if ( (a5 & 4) != 0 )
  {
    v9 |= 0x40u;
    LODWORD(v24[0]) = v9;
  }
  if ( (a5 & 1) != 0 )
  {
    v9 |= 0x80u;
    LODWORD(v24[0]) = v9;
  }
  if ( (a5 & 8) != 0 )
  {
    v9 |= 0x100u;
    LODWORD(v24[0]) = v9;
  }
  if ( (a5 & 0x40) != 0 )
  {
    v9 |= 0x1000u;
    LODWORD(v24[0]) = v9;
  }
  v10 = v9;
  if ( (a5 & 0x10) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 136);
    v9 |= 0x400u;
    LODWORD(v24[0]) = v9;
    v24[6] = v11;
    if ( a2 > v11 )
      a2 = v11;
    if ( (a5 & 0x20) != 0 )
    {
      v9 = v10 | 0xC00;
      LODWORD(v24[0]) = v10 | 0xC00;
    }
  }
  if ( dword_14043B9A8 )
    LODWORD(v24[0]) = v9 | 0x10;
  v24[8] = 20LL;
  v12 = MiTbFlushType(a1);
  v15 = (*(_BYTE *)(a1 + 184) & 7) == 0;
  LODWORD(v24[7]) = v12;
  WORD2(v24[7]) = 4;
  v24[9] = 0LL;
  v24[10] = 0LL;
  if ( v15 && *(_QWORD *)(a1 + 576) )
  {
    v25[0] = 0;
    v24[30] = v25;
    v25[1] = 32;
  }
  v16 = *(__int64 **)(a1 + 16);
  v17 = 0LL;
  if ( (unsigned int)v6 >= 8 )
    return 0LL;
  v18 = (_QWORD *)(a1 + 8 * (v6 + 5));
  v19 = (unsigned int)(8 - v6);
  do
  {
    v17 += *v18++;
    --v19;
  }
  while ( v19 );
  v24[5] = v17;
  if ( !v17 )
    return 0LL;
  v24[1] = a2;
  HIBYTE(v23[0]) = v24[0] & 0xF;
  v23[21] = v24;
  v23[19] = MiTrimPte;
  v23[20] = MiTrimWorkingSetTail;
  LODWORD(v23[0]) = 22;
  v23[3] = a1;
  BYTE4(v23[0]) = a3;
  if ( ((unsigned int)v13 & v14) != 0 )
  {
    RandomPte = MiGenerateRandomPte(v23, v13, v18, 0LL);
    v23[7] = RandomPte;
  }
  else
  {
    RandomPte = *v16;
    v23[7] = *v16;
  }
  v21 = v23[5];
  if ( !RandomPte )
    v21 = -1LL;
  v23[5] = v21;
  MiWalkPageTables((int *)v23);
  MiLogTrimWs(a1, v24[4], v24[2], v6, a5);
  return v24[2];
}
