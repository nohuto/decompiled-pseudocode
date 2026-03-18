/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1400C7FA0
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14008F9F4 (MiInPageSingleKernelStack.c)
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x14013B2EC (MiPrefetchRestOfCluster.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualMemory @ 0x1406517C8 (MmPrefetchVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x1406A5520 (MiPrefetchDriverPages.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiGetLeafVa @ 0x14005AA90 (MiGetLeafVa.c)
 *     MiPfCompletePrefetchIos @ 0x1400954A4 (MiPfCompletePrefetchIos.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiVaIsUltra @ 0x1400C8420 (MiVaIsUltra.c)
 *     MiAdvanceFaultList @ 0x140124668 (MiAdvanceFaultList.c)
 *     MiPfCoalesceAndIssueIOs @ 0x140130140 (MiPfCoalesceAndIssueIOs.c)
 *     MiLeapPrefetch @ 0x1402C6688 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v8; // al
  _KPROCESS *Process; // r15
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 LeafVa; // r8
  __int64 v15; // rcx
  ULONG_PTR *v16; // rdx
  unsigned __int64 v17; // rcx
  ULONG_PTR v18; // rax
  ULONG_PTR v19; // rcx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // ebx
  int v26; // eax
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  int v30; // r8d
  int v31; // eax
  _QWORD **v32; // rcx
  _QWORD *v33; // rdx
  unsigned __int16 **v34; // rbx
  __int64 v35; // r11
  unsigned __int16 *v36; // r8
  unsigned int v37; // r9d
  __int64 v38; // rsi
  int v39; // eax
  __int16 v40; // [rsp+28h] [rbp-39h] BYREF
  int v41; // [rsp+2Ah] [rbp-37h]
  __int16 v42; // [rsp+2Eh] [rbp-33h]
  __int64 v43; // [rsp+30h] [rbp-31h]
  unsigned __int64 v44; // [rsp+38h] [rbp-29h]
  unsigned __int64 v45; // [rsp+40h] [rbp-21h]
  unsigned __int64 v46; // [rsp+48h] [rbp-19h]
  _QWORD *v47[2]; // [rsp+50h] [rbp-11h] BYREF
  _QWORD v48[2]; // [rsp+60h] [rbp-1h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp+Fh] BYREF
  int v50; // [rsp+78h] [rbp+17h]
  int v51; // [rsp+7Ch] [rbp+1Bh]
  int v52; // [rsp+C8h] [rbp+67h]
  int v53; // [rsp+E0h] [rbp+7Fh]

  v40 = 1;
  v41 = 0;
  v4 = 0;
  v42 = 0;
  v51 = 0;
  v45 = 0LL;
  v46 = 0LL;
  v47[1] = v47;
  v47[0] = v47;
  v48[1] = v48;
  v48[0] = v48;
  v43 = a2;
  v44 = a1;
  v49 = 0LL;
  v50 = a4;
  CurrentThread = KeGetCurrentThread();
  v52 = 0;
  v53 = 0;
  v8 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v8 >= 2u )
    return 3221225626LL;
  BYTE6(CurrentThread[1].Queue) = v8 + 1;
  --CurrentThread->KernelApcDisable;
  if ( v45 >= v44 )
  {
    v25 = 0;
    goto LABEL_32;
  }
  v10 = 0xFFFFF68000000000uLL;
  while ( 1 )
  {
    v11 = 0xFFFF800000000000uLL;
    v12 = *(_QWORD *)(a2 + 16 * v45 + 8);
    if ( v46 >= ((unsigned __int64)(*(_DWORD *)(a2 + 16 * v45) & 0xFFF) + v12 + 4095) >> 12 )
      goto LABEL_71;
    if ( !v12 )
      break;
    v13 = *(_QWORD *)(a2 + 16 * v45) + (v46 << 12);
    LeafVa = v13;
    if ( v13 >= qword_1404672B0 && v13 <= qword_140465BE0
      || v13 >= 0xFFFF800000000000uLL
      && ((unsigned int)MiVaIsUltra(*(_QWORD *)(a2 + 16 * v45) + (v46 << 12))
       || *((_BYTE *)&MiState[1488] + ((v13 >> 39) & 0x1FF)) == 1
       && v13 >= qword_1404656D8
       && v13 < qword_1404656D8 + 290816) )
    {
      goto LABEL_71;
    }
    if ( v13 >= v10 && v13 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v13 >= v10 + 0x4000000000LL )
        goto LABEL_71;
      LeafVa = MiGetLeafVa(v13);
    }
    if ( LeafVa < v11 )
    {
LABEL_10:
      if ( a3 != 1 && (*(_BYTE *)(a3 + 184) & 7) == 0 )
      {
        v15 = *(unsigned __int16 *)&Process[1].Spare2[69];
        goto LABEL_13;
      }
      goto LABEL_71;
    }
    if ( *((_BYTE *)&MiState[1488] + ((LeafVa >> 39) & 0x1FF)) == 1 )
    {
      if ( a3 != 1 && (*(_BYTE *)(a3 + 184) & 7) == 1 )
      {
        v29 = Process[1].ActiveProcessors.Bitmap[1];
        if ( v29 )
        {
          v15 = *(unsigned __int16 *)(v29 + 430);
LABEL_13:
          v16 = *(ULONG_PTR **)(qword_140465E88 + 8 * v15);
LABEL_14:
          if ( (v50 & 0x80u) == 0 )
          {
            v17 = v16[1008];
            if ( v17 < 0x120 )
            {
              v34 = (unsigned __int16 **)(v16 + 517);
              v35 = 0LL;
              while ( 1 )
              {
                v36 = *v34;
                v37 = 0;
                v38 = v35;
                if ( dword_1404657B4 )
                  break;
LABEL_79:
                ++v35;
                ++v34;
                if ( v38 >= 1 )
                {
                  v4 = v52;
                  goto LABEL_31;
                }
              }
              while ( 1 )
              {
                v17 += *v36;
                if ( v17 >= 0x120 )
                  break;
                ++v37;
                v36 += 8;
                if ( v37 >= dword_1404657B4 )
                  goto LABEL_79;
              }
              v4 = v52;
            }
            v18 = v16[1069];
            v19 = v16[1053];
            if ( v19 > v18 || v18 - v19 < 0x1080 || (__int64)v16[1016] < 288 )
              goto LABEL_31;
          }
          v20 = v45;
          v21 = v46;
          v22 = MmAccessFault(0LL, v13, 0, (ULONG_PTR)&v40 + 1);
          if ( HIBYTE(v40) == 2 )
          {
            if ( (v50 & 0x80u) == 0 )
              goto LABEL_31;
          }
          else if ( HIBYTE(v40) != 1 )
          {
            if ( HIBYTE(v40) == 3 )
            {
              HIBYTE(v40) = 0;
              v45 = v20;
              v46 = v21;
            }
            else if ( v45 == v20 && v46 == v21 )
            {
              v23 = *(_QWORD *)(v43 + 16 * v45 + 8) + 4095LL;
              v24 = *(_DWORD *)(v43 + 16 * v45) & 0xFFF;
              if ( ++v46 == (unsigned __int64)(v23 + v24) >> 12 )
              {
                v28 = v45 + 1;
                v45 = v28;
                v46 = 0LL;
                if ( v28 < v44 && !*(_QWORD *)(v43 + 16 * v28 + 8) )
                  v45 = v44;
              }
            }
            goto LABEL_25;
          }
          HIBYTE(v40) = 0;
LABEL_25:
          if ( v22 < 0 )
          {
            v25 = v22;
            v53 = v22;
            if ( v22 != -1073741819 || v45 == v44 || !(unsigned int)MiLeapPrefetch(&v40, 0LL) )
              goto LABEL_32;
          }
          if ( v49 >= 0x200000 )
            MiPfCoalesceAndIssueIOs(v48, v47, &v49);
          if ( (v50 & 0x400) != 0 )
          {
            v30 = 0;
            v31 = 0;
            while ( 1 )
            {
              v32 = v47;
              if ( !v31 )
                v32 = (_QWORD **)v48;
              v33 = *v32;
              if ( *v32 != v32 )
                break;
LABEL_60:
              if ( (unsigned int)++v31 >= 2 )
                goto LABEL_29;
            }
            while ( ++v30 != 4 )
            {
              v33 = (_QWORD *)*v33;
              if ( v33 == v32 )
                goto LABEL_60;
            }
            v39 = MiPfCompletePrefetchIos(v47, (__int64)v48, a3);
            if ( v39 < 0 )
            {
              if ( v4 >= 0 )
                v4 = v39;
              v52 = v4;
            }
            v49 = 0LL;
          }
LABEL_29:
          v10 = 0xFFFFF68000000000uLL;
          goto LABEL_30;
        }
      }
    }
    else
    {
      if ( LeafVa < v11 )
        goto LABEL_10;
      if ( a3 == 1 )
      {
        v16 = &MiSystemPartition;
        goto LABEL_14;
      }
    }
LABEL_71:
    MiAdvanceFaultList(&v40);
LABEL_30:
    if ( v45 >= v44 )
      goto LABEL_31;
  }
  v45 = v44;
  v46 = 0LL;
LABEL_31:
  v25 = v53;
LABEL_32:
  v26 = MiPfCompletePrefetchIos(v47, (__int64)v48, a3);
  if ( v26 < 0 )
  {
    if ( v4 >= 0 )
    {
      v4 = v26;
      goto LABEL_33;
    }
  }
  else
  {
LABEL_33:
    if ( v4 >= 0 && v25 < 0 && (v50 & 0x8000) != 0 )
      v4 = v25;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v4;
}
