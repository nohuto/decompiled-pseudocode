/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@8PEAPEAV12@@Z @ 0x18001C900
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18001D560 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     CempHeapFree @ 0x18003CBC0 (CempHeapFree.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180046D88 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004903C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049094 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     memmove_0 @ 0x180049A0E (memmove_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x180055B9C (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char *Src,
        __int64 a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        __int64 a14,
        __int64 a15,
        ExecutionModel::BaseResourceSet **a16)
{
  ExecutionModel::BaseResourceSet *v17; // r14
  PVOID Heap; // rax
  unsigned __int64 v22; // rbx
  PVOID v23; // r15
  char v24; // r12
  ExecutionModel::BaseResourceSet *v25; // rax
  ExecutionModel::BaseResourceSet *v26; // rsi
  __int64 v27; // r14
  __int64 v28; // r12
  unsigned int v29; // r13d
  unsigned int v30; // r9d
  unsigned __int64 v31; // r8
  _QWORD *v32; // rdx
  int v33; // edi
  int v34; // edi
  char *v35; // rax
  char *v36; // r15
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rax
  char *v40; // rsi
  void **v41; // rax
  void *v42; // r13
  size_t v43; // rbx
  char *v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int128 *v48; // rax
  __int128 v49; // xmm0
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  void (__fastcall *v53)(ExecutionModel::BaseResourceSet *); // rax
  _DWORD *v54; // rdi
  __int64 v55; // rcx
  _QWORD *v56; // rax
  _QWORD *v57; // r9
  _QWORD *v58; // rdi
  _QWORD *v59; // rcx
  _QWORD *v60; // rax
  struct _PEB *v62; // rcx
  _QWORD *v63; // r8
  _QWORD **v64; // r9
  char *v65; // r11
  unsigned __int64 v66; // rcx
  unsigned int v67; // r10d
  __int64 v68; // r12
  unsigned __int64 v69; // rcx
  __int64 v70; // rcx
  char v71; // cl
  char *v72; // rax
  __int64 v73; // rcx
  _QWORD *v74; // r8
  __int64 v75; // [rsp+20h] [rbp-68h]
  void *v76[2]; // [rsp+28h] [rbp-60h] BYREF
  void *Block[10]; // [rsp+38h] [rbp-50h] BYREF

  v17 = 0LL;
  v75 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 152LL);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
  v22 = -1LL;
  v23 = Heap;
  v24 = 2;
  if ( !Heap )
  {
    v33 = -1073741801;
    goto LABEL_9;
  }
  memset_0(Heap, 0, 0x60uLL);
  *((_QWORD *)v23 + 4) = a15;
  *((_QWORD *)v23 + 2) = 1LL;
  *((_DWORD *)v23 + 10) = 1;
  *((_QWORD *)v23 + 1) = HIBYTE(a15)
                       + 37
                       * (BYTE6(a15)
                        + 37
                        * (BYTE5(a15)
                         + 37
                         * (BYTE4(a15)
                          + 37
                          * (BYTE3(a15)
                           + 37 * (BYTE2(a15) + 37 * (BYTE1(a15) + 37 * ((unsigned __int8)a15 + 11623883LL)))))));
  *((_QWORD *)v23 + 7) = a14;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v23 + 8) = a3;
  if ( a4 )
  {
    v33 = RmpSystemDuplicateHandle(a4, 1u, (PHANDLE)v23 + 9);
    if ( v33 >= 0 )
      v33 = 0;
    if ( v33 < 0 )
      goto LABEL_82;
  }
  v25 = (ExecutionModel::BaseResourceSet *)operator new(0x768uLL);
  v26 = v25;
  if ( !v25 )
  {
    v33 = -1073741801;
LABEL_82:
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v23);
    goto LABEL_9;
  }
  ExecutionModel::BaseResourceSet::BaseResourceSet(v25);
  *((_DWORD *)v26 + 362) = 2;
  *(_QWORD *)v26 = &ExecutionModel::ResourceSet::`vftable';
  *((_QWORD *)v26 + 179) = 0LL;
  *((_QWORD *)v26 + 180) = 0LL;
  *((_QWORD *)v26 + 182) = 0xFFFFFFFFLL;
  *((_DWORD *)v26 + 366) = 101;
  *((_DWORD *)v26 + 367) = 32;
  *((_DWORD *)v26 + 376) = 0;
  *((_QWORD *)v26 + 189) = 0LL;
  *((_QWORD *)v26 + 190) = 0LL;
  *((_DWORD *)v26 + 382) = 0;
  *((_QWORD *)v26 + 193) = 0LL;
  *((_DWORD *)v26 + 388) = 101;
  *((_WORD *)v26 + 778) = 0;
  *((_QWORD *)v26 + 196) = 0LL;
  *((_DWORD *)v26 + 394) = 101;
  *((_WORD *)v26 + 790) = 0;
  *((_QWORD *)v26 + 199) = 0LL;
  *((_DWORD *)v26 + 400) = 101;
  *((_WORD *)v26 + 802) = 0;
  *((_DWORD *)v26 + 452) = 0;
  *((_QWORD *)v26 + 227) = 0LL;
  *((_DWORD *)v26 + 390) = 1;
  *((_DWORD *)v26 + 384) = 0;
  *((_DWORD *)v26 + 396) = 2;
  *((_DWORD *)v26 + 402) = 101;
  *((_DWORD *)v26 + 403) = 101;
  *((_DWORD *)v26 + 404) = 101;
  *((_DWORD *)v26 + 405) = 101;
  *((_DWORD *)v26 + 406) = 101;
  *((_DWORD *)v26 + 407) = 101;
  *((_DWORD *)v26 + 408) = 101;
  *((_DWORD *)v26 + 409) = 101;
  *((_DWORD *)v26 + 410) = 101;
  *((_DWORD *)v26 + 411) = 101;
  *((_DWORD *)v26 + 412) = 101;
  *((_DWORD *)v26 + 413) = 101;
  *((_DWORD *)v26 + 414) = 101;
  *((_DWORD *)v26 + 415) = 101;
  *((_DWORD *)v26 + 416) = 101;
  *((_DWORD *)v26 + 417) = 101;
  *((_DWORD *)v26 + 418) = 101;
  *((_DWORD *)v26 + 419) = 101;
  *((_DWORD *)v26 + 420) = 101;
  *((_DWORD *)v26 + 421) = 101;
  *((_DWORD *)v26 + 422) = 101;
  *((_DWORD *)v26 + 423) = 101;
  *((_DWORD *)v26 + 424) = 101;
  *((_DWORD *)v26 + 425) = 101;
  *((_DWORD *)v26 + 426) = 101;
  *((_DWORD *)v26 + 427) = 101;
  *((_DWORD *)v26 + 428) = 101;
  *((_DWORD *)v26 + 429) = 101;
  *((_DWORD *)v26 + 430) = 101;
  *((_DWORD *)v26 + 431) = 101;
  *((_DWORD *)v26 + 432) = 101;
  *((_DWORD *)v26 + 433) = 101;
  *((_DWORD *)v26 + 434) = 101;
  *((_DWORD *)v26 + 435) = 101;
  *((_DWORD *)v26 + 436) = 101;
  *((_DWORD *)v26 + 437) = 101;
  *((_DWORD *)v26 + 438) = 101;
  *((_DWORD *)v26 + 439) = 101;
  *((_DWORD *)v26 + 440) = 101;
  *((_DWORD *)v26 + 441) = 101;
  *((_DWORD *)v26 + 442) = 101;
  *((_DWORD *)v26 + 443) = 101;
  *((_DWORD *)v26 + 444) = 101;
  *((_DWORD *)v26 + 445) = 101;
  *((_DWORD *)v26 + 446) = 101;
  *((_DWORD *)v26 + 447) = 101;
  *((_DWORD *)v26 + 448) = 101;
  *((_DWORD *)v26 + 449) = 101;
  *((_DWORD *)v26 + 450) = 101;
  *((_DWORD *)v26 + 451) = 101;
  *((_DWORD *)v26 + 457) = 0;
  *((_WORD *)v26 + 748) = 0;
  *((_BYTE *)v26 + 1498) = 0;
  *((_DWORD *)v26 + 375) = 1;
  *((_DWORD *)v26 + 368) = 0;
  *((_QWORD *)v26 + 185) = 0LL;
  *((_QWORD *)v26 + 186) = 0LL;
  *((_DWORD *)v26 + 372) = 101;
  *((_QWORD *)v26 + 229) = 0LL;
  *((_QWORD *)v26 + 230) = 0LL;
  *((_QWORD *)v26 + 234) = -1LL;
  *((_QWORD *)v26 + 235) = 0LL;
  *((_QWORD *)v26 + 236) = 0LL;
  *((_QWORD *)v26 + 231) = 0LL;
  *((_QWORD *)v26 + 232) = 0LL;
  *((_QWORD *)v26 + 233) = 0LL;
  *((_DWORD *)v26 + 363) = 0;
  *((_QWORD *)v26 + 177) = 0LL;
  *((_QWORD *)v26 + 178) = 0LL;
  *((_QWORD *)v26 + 23) = a1;
  *((_DWORD *)v26 + 4) = *(_DWORD *)(a1 + 16);
  *((_QWORD *)v26 + 3) = *(_QWORD *)(a1 + 24);
  *((_QWORD *)v26 + 174) = *(_QWORD *)(a1 + 1392);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(a7 + 16)) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v26 + 180) = a7;
  if ( _InterlockedIncrement64((volatile signed __int64 *)v23 + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v26 + 179) = v23;
  *((_QWORD *)v26 + 234) = *((_QWORD *)v23 + 4);
  (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v26 + 8LL))(v26);
  *((_QWORD *)v23 + 6) = v26;
  v27 = *(_QWORD *)(*((_QWORD *)v26 + 3) + 152LL) + 536LL;
  v28 = *(_QWORD *)(*((_QWORD *)v26 + 3) + 152LL) + 552LL;
  RtlAcquireSRWLockExclusive(v28);
  v29 = 2 * (*(_DWORD *)(v27 + 4) >> 5);
  if ( *(_DWORD *)v27 >= v29 )
  {
    v62 = NtCurrentPeb();
    if ( v29 < 4 )
      v29 = 4;
    v65 = (char *)RtlAllocateHeap(v62->ProcessHeap, 0, 8LL * v29);
    if ( v65 )
    {
      if ( ((v29 - 1) & v29) != 0 )
      {
        v71 = -1;
        do
        {
          ++v71;
          v29 >>= 1;
        }
        while ( v29 );
        v29 = 1 << v71;
      }
      if ( v29 > 0x4000000 )
        v29 = 0x4000000;
      v66 = v29;
      if ( v65 > &v65[8 * v29] )
        v66 = 0LL;
      if ( v66 )
        memset64(v65, v27 | 1, v66);
      v67 = 0;
      if ( (*(_DWORD *)(v27 + 4) & 0xFFFFFFE0) != 0 )
      {
        v68 = -1LL << (*(_DWORD *)(v27 + 4) & 0x1F);
        do
        {
          v64 = (_QWORD **)(*(_QWORD *)(v27 + 8) + 8LL * v67);
          while ( 1 )
          {
            v63 = *v64;
            if ( ((unsigned __int8)*v64 & 1) != 0 )
              break;
            *v64 = (_QWORD *)*v63;
            v69 = ((((unsigned __int64)v68 & v63[1]) >> 56)
                 + 37
                 * ((unsigned __int8)(((unsigned __int64)v68 & v63[1]) >> 48)
                  + 37
                  * ((unsigned __int8)((unsigned __int16)(((unsigned __int64)v68 & v63[1]) >> 32) >> 8)
                   + 37
                   * ((unsigned __int8)(((unsigned __int64)v68 & v63[1]) >> 32)
                    + 37
                    * ((((unsigned int)v68 & (_DWORD)v63[1]) >> 24)
                     + 37
                     * ((unsigned __int8)(((unsigned int)v68 & (_DWORD)v63[1]) >> 16)
                      + 37
                      * (37 * ((unsigned __int8)(v68 & v63[1]) + 11623883)
                       + (unsigned __int8)((unsigned __int16)(v68 & v63[1]) >> 8)))))))) & (v29 - 1);
            *v63 = *(_QWORD *)&v65[8 * v69];
            *(_QWORD *)&v65[8 * v69] = v63;
          }
          ++v67;
        }
        while ( v67 < *(_DWORD *)(v27 + 4) >> 5 );
      }
      *(_DWORD *)(v27 + 4) &= 0x1Fu;
      v70 = *(_QWORD *)(v27 + 8);
      *(_DWORD *)(v27 + 4) |= 32 * v29;
      *(_QWORD *)(v27 + 8) = v65;
      if ( v70 )
        CempHeapFree(v70, 0LL, v63, v64);
      v28 = v27 + 16;
    }
  }
  v30 = *(_DWORD *)(v27 + 4);
  v31 = *((_QWORD *)v23 + 1) & (-1LL << (v30 & 0x1F));
  v32 = (_QWORD *)(*(_QWORD *)(v27 + 8)
                 + 8
                 * ((HIBYTE(v31)
                   + 37
                   * (BYTE6(v31)
                    + 37
                    * (BYTE5(v31)
                     + 37
                     * (BYTE4(v31)
                      + 37
                      * (((*((_DWORD *)v23 + 2) & (unsigned int)(-1 << (v30 & 0x1F))) >> 24)
                       + 37
                       * (BYTE2(v31)
                        + 37
                        * (37 * ((unsigned __int8)v31 + 11623883)
                         + (unsigned __int8)((unsigned __int16)(*((_WORD *)v23 + 4) & (-1 << (v30 & 0x1F))) >> 8)))))))) & ((v30 >> 5) - 1)));
  *(_QWORD *)v23 = *v32;
  *v32 = v23;
  ++*(_DWORD *)v27;
  RtlReleaseSRWLockExclusive(v28);
  v17 = v26;
  v33 = 0;
  v24 = 2;
LABEL_9:
  v34 = v33 | 0x10000000;
  if ( v34 >= 0 )
  {
    if ( !Src )
    {
LABEL_33:
      if ( a9 )
      {
        *((_OWORD *)v17 + 4) = *(_OWORD *)a9;
        *((_OWORD *)v17 + 5) = *(_OWORD *)(a9 + 16);
        *((_OWORD *)v17 + 6) = *(_OWORD *)(a9 + 32);
        *((_OWORD *)v17 + 7) = *(_OWORD *)(a9 + 48);
        v45 = *(_DWORD *)(a9 + 64);
      }
      else
      {
        *((_OWORD *)v17 + 4) = *(_OWORD *)(v75 + 2548);
        *((_OWORD *)v17 + 5) = *(_OWORD *)(v75 + 2564);
        *((_OWORD *)v17 + 6) = *(_OWORD *)(v75 + 2580);
        *((_OWORD *)v17 + 7) = *(_OWORD *)(v75 + 2596);
        v45 = *(_DWORD *)(v75 + 2612);
      }
      *((_DWORD *)v17 + 32) = v45;
      v46 = (__int64)v17 + 1456;
      v47 = 2LL;
      *((_DWORD *)v17 + 33) = a10;
      *((_DWORD *)v17 + 34) = a11;
      *((_QWORD *)v17 + 18) = a12;
      v48 = a2;
      do
      {
        v46 += 128LL;
        v49 = *v48;
        v48 += 8;
        *(_OWORD *)(v46 - 128) = v49;
        *(_OWORD *)(v46 - 112) = *(v48 - 7);
        *(_OWORD *)(v46 - 96) = *(v48 - 6);
        *(_OWORD *)(v46 - 80) = *(v48 - 5);
        *(_OWORD *)(v46 - 64) = *(v48 - 4);
        *(_OWORD *)(v46 - 48) = *(v48 - 3);
        *(_OWORD *)(v46 - 32) = *(v48 - 2);
        *(_OWORD *)(v46 - 16) = *(v48 - 1);
        --v47;
      }
      while ( v47 );
      *(_OWORD *)v46 = *v48;
      *(_OWORD *)(v46 + 16) = v48[1];
      *(_OWORD *)(v46 + 32) = v48[2];
      *(_OWORD *)(v46 + 48) = v48[3];
      *(_OWORD *)(v46 + 64) = v48[4];
      *(_OWORD *)(v46 + 80) = v48[5];
      *(_OWORD *)(v46 + 96) = v48[6];
      *(_QWORD *)(v46 + 112) = *((_QWORD *)v48 + 14);
      *((_DWORD *)v17 + 352) = *((_DWORD *)a2 + 2);
      *((_DWORD *)v17 + 353) = *((_DWORD *)a2 + 8);
      *((_DWORD *)v17 + 38) = a13;
      *((_DWORD *)v17 + 2) = 0;
      *((_DWORD *)v17 + 350) = 1;
      v50 = *((_QWORD *)v17 + 229);
      if ( v50 != a5 )
      {
        if ( a5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
          v50 = *((_QWORD *)v17 + 229);
        }
        if ( v50 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        *((_QWORD *)v17 + 229) = a5;
      }
      *((_QWORD *)v17 + 230) = a6;
      *((_QWORD *)v17 + 231) = *((_QWORD *)a2 + 11);
      *((_QWORD *)v17 + 232) = *((_QWORD *)a2 + 14);
      *((_QWORD *)v17 + 233) = *((_QWORD *)a2 + 17);
      v51 = *(_QWORD *)v17;
      v52 = *((_QWORD *)v17 + 180);
      *((_OWORD *)v17 + 12) = a2[5];
      v53 = *(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(v51 + 8);
      *((_OWORD *)v17 + 13) = a2[6];
      *((_OWORD *)v17 + 14) = a2[7];
      *((_OWORD *)v17 + 15) = a2[8];
      *((_QWORD *)v17 + 32) = *((_QWORD *)a2 + 18);
      v53(v17);
      v54 = (_DWORD *)(v52 + 1056);
      (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v17 + 8LL))(v17);
      v55 = *(_QWORD *)v54;
      v56 = (_QWORD *)((char *)v17 + 1416);
      if ( *(_DWORD **)(*(_QWORD *)v54 + 8LL) != v54 )
        goto LABEL_99;
      *v56 = v55;
      *((_QWORD *)v17 + 178) = v54;
      *(_QWORD *)(v55 + 8) = v56;
      *(_QWORD *)v54 = v56;
      ++v54[4];
      v57 = (_QWORD *)*((_QWORD *)v17 + 179);
      *((_DWORD *)v17 + 362) = 0;
      v58 = *(_QWORD **)(a3 + 200);
      if ( v58 != (_QWORD *)(a3 + 200) )
      {
        v73 = *(unsigned int *)(v57[6] + 1408LL);
        do
        {
          if ( (int)RmpEmPriorityCompare(v73, *(unsigned int *)(*(v58 - 4) + 1408LL)) > 0 )
            break;
          v58 = (_QWORD *)*v58;
        }
        while ( v58 != v74 );
      }
      v59 = (_QWORD *)v58[1];
      v60 = v57 + 10;
      if ( (_QWORD *)*v59 != v58 )
LABEL_99:
        __fastfail(3u);
      *v60 = v58;
      v57[11] = v59;
      *v59 = v60;
      v58[1] = v60;
      if ( (*((_BYTE *)a2 + 42) & 0x20) != 0 && (a2[1] & 0x100) == 0 )
        *((_DWORD *)v17 + 363) |= 8u;
      v34 = 0;
      *a16 = v17;
      return (unsigned int)v34;
    }
    do
      ++v22;
    while ( *(_WORD *)&Src[2 * v22] );
    v35 = (char *)*((_QWORD *)v17 + 4);
    v36 = (char *)v17 + 48;
    v37 = 7LL;
    if ( v35 == (char *)v17 + 48 )
      v38 = 7LL;
    else
      v38 = (__int64)(*(_QWORD *)v36 - (_QWORD)v35) >> 1;
    if ( v22 <= v38 )
    {
      if ( v35 != Src )
      {
        memmove_0(*((void **)v17 + 4), Src, 2 * v22);
        v35 = (char *)*((_QWORD *)v17 + 4);
      }
      v72 = &v35[2 * v22];
      *((_QWORD *)v17 + 5) = v72;
      *(_WORD *)v72 = 0;
      goto LABEL_33;
    }
    if ( v35 != v36 )
      v37 = (__int64)(*(_QWORD *)v36 - (_QWORD)v35) >> 1;
    v39 = 2 * v37 + 1;
    if ( v39 < v22 )
      v39 = v22;
    if ( v39 > 0x3FFFFFFFFFFFFFF7LL )
      v39 = 0x3FFFFFFFFFFFFFF7LL;
    if ( v22 > v39 )
    {
      Block[0] = 0LL;
      v41 = Block;
      Block[1] = 0LL;
      v40 = 0LL;
    }
    else
    {
      v76[1] = (void *)(v39 + 1);
      if ( v39 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      {
        v40 = 0LL;
        v76[0] = 0LL;
      }
      else
      {
        v40 = (char *)operator new(2 * (v39 + 1), (const struct std::nothrow_t *)&std::nothrow);
        v76[0] = v40;
      }
      v41 = v76;
      v24 = 1;
    }
    v42 = v41[1];
    *v41 = 0LL;
    if ( (v24 & 2) != 0 )
    {
      v24 &= ~2u;
      if ( Block[0] )
        operator delete(Block[0]);
    }
    if ( (v24 & 1) != 0 && v76[0] )
      operator delete(v76[0]);
    if ( v40 )
    {
      v43 = 2 * v22;
      memcpy_0(v40, Src, v43);
      *(_WORD *)&v40[v43] = 0;
      v44 = (char *)*((_QWORD *)v17 + 4);
      if ( v44 != v36 )
        operator delete(v44);
      *((_QWORD *)v17 + 4) = v40;
      *((_QWORD *)v17 + 5) = &v40[v43];
      *(_QWORD *)v36 = &v40[2 * ((__int64)v42 - 1)];
      goto LABEL_33;
    }
    v34 = -2147024882;
  }
  if ( v17 )
  {
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, 0LL);
    (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v34;
}
