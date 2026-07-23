/*
 * XREFs of CcSetVacbLargeOffset @ 0x1400224B0
 * Callers:
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400223FC (CcAdjustVacbLevelLockCount.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     SetVacb @ 0x14026B264 (SetVacb.c)
 * Callees:
 *     VacbLevelReference @ 0x140022BAC (VacbLevelReference.c)
 *     CcGetBcbListHeadLargeOffset @ 0x1400AE0A0 (CcGetBcbListHeadLargeOffset.c)
 *     CcFreeUnusedVacbLevels @ 0x14012CF4C (CcFreeUnusedVacbLevels.c)
 *     CcAllocateVacbLevels @ 0x14012D018 (CcAllocateVacbLevels.c)
 *     CcAllocateVacbLevel @ 0x14012D0BC (CcAllocateVacbLevel.c)
 *     CcDeallocateVacbLevel @ 0x14012D13C (CcDeallocateVacbLevel.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall CcSetVacbLargeOffset(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  _QWORD *v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // ecx
  char v12; // si
  unsigned int v13; // r10d
  __int64 v14; // rdx
  _QWORD *VacbLevel; // r15
  __int64 v16; // rax
  _DWORD *v17; // rax
  _QWORD *v18; // r9
  int v19; // r10d
  _DWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // r10d
  unsigned int v27; // eax
  int v28; // eax
  BOOL v29; // r15d
  _QWORD *v30; // r9
  _DWORD *v31; // rax
  __int64 BcbListHeadLargeOffset; // rax
  __int64 i; // rcx
  _QWORD *v34; // r10
  __int64 v35; // rcx
  _QWORD *v36; // rax
  BOOL v37; // [rsp+24h] [rbp-E4h]
  unsigned int v38; // [rsp+28h] [rbp-E0h]
  _QWORD *v39; // [rsp+30h] [rbp-D8h]
  _QWORD v40[3]; // [rsp+38h] [rbp-D0h] BYREF
  int v41; // [rsp+50h] [rbp-B8h]
  __int64 v42; // [rsp+58h] [rbp-B0h]
  _QWORD *v43; // [rsp+60h] [rbp-A8h]
  _DWORD v44[22]; // [rsp+68h] [rbp-A0h]

  v42 = a2;
  v39 = a4;
  v5 = 0LL;
  v6 = a2;
  v8 = *(_QWORD **)(a1 + 88);
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 32);
  v11 = 25;
  do
  {
    v12 = v11;
    v11 += 7;
    ++v9;
  }
  while ( v10 > 1LL << v11 );
  do
  {
    v38 = v9;
    v13 = v9;
    v14 = v6 >> v12;
    --v9;
    if ( (unsigned int)v5 >= 7 )
      return 0;
    VacbLevel = (_QWORD *)v8[(unsigned int)v14];
    v44[v5] = v14;
    *(_QWORD *)&v44[2 * v5 + 8] = v8;
    v5 = (unsigned int)(v5 + 1);
    v43 = &v8[(unsigned int)v14];
    if ( !VacbLevel )
    {
      v28 = *(_DWORD *)(a1 + 152) & 0x200;
      v29 = v28 && !v9;
      v37 = v29;
      if ( !a4 )
      {
        v40[2] = 0LL;
        v40[1] = v40;
        v41 = 0;
        v40[0] = v40;
        LOBYTE(v14) = v28 != 0;
        if ( !(unsigned __int8)CcAllocateVacbLevels(v13, v14, v40) )
          return 0;
        a4 = v40;
        v39 = v40;
      }
      VacbLevel = (_QWORD *)CcAllocateVacbLevel(a4, v29);
      if ( v37 )
      {
        BcbListHeadLargeOffset = CcGetBcbListHeadLargeOffset(a1, v42, 0LL);
        for ( i = *(_QWORD *)(BcbListHeadLargeOffset + 8); *(_WORD *)(i - 16) == 765; i = *(_QWORD *)(i + 8) )
          BcbListHeadLargeOffset = i;
        v34 = *(_QWORD **)(BcbListHeadLargeOffset + 8);
        v30 = VacbLevel + 128;
        *(_QWORD *)(BcbListHeadLargeOffset + 8) = VacbLevel + 128;
        VacbLevel[128] = BcbListHeadLargeOffset;
        VacbLevel[129] = VacbLevel + 130;
        VacbLevel[130] = VacbLevel + 128;
        VacbLevel[131] = VacbLevel + 132;
        VacbLevel[132] = VacbLevel + 130;
        VacbLevel[133] = VacbLevel + 134;
        VacbLevel[134] = VacbLevel + 132;
        VacbLevel[135] = VacbLevel + 136;
        VacbLevel[136] = VacbLevel + 134;
        VacbLevel[137] = VacbLevel + 138;
        VacbLevel[138] = VacbLevel + 136;
        VacbLevel[139] = VacbLevel + 140;
        VacbLevel[140] = VacbLevel + 138;
        VacbLevel[141] = VacbLevel + 142;
        VacbLevel[142] = VacbLevel + 140;
        VacbLevel[143] = VacbLevel + 144;
        VacbLevel[144] = VacbLevel + 142;
        VacbLevel[145] = VacbLevel + 146;
        VacbLevel[146] = VacbLevel + 144;
        VacbLevel[147] = VacbLevel + 148;
        VacbLevel[148] = VacbLevel + 146;
        VacbLevel[149] = VacbLevel + 150;
        VacbLevel[150] = VacbLevel + 148;
        VacbLevel[151] = VacbLevel + 152;
        VacbLevel[152] = VacbLevel + 150;
        VacbLevel[153] = VacbLevel + 154;
        VacbLevel[154] = VacbLevel + 152;
        VacbLevel[155] = VacbLevel + 156;
        VacbLevel[156] = VacbLevel + 154;
        VacbLevel[157] = VacbLevel + 158;
        VacbLevel[158] = VacbLevel + 156;
        VacbLevel[159] = VacbLevel + 160;
        VacbLevel[160] = VacbLevel + 158;
        VacbLevel[161] = VacbLevel + 162;
        VacbLevel[162] = VacbLevel + 160;
        VacbLevel[163] = VacbLevel + 164;
        VacbLevel[164] = VacbLevel + 162;
        VacbLevel[165] = VacbLevel + 166;
        VacbLevel[166] = VacbLevel + 164;
        VacbLevel[167] = VacbLevel + 168;
        VacbLevel[168] = VacbLevel + 166;
        VacbLevel[169] = VacbLevel + 170;
        VacbLevel[170] = VacbLevel + 168;
        VacbLevel[171] = VacbLevel + 172;
        VacbLevel[172] = VacbLevel + 170;
        VacbLevel[173] = VacbLevel + 174;
        VacbLevel[174] = VacbLevel + 172;
        VacbLevel[175] = VacbLevel + 176;
        VacbLevel[176] = VacbLevel + 174;
        VacbLevel[177] = VacbLevel + 178;
        VacbLevel[178] = VacbLevel + 176;
        VacbLevel[179] = VacbLevel + 180;
        VacbLevel[180] = VacbLevel + 178;
        VacbLevel[181] = VacbLevel + 182;
        VacbLevel[182] = VacbLevel + 180;
        VacbLevel[183] = VacbLevel + 184;
        VacbLevel[184] = VacbLevel + 182;
        VacbLevel[185] = VacbLevel + 186;
        VacbLevel[186] = VacbLevel + 184;
        VacbLevel[187] = VacbLevel + 188;
        VacbLevel[188] = VacbLevel + 186;
        VacbLevel[189] = VacbLevel + 190;
        VacbLevel[190] = VacbLevel + 188;
        VacbLevel[191] = VacbLevel + 192;
        VacbLevel[192] = VacbLevel + 190;
        VacbLevel[193] = VacbLevel + 194;
        VacbLevel[194] = VacbLevel + 192;
        VacbLevel[195] = VacbLevel + 196;
        VacbLevel[196] = VacbLevel + 194;
        VacbLevel[197] = VacbLevel + 198;
        VacbLevel[198] = VacbLevel + 196;
        VacbLevel[199] = VacbLevel + 200;
        VacbLevel[200] = VacbLevel + 198;
        VacbLevel[201] = VacbLevel + 202;
        VacbLevel[202] = VacbLevel + 200;
        VacbLevel[203] = VacbLevel + 204;
        VacbLevel[204] = VacbLevel + 202;
        VacbLevel[205] = VacbLevel + 206;
        VacbLevel[206] = VacbLevel + 204;
        VacbLevel[207] = VacbLevel + 208;
        VacbLevel[208] = VacbLevel + 206;
        VacbLevel[209] = VacbLevel + 210;
        VacbLevel[210] = VacbLevel + 208;
        VacbLevel[211] = VacbLevel + 212;
        VacbLevel[212] = VacbLevel + 210;
        VacbLevel[213] = VacbLevel + 214;
        VacbLevel[214] = VacbLevel + 212;
        VacbLevel[215] = VacbLevel + 216;
        VacbLevel[216] = VacbLevel + 214;
        VacbLevel[217] = VacbLevel + 218;
        VacbLevel[218] = VacbLevel + 216;
        VacbLevel[219] = VacbLevel + 220;
        VacbLevel[220] = VacbLevel + 218;
        VacbLevel[221] = VacbLevel + 222;
        VacbLevel[222] = VacbLevel + 220;
        VacbLevel[223] = VacbLevel + 224;
        VacbLevel[224] = VacbLevel + 222;
        VacbLevel[225] = VacbLevel + 226;
        VacbLevel[226] = VacbLevel + 224;
        VacbLevel[227] = VacbLevel + 228;
        VacbLevel[228] = VacbLevel + 226;
        VacbLevel[229] = VacbLevel + 230;
        VacbLevel[230] = VacbLevel + 228;
        VacbLevel[231] = VacbLevel + 232;
        VacbLevel[232] = VacbLevel + 230;
        VacbLevel[233] = VacbLevel + 234;
        VacbLevel[234] = VacbLevel + 232;
        VacbLevel[235] = VacbLevel + 236;
        VacbLevel[236] = VacbLevel + 234;
        VacbLevel[237] = VacbLevel + 238;
        VacbLevel[238] = VacbLevel + 236;
        VacbLevel[239] = VacbLevel + 240;
        VacbLevel[240] = VacbLevel + 238;
        VacbLevel[241] = VacbLevel + 242;
        VacbLevel[242] = VacbLevel + 240;
        VacbLevel[243] = VacbLevel + 244;
        VacbLevel[244] = VacbLevel + 242;
        VacbLevel[245] = VacbLevel + 246;
        VacbLevel[246] = VacbLevel + 244;
        VacbLevel[247] = VacbLevel + 248;
        VacbLevel[248] = VacbLevel + 246;
        VacbLevel[249] = VacbLevel + 250;
        VacbLevel[250] = VacbLevel + 248;
        VacbLevel[251] = VacbLevel + 252;
        VacbLevel[252] = VacbLevel + 250;
        VacbLevel[253] = VacbLevel + 254;
        VacbLevel[254] = VacbLevel + 252;
        VacbLevel[255] = v34;
        *v34 = VacbLevel + 254;
      }
      *v43 = VacbLevel;
      v31 = (_DWORD *)VacbLevelReference(a1, v8, v38, v30);
      a4 = v39;
      ++*v31;
    }
    v16 = 1LL << v12;
    v12 -= 7;
    v8 = VacbLevel;
    v6 &= v16 - 1;
  }
  while ( v9 );
  if ( a3 >= 0xFFFFFFFFFFFFFFFEuLL )
  {
    if ( a3 == -2LL )
      goto LABEL_14;
  }
  else
  {
    VacbLevel[(unsigned int)(v6 >> v12)] = a3;
  }
  if ( !a3 )
  {
LABEL_14:
    while ( 1 )
    {
      v21 = (_DWORD *)VacbLevelReference(a1, v8, v9, a4);
      if ( v26 )
        --v21[1];
      else
        --*v21;
      if ( *(_QWORD *)VacbLevelReference(v23, v22, v24, v25) || !(_DWORD)v5 )
        break;
      v27 = v9;
      v5 = (unsigned int)(v5 - 1);
      ++v9;
      if ( !v27 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
      {
        v35 = v8[128];
        v36 = (_QWORD *)v8[255];
        *(_QWORD *)(v35 + 8) = v36;
        *v36 = v35;
      }
      CcDeallocateVacbLevel(v8);
      v8 = *(_QWORD **)&v44[2 * v5 + 8];
      v8[v44[v5]] = 0LL;
    }
    v18 = v39;
    goto LABEL_11;
  }
  v17 = (_DWORD *)VacbLevelReference(a1, VacbLevel, 0LL, a4);
  if ( v19 )
    ++v17[1];
  else
    ++*v17;
LABEL_11:
  if ( v18 == v40 )
    CcFreeUnusedVacbLevels(v18);
  return 1;
}
