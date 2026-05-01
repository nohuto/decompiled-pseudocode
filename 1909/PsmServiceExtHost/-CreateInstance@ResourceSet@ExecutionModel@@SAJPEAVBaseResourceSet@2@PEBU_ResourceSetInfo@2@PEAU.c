/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@_KPEAPEAV12@@Z @ 0x18001ED40
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001FDB0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18000AC24 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800375D0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     CempHeapFreeForHashTable @ 0x18003E460 (CempHeapFreeForHashTable.c)
 *     ??2@YAPEAX_K@Z @ 0x180048E58 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180062700 (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 v12; // rbx
  _DWORD *v15; // rsi
  __int64 v16; // r12
  char *Heap; // r14
  _DWORD *v18; // rax
  _DWORD *v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rbp
  unsigned int v22; // r8d
  unsigned __int64 v23; // rsi
  _QWORD *v24; // rdx
  NTSTATUS v25; // edi
  int v26; // edi
  _DWORD *v27; // rcx
  __int128 *v28; // rax
  __int128 v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdi
  void (__fastcall *v33)(_DWORD *); // rax
  _DWORD *v34; // rdi
  __int64 v35; // rcx
  _QWORD *v36; // rax
  _QWORD *v37; // r9
  _QWORD *v38; // rdi
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  struct _PEB *v42; // rcx
  char *v43; // r10
  char v44; // cl
  unsigned __int64 v45; // rcx
  unsigned int v46; // r12d
  __int64 v47; // r11
  _QWORD **v48; // r9
  _QWORD *v49; // r8
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // r8

  v12 = a3;
  v15 = 0LL;
  v16 = 2LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  if ( !Heap )
  {
    v25 = -1073741801;
    goto LABEL_9;
  }
  *((_QWORD *)Heap + 6) = 0LL;
  memset_0(Heap + 64, 0, 0x20uLL);
  *(_QWORD *)Heap = 0LL;
  *((_QWORD *)Heap + 3) = 0LL;
  *((_QWORD *)Heap + 4) = a10;
  *((_QWORD *)Heap + 5) = 1LL;
  *((_QWORD *)Heap + 2) = 1LL;
  *((_QWORD *)Heap + 1) = HIBYTE(a10)
                        + 37
                        * (BYTE6(a10)
                         + 37
                         * (BYTE5(a10)
                          + 37
                          * (BYTE4(a10)
                           + 37
                           * (BYTE3(a10)
                            + 37 * (BYTE2(a10) + 37 * (BYTE1(a10) + 37 * ((unsigned __int8)a10 + 11623883LL)))))));
  *((_QWORD *)Heap + 7) = a9;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v12) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)Heap + 8) = v12;
  if ( a4 )
  {
    v25 = RmpSystemDuplicateHandle(a4, 1u, (PHANDLE)Heap + 9);
    if ( v25 >= 0 )
      v25 = 0;
    if ( v25 < 0 )
      goto LABEL_56;
  }
  v18 = operator new(0x6F0uLL);
  v19 = v18;
  if ( !v18 )
  {
    v12 = a3;
    v25 = -1073741801;
LABEL_56:
    RmpObjectRelease(Heap);
    goto LABEL_9;
  }
  v18[2] = 0;
  *(_QWORD *)v18 = &ExecutionModel::BaseResourceSet::`vftable';
  *((_WORD *)v18 + 6) = 0;
  *((_QWORD *)v18 + 3) = 0LL;
  v18[8] = -1;
  v18[9] = 1;
  *((_QWORD *)v18 + 5) = v18 + 10;
  *((_QWORD *)v18 + 6) = v18 + 10;
  *((_QWORD *)v18 + 7) = 0LL;
  v18[18] = -1;
  *((_QWORD *)v18 + 10) = 0LL;
  v18[22] = 101;
  *((_WORD *)v18 + 46) = 0;
  v18[24] = -1;
  *((_QWORD *)v18 + 13) = 0LL;
  v18[28] = 101;
  *((_WORD *)v18 + 58) = 0;
  v18[30] = -1;
  *((_QWORD *)v18 + 16) = 0LL;
  v18[34] = 101;
  *((_WORD *)v18 + 70) = 0;
  v18[36] = -1;
  *((_QWORD *)v18 + 19) = 0LL;
  v18[40] = 101;
  *((_WORD *)v18 + 82) = 0;
  v18[42] = -1;
  *((_QWORD *)v18 + 22) = 0LL;
  v18[46] = 101;
  *((_WORD *)v18 + 94) = 0;
  v18[48] = -1;
  *((_QWORD *)v18 + 25) = 0LL;
  v18[52] = 101;
  *((_WORD *)v18 + 106) = 0;
  v18[54] = -1;
  *((_QWORD *)v18 + 28) = 0LL;
  v18[58] = 101;
  *((_WORD *)v18 + 118) = 0;
  v18[60] = -1;
  *((_QWORD *)v18 + 31) = 0LL;
  v18[64] = 101;
  *((_WORD *)v18 + 130) = 0;
  v18[66] = -1;
  *((_QWORD *)v18 + 34) = 0LL;
  v18[70] = 101;
  *((_WORD *)v18 + 142) = 0;
  v18[72] = -1;
  *((_QWORD *)v18 + 37) = 0LL;
  v18[76] = 101;
  *((_WORD *)v18 + 154) = 0;
  v18[78] = -1;
  *((_QWORD *)v18 + 40) = 0LL;
  v18[82] = 101;
  *((_WORD *)v18 + 166) = 0;
  v18[84] = -1;
  *((_QWORD *)v18 + 43) = 0LL;
  v18[88] = 101;
  *((_WORD *)v18 + 178) = 0;
  v18[90] = -1;
  *((_QWORD *)v18 + 46) = 0LL;
  v18[94] = 101;
  *((_WORD *)v18 + 190) = 0;
  v18[96] = -1;
  *((_QWORD *)v18 + 49) = 0LL;
  v18[100] = 101;
  *((_WORD *)v18 + 202) = 0;
  v18[102] = -1;
  *((_QWORD *)v18 + 52) = 0LL;
  v18[106] = 101;
  *((_WORD *)v18 + 214) = 0;
  v18[108] = -1;
  *((_QWORD *)v18 + 55) = 0LL;
  v18[112] = 101;
  *((_WORD *)v18 + 226) = 0;
  v18[114] = -1;
  *((_QWORD *)v18 + 58) = 0LL;
  v18[118] = 101;
  *((_WORD *)v18 + 238) = 0;
  v18[120] = -1;
  *((_QWORD *)v18 + 61) = 0LL;
  v18[124] = 101;
  *((_WORD *)v18 + 250) = 0;
  v18[126] = -1;
  *((_QWORD *)v18 + 64) = 0LL;
  v18[130] = 101;
  *((_WORD *)v18 + 262) = 0;
  v18[132] = -1;
  *((_QWORD *)v18 + 67) = 0LL;
  v18[136] = 101;
  *((_WORD *)v18 + 274) = 0;
  v18[138] = -1;
  *((_QWORD *)v18 + 70) = 0LL;
  v18[142] = 101;
  *((_WORD *)v18 + 286) = 0;
  v18[144] = -1;
  *((_QWORD *)v18 + 73) = 0LL;
  v18[148] = 101;
  *((_WORD *)v18 + 298) = 0;
  v18[150] = -1;
  *((_QWORD *)v18 + 76) = 0LL;
  v18[154] = 101;
  *((_WORD *)v18 + 310) = 0;
  v18[156] = -1;
  *((_QWORD *)v18 + 79) = 0LL;
  v18[160] = 101;
  *((_WORD *)v18 + 322) = 0;
  v18[162] = -1;
  *((_QWORD *)v18 + 82) = 0LL;
  v18[166] = 101;
  *((_WORD *)v18 + 334) = 0;
  v18[168] = -1;
  *((_QWORD *)v18 + 85) = 0LL;
  v18[172] = 101;
  *((_WORD *)v18 + 346) = 0;
  v18[174] = -1;
  *((_QWORD *)v18 + 88) = 0LL;
  v18[178] = 101;
  *((_WORD *)v18 + 358) = 0;
  v18[180] = -1;
  *((_QWORD *)v18 + 91) = 0LL;
  v18[184] = 101;
  *((_WORD *)v18 + 370) = 0;
  v18[186] = -1;
  *((_QWORD *)v18 + 94) = 0LL;
  v18[190] = 101;
  *((_WORD *)v18 + 382) = 0;
  v18[192] = -1;
  *((_QWORD *)v18 + 97) = 0LL;
  v18[196] = 101;
  *((_WORD *)v18 + 394) = 0;
  v18[198] = -1;
  *((_QWORD *)v18 + 100) = 0LL;
  v18[202] = 101;
  *((_WORD *)v18 + 406) = 0;
  v18[204] = -1;
  *((_QWORD *)v18 + 103) = 0LL;
  v18[208] = 101;
  *((_WORD *)v18 + 418) = 0;
  v18[210] = -1;
  *((_QWORD *)v18 + 106) = 0LL;
  v18[214] = 101;
  *((_WORD *)v18 + 430) = 0;
  v18[216] = -1;
  *((_QWORD *)v18 + 109) = 0LL;
  v18[220] = 101;
  *((_WORD *)v18 + 442) = 0;
  v18[222] = -1;
  *((_QWORD *)v18 + 112) = 0LL;
  v18[226] = 101;
  *((_WORD *)v18 + 454) = 0;
  v18[228] = -1;
  *((_QWORD *)v18 + 115) = 0LL;
  v18[232] = 101;
  *((_WORD *)v18 + 466) = 0;
  v18[234] = -1;
  *((_QWORD *)v18 + 118) = 0LL;
  v18[238] = 101;
  *((_WORD *)v18 + 478) = 0;
  v18[240] = -1;
  *((_QWORD *)v18 + 121) = 0LL;
  v18[244] = 101;
  *((_WORD *)v18 + 490) = 0;
  v18[246] = -1;
  *((_QWORD *)v18 + 124) = 0LL;
  v18[250] = 101;
  *((_WORD *)v18 + 502) = 0;
  v18[252] = -1;
  *((_QWORD *)v18 + 127) = 0LL;
  v18[256] = 101;
  *((_WORD *)v18 + 514) = 0;
  v18[258] = -1;
  *((_QWORD *)v18 + 130) = 0LL;
  v18[262] = 101;
  *((_WORD *)v18 + 526) = 0;
  v18[264] = -1;
  *((_QWORD *)v18 + 133) = 0LL;
  v18[268] = 101;
  *((_WORD *)v18 + 538) = 0;
  v18[270] = -1;
  *((_QWORD *)v18 + 136) = 0LL;
  v18[274] = 101;
  *((_WORD *)v18 + 550) = 0;
  v18[276] = -1;
  *((_QWORD *)v18 + 139) = 0LL;
  v18[280] = 101;
  *((_WORD *)v18 + 562) = 0;
  v18[282] = -1;
  *((_QWORD *)v18 + 142) = 0LL;
  v18[286] = 101;
  *((_WORD *)v18 + 574) = 0;
  v18[288] = -1;
  *((_QWORD *)v18 + 145) = 0LL;
  v18[292] = 101;
  *((_WORD *)v18 + 586) = 0;
  v18[294] = -1;
  *((_QWORD *)v18 + 148) = 0LL;
  v18[298] = 101;
  *((_WORD *)v18 + 598) = 0;
  v18[300] = -1;
  *((_QWORD *)v18 + 151) = 0LL;
  v18[304] = 101;
  *((_WORD *)v18 + 610) = 0;
  v18[306] = -1;
  *((_QWORD *)v18 + 154) = 0LL;
  v18[310] = 101;
  *((_WORD *)v18 + 622) = 0;
  v18[312] = -1;
  *((_QWORD *)v18 + 157) = 0LL;
  v18[316] = 101;
  *((_WORD *)v18 + 634) = 0;
  *((_QWORD *)v18 + 159) = 0LL;
  *((_QWORD *)v18 + 160) = 0LL;
  v18[322] = -1;
  *(_QWORD *)v18 = &ExecutionModel::ResourceSet::`vftable';
  *((_QWORD *)v18 + 164) = 0LL;
  *((_QWORD *)v18 + 165) = 0LL;
  v18[332] = 2;
  v18[334] = -1;
  v18[335] = 0;
  v18[336] = 101;
  v18[337] = 32;
  v18[346] = 0;
  *((_QWORD *)v18 + 174) = 0LL;
  *((_QWORD *)v18 + 175) = 0LL;
  v18[352] = 0;
  *((_QWORD *)v18 + 178) = 0LL;
  v18[358] = 101;
  *((_WORD *)v18 + 718) = 0;
  *((_QWORD *)v18 + 181) = 0LL;
  v18[364] = 101;
  *((_WORD *)v18 + 730) = 0;
  *((_QWORD *)v18 + 184) = 0LL;
  v18[370] = 101;
  *((_WORD *)v18 + 742) = 0;
  v18[422] = 0;
  *((_QWORD *)v18 + 212) = 0LL;
  v18[360] = 1;
  v18[354] = 0;
  v18[366] = 2;
  v18[372] = 101;
  v18[373] = 101;
  v18[374] = 101;
  v18[375] = 101;
  v18[376] = 101;
  v18[377] = 101;
  v18[378] = 101;
  v18[379] = 101;
  v18[380] = 101;
  v18[381] = 101;
  v18[382] = 101;
  v18[383] = 101;
  v18[384] = 101;
  v18[385] = 101;
  v18[386] = 101;
  v18[387] = 101;
  v18[388] = 101;
  v18[389] = 101;
  v18[390] = 101;
  v18[391] = 101;
  v18[392] = 101;
  v18[393] = 101;
  v18[394] = 101;
  v18[395] = 101;
  v18[396] = 101;
  v18[397] = 101;
  v18[398] = 101;
  v18[399] = 101;
  v18[400] = 101;
  v18[401] = 101;
  v18[402] = 101;
  v18[403] = 101;
  v18[404] = 101;
  v18[405] = 101;
  v18[406] = 101;
  v18[407] = 101;
  v18[408] = 101;
  v18[409] = 101;
  v18[410] = 101;
  v18[411] = 101;
  v18[412] = 101;
  v18[413] = 101;
  v18[414] = 101;
  v18[415] = 101;
  v18[416] = 101;
  v18[417] = 101;
  v18[418] = 101;
  v18[419] = 101;
  v18[420] = 101;
  v18[421] = 101;
  v18[427] = 0;
  *((_WORD *)v18 + 688) = 0;
  *((_BYTE *)v18 + 1378) = 0;
  v18[345] = 1;
  v18[338] = 0;
  *((_QWORD *)v18 + 170) = 0LL;
  *((_QWORD *)v18 + 171) = 0LL;
  v18[342] = 101;
  *((_QWORD *)v18 + 214) = 0LL;
  *((_QWORD *)v18 + 215) = 0LL;
  *((_QWORD *)v18 + 219) = -1LL;
  *((_QWORD *)v18 + 220) = 0LL;
  *((_QWORD *)v18 + 221) = 0LL;
  *((_QWORD *)v18 + 216) = 0LL;
  *((_QWORD *)v18 + 217) = 0LL;
  *((_QWORD *)v18 + 218) = 0LL;
  v18[333] = 0;
  *((_QWORD *)v18 + 162) = 0LL;
  *((_QWORD *)v18 + 163) = 0LL;
  *((_QWORD *)v18 + 8) = a1;
  v18[4] = *(_DWORD *)(a1 + 16);
  *((_QWORD *)v18 + 3) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)v18 + 159) = *(_QWORD *)(a1 + 1272);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a7 + 16)) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v18 + 165) = a7;
  if ( _InterlockedIncrement64((volatile signed __int64 *)Heap + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v18 + 164) = Heap;
  *((_QWORD *)v18 + 219) = *((_QWORD *)Heap + 4);
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
  *((_QWORD *)Heap + 6) = v19;
  v20 = *(_QWORD *)(*((_QWORD *)v19 + 3) + 128LL) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(*((_QWORD *)v19 + 3) + 128LL) + 552LL);
  v21 = (unsigned int)(2 * (*(_DWORD *)(v20 + 4) >> 5));
  if ( *(_DWORD *)v20 >= (unsigned int)v21 )
  {
    v42 = NtCurrentPeb();
    if ( (unsigned int)v21 < 4 )
      v21 = 4LL;
    v43 = (char *)RtlAllocateHeap(v42->ProcessHeap, 0, 8LL * (unsigned int)v21);
    if ( v43 )
    {
      if ( (((_DWORD)v21 - 1) & (unsigned int)v21) != 0 )
      {
        v44 = -1;
        do
        {
          ++v44;
          LODWORD(v21) = (unsigned int)v21 >> 1;
        }
        while ( (_DWORD)v21 );
        v21 = (unsigned int)(1 << v44);
      }
      if ( (unsigned int)v21 > 0x4000000 )
        v21 = 0x4000000LL;
      v45 = (unsigned int)v21;
      if ( v43 > &v43[8 * v21] )
        v45 = 0LL;
      if ( v45 )
        memset64(v43, v20 | 1, v45);
      v46 = 0;
      v47 = -1LL << (*(_BYTE *)(v20 + 4) & 0x1F);
      if ( (*(_DWORD *)(v20 + 4) & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v48 = (_QWORD **)(*(_QWORD *)(v20 + 8) + 8LL * v46);
          while ( 1 )
          {
            v49 = *v48;
            if ( ((unsigned __int8)*v48 & 1) != 0 )
              break;
            *v48 = (_QWORD *)*v49;
            v50 = ((((unsigned __int64)v47 & v49[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v47 & v49[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v47 & v49[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v47 & v49[1]) >> 32)
                    + 37
                    * ((((unsigned int)v47 & (_DWORD)v49[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v47 & (_DWORD)v49[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v47 & v49[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v47 & v49[1]) >> 8)))))))) & (unsigned int)(v21 - 1);
            *v49 = *(_QWORD *)&v43[8 * v50];
            *(_QWORD *)&v43[8 * v50] = v49;
          }
          ++v46;
        }
        while ( v46 < *(_DWORD *)(v20 + 4) >> 5 );
      }
      *(_DWORD *)(v20 + 4) &= 0x1Fu;
      v51 = *(_QWORD *)(v20 + 8);
      *(_DWORD *)(v20 + 4) |= 32 * v21;
      *(_QWORD *)(v20 + 8) = v43;
      if ( v51 )
        CempHeapFreeForHashTable(v51, 0LL);
      v16 = 2LL;
    }
  }
  v22 = *(_DWORD *)(v20 + 4);
  v23 = *((_QWORD *)Heap + 1) & (-1LL << (v22 & 0x1F));
  v24 = (_QWORD *)(*(_QWORD *)(v20 + 8)
                 + 8
                 * ((HIBYTE(v23)
                   + 37
                   * (BYTE6(v23)
                    + 37
                    * (BYTE5(v23)
                     + 37
                     * (BYTE4(v23)
                      + 37
                      * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (37 * ((unsigned __int8)v23 + 11623883) + BYTE1(v23)))))))) & ((v22 >> 5) - 1)));
  *(_QWORD *)Heap = *v24;
  *v24 = Heap;
  ++*(_DWORD *)v20;
  RtlReleaseSRWLockExclusive(v20 + 16);
  v15 = v19;
  v12 = a3;
  v25 = 0;
