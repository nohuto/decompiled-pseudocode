/*
 * XREFs of MiPrefetchVirtualMemory @ 0x1400EA1C0
 * Callers:
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 *     MiPrefetchRestOfCluster @ 0x140139198 (MiPrefetchRestOfCluster.c)
 *     MiInPageSingleKernelStack @ 0x14013D5A0 (MiInPageSingleKernelStack.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 *     MiPrefetchDriverPages @ 0x140620120 (MiPrefetchDriverPages.c)
 *     MmPrefetchVirtualMemory @ 0x14066CF68 (MmPrefetchVirtualMemory.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x14001A020 (MiPfCompletePrefetchIos.c)
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiGetLeafVa @ 0x140076400 (MiGetLeafVa.c)
 *     MiVaIsUltra @ 0x1400EA674 (MiVaIsUltra.c)
 *     MiPfCoalesceAndIssueIOs @ 0x14012E348 (MiPfCoalesceAndIssueIOs.c)
 *     MiLeapPrefetch @ 0x1402AECD8 (MiLeapPrefetch.c)
 */

__int64 __fastcall MiPrefetchVirtualMemory(unsigned __int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // esi
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v8; // al
  _KPROCESS *Process; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 LeafVa; // r8
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  ULONG_PTR *v17; // rdx
  unsigned __int64 v18; // rcx
  ULONG_PTR v19; // rax
  ULONG_PTR v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ebx
  int v27; // eax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  int v31; // r8d
  int v32; // eax
  _QWORD **v33; // rcx
  _QWORD *v34; // rdx
  unsigned __int16 **v35; // rbx
  __int64 v36; // r11
  unsigned __int16 *v37; // r8
  unsigned int v38; // r9d
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // [rsp+20h] [rbp-88h] BYREF
  __int64 v42; // [rsp+28h] [rbp-80h]
  unsigned __int64 v43; // [rsp+30h] [rbp-78h]
  unsigned __int64 v44; // [rsp+38h] [rbp-70h]
  unsigned __int64 v45; // [rsp+40h] [rbp-68h]
  _QWORD *v46[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v47[2]; // [rsp+58h] [rbp-50h] BYREF
  unsigned __int64 v48; // [rsp+68h] [rbp-40h] BYREF
  int v49; // [rsp+70h] [rbp-38h]
  int v50; // [rsp+B0h] [rbp+8h]
  int v51; // [rsp+C8h] [rbp+20h]

  LOWORD(v41) = 1;
  v46[1] = v46;
  v4 = 0;
  v42 = a2;
  v46[0] = v46;
  v43 = a1;
  v47[1] = v47;
  v44 = 0LL;
  v47[0] = v47;
  v45 = 0LL;
  v48 = 0LL;
  v49 = a4;
  CurrentThread = KeGetCurrentThread();
  v50 = 0;
  v51 = 0;
  v8 = BYTE6(CurrentThread[1].Queue);
  Process = CurrentThread->ApcState.Process;
  if ( v8 >= 2u )
    return 3221225626LL;
  BYTE6(CurrentThread[1].Queue) = v8 + 1;
  --CurrentThread->KernelApcDisable;
  if ( v44 >= v43 )
  {
    v26 = 0;
    goto LABEL_31;
  }
  while ( 1 )
  {
    v10 = *(_QWORD *)(a2 + 16 * v44 + 8);
    if ( v45 >= ((unsigned __int64)(*(_DWORD *)(a2 + 16 * v44) & 0xFFF) + v10 + 4095) >> 12 )
      goto LABEL_69;
    if ( !v10 )
      break;
    v11 = *(_QWORD *)(a2 + 16 * v44) + (v45 << 12);
    if ( v11 >= qword_14043CB80 && v11 <= qword_14043B5F0
      || v11 >= 0xFFFF800000000000uLL && (unsigned int)MiVaIsUltra(*(_QWORD *)(a2 + 16 * v44) + (v45 << 12))
      || (unsigned int)MiGetSystemRegionType(v11) == 1 && v14 >= qword_14043B080 && v14 < qword_14043B080 + 4485120 )
    {
      goto LABEL_69;
    }
    if ( v14 >= v15 && v14 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v14 >= v15 + 0x4000000000LL )
        goto LABEL_69;
      LeafVa = MiGetLeafVa(v14);
    }
    if ( LeafVa < v13 )
    {
LABEL_10:
      if ( a3 != 1 && (*(_BYTE *)(a3 + 184) & 7) == 0 )
      {
        v16 = *((unsigned __int16 *)&Process[1].SecureState.Flags + 3);
        goto LABEL_13;
      }
      goto LABEL_69;
    }
    if ( byte_14043CA10[((LeafVa >> 39) & 0x1FF) - 256] == 1 )
    {
      if ( a3 != 1 && (*(_BYTE *)(a3 + 184) & 7) == 1 )
      {
        v30 = Process[1].ActiveProcessors.Bitmap[2];
        if ( v30 )
        {
          v16 = *(unsigned __int16 *)(v30 + 3182);
LABEL_13:
          v17 = *(ULONG_PTR **)(qword_14043B808 + 8 * v16);
LABEL_14:
          if ( (v49 & 0x80u) == 0 )
          {
            v18 = v17[912];
            if ( v18 < 0x120 )
            {
              v35 = (unsigned __int16 **)(v17 + 517);
              v36 = 0LL;
              while ( 1 )
              {
                v37 = *v35;
                v38 = 0;
                v39 = v36;
                if ( dword_14043B14C )
                  break;
LABEL_77:
                ++v36;
                ++v35;
                if ( v39 >= 1 )
                {
                  v4 = v50;
                  goto LABEL_30;
                }
              }
              while ( 1 )
              {
                v18 += *v37;
                if ( v18 >= 0x120 )
                  break;
                ++v38;
                v37 += 8;
                if ( v38 >= dword_14043B14C )
                  goto LABEL_77;
              }
              v4 = v50;
            }
            v19 = v17[973];
            v20 = v17[957];
            if ( v20 > v19 || v19 - v20 < 0x1080 || (__int64)v17[920] < 288 )
              goto LABEL_30;
          }
          v21 = v44;
          v22 = v45;
          v23 = MmAccessFault(0LL, v14, 0LL, (ULONG_PTR)&v41 + 1);
          if ( BYTE1(v41) == 2 )
          {
            if ( (v49 & 0x80u) == 0 )
              goto LABEL_30;
          }
          else if ( BYTE1(v41) != 1 )
          {
            if ( BYTE1(v41) == 3 )
            {
              BYTE1(v41) = 0;
              v44 = v21;
              v45 = v22;
            }
            else if ( v44 == v21 && v45 == v22 )
            {
              v24 = *(_QWORD *)(v42 + 16 * v44 + 8) + 4095LL;
              v25 = *(_DWORD *)(v42 + 16 * v44) & 0xFFF;
              if ( ++v45 == (unsigned __int64)(v24 + v25) >> 12 )
              {
                v29 = v44 + 1;
                v44 = v29;
                v45 = 0LL;
                if ( v29 < v43 && !*(_QWORD *)(v42 + 16 * v29 + 8) )
                  v44 = v43;
              }
            }
            goto LABEL_25;
          }
          BYTE1(v41) = 0;
LABEL_25:
          if ( v23 < 0 )
          {
            v26 = v23;
            v51 = v23;
            if ( v23 != -1073741819 || v44 == v43 || !(unsigned int)MiLeapPrefetch(&v41, 0LL) )
              goto LABEL_31;
          }
          if ( v48 >= 0x200000 )
            MiPfCoalesceAndIssueIOs(v47, v46, &v48);
          if ( (v49 & 0x400) != 0 )
          {
            v31 = 0;
            v32 = 0;
            while ( 1 )
            {
              v33 = v46;
              if ( !v32 )
                v33 = (_QWORD **)v47;
              v34 = *v33;
              if ( *v33 != v33 )
                break;
LABEL_59:
              if ( (unsigned int)++v32 >= 2 )
                goto LABEL_29;
            }
            while ( ++v31 != 4 )
            {
              v34 = (_QWORD *)*v34;
              if ( v34 == v33 )
                goto LABEL_59;
            }
            v40 = MiPfCompletePrefetchIos(v46, (__int64)v47, a3);
            if ( v40 < 0 )
            {
              if ( v4 >= 0 )
                v4 = v40;
              v50 = v4;
            }
            v48 = 0LL;
          }
          goto LABEL_29;
        }
      }
    }
    else
    {
      if ( LeafVa < v13 )
        goto LABEL_10;
      if ( a3 == 1 )
      {
        v17 = &MiSystemPartition;
        goto LABEL_14;
      }
    }
LABEL_69:
    MiAdvanceFaultList(&v41);
LABEL_29:
    if ( v44 >= v43 )
      goto LABEL_30;
  }
  v44 = v43;
  v45 = 0LL;
LABEL_30:
  v26 = v51;
LABEL_31:
  v27 = MiPfCompletePrefetchIos(v46, (__int64)v47, a3);
  if ( v27 < 0 )
  {
    if ( v4 >= 0 )
    {
      v4 = v27;
      goto LABEL_32;
    }
  }
  else
  {
LABEL_32:
    if ( v4 >= 0 && v26 < 0 && (v49 & 0x8000) != 0 )
      v4 = v26;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  --BYTE6(CurrentThread[1].Queue);
  return (unsigned int)v4;
}