LABEL_9:
  v26 = v25 | 0x10000000;
  if ( v26 < 0 )
  {
    if ( v15 )
    {
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, 0LL);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  else
  {
    v27 = v15 + 334;
    v28 = a2;
    do
    {
      v27 += 32;
      v29 = *v28;
      v28 += 8;
      *((_OWORD *)v27 - 8) = v29;
      *((_OWORD *)v27 - 7) = *(v28 - 7);
      *((_OWORD *)v27 - 6) = *(v28 - 6);
      *((_OWORD *)v27 - 5) = *(v28 - 5);
      *((_OWORD *)v27 - 4) = *(v28 - 4);
      *((_OWORD *)v27 - 3) = *(v28 - 3);
      *((_OWORD *)v27 - 2) = *(v28 - 2);
      *((_OWORD *)v27 - 1) = *(v28 - 1);
      --v16;
    }
    while ( v16 );
    *(_OWORD *)v27 = *v28;
    *((_OWORD *)v27 + 1) = v28[1];
    *((_OWORD *)v27 + 2) = v28[2];
    *((_OWORD *)v27 + 3) = v28[3];
    *((_OWORD *)v27 + 4) = v28[4];
    *((_OWORD *)v27 + 5) = v28[5];
    *((_OWORD *)v27 + 6) = v28[6];
    *((_QWORD *)v27 + 14) = *((_QWORD *)v28 + 14);
    v15[322] = *((_DWORD *)a2 + 2);
    v15[323] = *((_DWORD *)a2 + 8);
    v15[8] = a8;
    v15[2] = 0;
    v15[320] = 1;
    v30 = *((_QWORD *)v15 + 214);
    if ( v30 != a5 )
    {
      if ( a5 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
        v30 = *((_QWORD *)v15 + 214);
      }
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      *((_QWORD *)v15 + 214) = a5;
    }
    *((_QWORD *)v15 + 215) = a6;
    *((_QWORD *)v15 + 216) = *((_QWORD *)a2 + 11);
    *((_QWORD *)v15 + 217) = *((_QWORD *)a2 + 14);
    *((_QWORD *)v15 + 218) = *((_QWORD *)a2 + 17);
    v31 = *(_QWORD *)v15;
    v32 = *((_QWORD *)v15 + 165);
    *(_OWORD *)(v15 + 18) = a2[5];
    v33 = *(void (__fastcall **)(_DWORD *))(v31 + 8);
    *(_OWORD *)(v15 + 22) = a2[6];
    *(_OWORD *)(v15 + 26) = a2[7];
    *(_OWORD *)(v15 + 30) = a2[8];
    *((_QWORD *)v15 + 17) = *((_QWORD *)a2 + 18);
    v33(v15);
    v34 = (_DWORD *)(v32 + 1112);
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v15 + 8LL))(v15);
    v35 = *(_QWORD *)v34;
    v36 = v15 + 324;
    if ( *(_DWORD **)(*(_QWORD *)v34 + 8LL) != v34 )
      goto LABEL_61;
    *v36 = v35;
    *((_QWORD *)v15 + 163) = v34;
    *(_QWORD *)(v35 + 8) = v36;
    *(_QWORD *)v34 = v36;
    ++v34[4];
    v37 = (_QWORD *)*((_QWORD *)v15 + 164);
    v15[332] = 0;
    v38 = *(_QWORD **)(v12 + 200);
    if ( v38 != (_QWORD *)(v12 + 200) )
    {
      v52 = *(unsigned int *)(v37[6] + 1288LL);
      do
      {
        if ( (int)RmpEmPriorityCompare(v52, *(unsigned int *)(*(v38 - 4) + 1288LL)) > 0 )
          break;
        v38 = (_QWORD *)*v38;
      }
      while ( v38 != v53 );
    }
    v39 = (_QWORD *)v38[1];
    v40 = v37 + 10;
    if ( (_QWORD *)*v39 != v38 )
LABEL_61:
      __fastfail(3u);
    *v40 = v38;
    v37[11] = v39;
    *v39 = v40;
    v38[1] = v40;
    if ( (*((_BYTE *)a2 + 42) & 0x20) != 0 && (a2[1] & 0x100) == 0 )
      v15[333] |= 8u;
    v26 = 0;
    *a11 = v15;
  }
  return (unsigned int)v26;
}
