/*
 * XREFs of RaidInitializePerfOptsPassive @ 0x1C001F5AC
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C001F31C (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAdapterReleaseStartIoLock @ 0x1C0005000 (RaidAdapterReleaseStartIoLock.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C0006268 (RaidAdapterAcquireStartIoLock.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaidInitializePerfOptsPassive(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // r13
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned int v5; // ebp
  KIRQL v6; // r12
  USHORT ActiveGroupCount; // ax
  unsigned int v8; // r15d
  unsigned __int16 v9; // r14
  __int64 v10; // r12
  unsigned __int8 v11; // si
  ULONG ActiveProcessorCount; // ebp
  __int64 v13; // rdi
  void *v14; // rcx
  USHORT v15; // r14
  unsigned int v16; // ebp
  char *v17; // rdi
  unsigned int v18; // ebx
  ULONG v19; // eax
  unsigned int v20; // ebx
  int v21; // r15d
  int v22; // r9d
  unsigned int i; // r8d
  __int64 v24; // r10
  unsigned int v26; // edi
  unsigned int v27; // eax
  size_t v28; // r14
  _WORD *v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // edi
  char *v32; // rax
  char *v33; // r13
  unsigned __int16 v34; // r8
  unsigned int v35; // ebp
  char *v36; // rdx
  unsigned __int16 v37; // r10
  unsigned int v38; // r11d
  unsigned int v39; // r14d
  __int64 v40; // r15
  char v41; // r12
  USHORT v42; // r12
  struct _GROUP_AFFINITY *v43; // r13
  unsigned int v44; // ecx
  unsigned __int64 Mask; // rdx
  unsigned __int16 v46; // r9
  int v47; // r15d
  unsigned __int16 v48; // r8
  unsigned __int64 v49; // r10
  __int64 v50; // rax
  unsigned int v51; // edx
  char v52; // r8
  __int64 v53; // rdi
  int v54; // ecx
  char v55; // r14
  unsigned int v56; // r8d
  unsigned int v57; // r11d
  int v58; // r9d
  unsigned int v59; // eax
  unsigned int v60; // r8d
  __int64 v61; // r10
  __int64 v62; // rdx
  unsigned __int16 v63; // r9
  __int64 v64; // r10
  unsigned __int16 v65; // r9
  char v66; // cl
  struct _SLIST_ENTRY *PoolWithTag; // r15
  unsigned int v68; // r12d
  __int64 v69; // r13
  PVOID v70; // rax
  __int64 v71; // r14
  unsigned int v72; // r14d
  unsigned int *v73; // r13
  unsigned int v74; // ebx
  ULONG v75; // eax
  unsigned __int16 v76; // r8
  int v77; // r10d
  char *v78; // r12
  unsigned int v79; // r13d
  char *v80; // rdx
  int v81; // r15d
  unsigned int j; // r9d
  __int64 v83; // rdi
  int v84; // ecx
  unsigned int v85; // edx
  signed __int32 v86[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v87; // [rsp+20h] [rbp-78h]
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-74h] BYREF
  unsigned int v89; // [rsp+28h] [rbp-70h]
  unsigned int v90; // [rsp+2Ch] [rbp-6Ch]
  PVOID P; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v92[4]; // [rsp+38h] [rbp-60h] BYREF
  KIRQL Size; // [rsp+A8h] [rbp+10h]
  USHORT Sizea; // [rsp+A8h] [rbp+10h]
  size_t Sizeb; // [rsp+A8h] [rbp+10h]
  __int16 v97; // [rsp+B0h] [rbp+18h]
  unsigned int v98; // [rsp+B8h] [rbp+20h]

  v1 = *(_WORD *)(a1 + 4804);
  v2 = 0LL;
  v3 = *(_DWORD *)(a1 + 4808);
  v4 = a1;
  v5 = 0;
  v87 = 0;
  *(_WORD *)(a1 + 4804) = 0;
  if ( (int)v3 < 1 )
    v3 = -v3;
  *(_DWORD *)(a1 + 4808) = 1;
  if ( v3 > 1 )
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * v3, 0x54436152u);
    if ( !PoolWithTag )
      goto LABEL_91;
    v68 = KeQueryHighestNodeNumber() + 1;
    v69 = v68;
    v70 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, (unsigned __int64)v68 << 6, 0x54436152u);
    *(_QWORD *)(v4 + 4816) = v70;
    if ( !v70 )
      goto LABEL_91;
    if ( v68 )
    {
      v71 = 0LL;
      do
      {
        InitializeSListHead((PSLIST_HEADER)(v71 + *(_QWORD *)(v4 + 4816)));
        v71 += 64LL;
        --v69;
      }
      while ( v69 );
    }
    v72 = 0;
    v73 = (unsigned int *)&PoolWithTag[1].Next + 1;
    do
    {
      *v73 = v72;
      ExpInterlockedPushEntrySList(
        (PSLIST_HEADER)(*(_QWORD *)(v4 + 4816) + ((unsigned __int64)(v72 % v68) << 6)),
        PoolWithTag);
      ++v72;
      v73 += 8;
      PoolWithTag += 2;
    }
    while ( v72 < v3 );
    v5 = v87;
    v2 = 0LL;
    RaidAdapterAcquireStartIoLock(v4, v92);
    *(_DWORD *)(v4 + 4808) = v3;
    RaidAdapterReleaseStartIoLock(v4, v92);
  }
  if ( (v1 & 1) == 0 )
    goto LABEL_16;
  v6 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
  Size = v6;
  if ( _InterlockedIncrement(&g_RaidPerfRedirectRefCount) == 1 )
  {
    ActiveGroupCount = KeQueryActiveGroupCount();
    v8 = ActiveGroupCount;
    g_RaidPerProcessorState = ExAllocatePoolWithTag(
                                NonPagedPoolNx,
                                (unsigned __int64)ActiveGroupCount << 13,
                                0x72446152u);
    if ( !g_RaidPerProcessorState
      || (g_RaidDPCRedirectionProcessors = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v8, 0x72446152u)) == 0LL )
    {
      if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
      {
        if ( g_RaidPerProcessorState )
        {
          ExFreePoolWithTag(g_RaidPerProcessorState, 0x72446152u);
          g_RaidPerProcessorState = 0LL;
        }
        if ( g_RaidDPCRedirectionProcessors )
        {
          ExFreePoolWithTag(g_RaidDPCRedirectionProcessors, 0x72446152u);
          g_RaidDPCRedirectionProcessors = 0LL;
        }
        g_RaidPerfRedirectGroupCount = 0;
      }
      KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v6);
      goto LABEL_91;
    }
    v9 = 0;
    if ( (_WORD)v8 )
    {
      v10 = 0LL;
      do
      {
        ProcNumber.Group = v9;
        ProcNumber.Reserved = 0;
        v11 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(v9);
        if ( ActiveProcessorCount )
        {
          do
          {
            ProcNumber.Number = v11;
            v13 = (v2 + v11) << 7;
            KeInitializeDpc(
              (PRKDPC)((char *)g_RaidPerProcessorState + v13),
              (PKDEFERRED_ROUTINE)RaidpAdapterRedirectDpcRoutine,
              (char *)g_RaidPerProcessorState + v13);
            KeSetImportanceDpc((PRKDPC)((char *)g_RaidPerProcessorState + v13), MediumHighImportance);
            KeSetTargetProcessorDpcEx((PKDPC)((char *)g_RaidPerProcessorState + v13), &ProcNumber);
            InitializeSListHead((PSLIST_HEADER)((char *)g_RaidPerProcessorState + v13 + 64));
            ++v11;
            *(_DWORD *)((char *)g_RaidPerProcessorState + v13 + 80) = 0;
          }
          while ( v11 < ActiveProcessorCount );
        }
        ++v9;
        v2 += 64LL;
        *(_DWORD *)((char *)g_RaidDPCRedirectionProcessors + v10) = ActiveProcessorCount;
        v10 += 4LL;
      }
      while ( v9 < (unsigned __int16)v8 );
      v4 = a1;
      v5 = v87;
      v6 = Size;
    }
    _InterlockedOr(v86, 0);
    g_RaidPerfRedirectGroupCount = (unsigned __int16)v8;
  }
  *(_WORD *)(v4 + 4804) |= 1u;
  KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v6);
  if ( (v1 & 2) == 0 || (v97 = v1 & 0x3FC, (v1 & 0x3FC) == 0) )
  {
LABEL_16:
    v14 = *(void **)(v4 + 4824);
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0x72446152u);
      *(_QWORD *)(v4 + 4824) = 0LL;
      *(_WORD *)(v4 + 4806) = 0;
    }
    return v5;
  }
  v26 = (unsigned __int8)(v1 >> 2);
  v89 = v26;
  v27 = v26 + 281;
  if ( (((_BYTE)v26 + 24) & 1) == 0 )
    v27 = v26 + 280;
  v28 = v27;
  Sizeb = v27;
  v29 = ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x72446152u);
  if ( !v29 )
  {
LABEL_91:
    v5 = -1073741670;
    goto LABEL_16;
  }
  v30 = v26 + 4;
  v31 = v26 + 5;
  if ( (v30 & 1) == 0 )
    v31 = v30;
  v98 = v31;
  v32 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v31 * *(unsigned __int16 *)(v4 + 4806), 0x72446152u);
  P = v32;
  v33 = v32;
  if ( !v32 )
  {
    ExFreePoolWithTag(v29, 0x72446152u);
    goto LABEL_91;
  }
  memset(v32, 0, v31 * *(unsigned __int16 *)(v4 + 4806));
  v34 = 0;
  if ( *(_WORD *)(v4 + 4806) )
  {
    v35 = v31;
    do
    {
      v36 = &v33[v34 * v35];
      v37 = 0;
      v38 = 0;
      v39 = v34 << 6;
      *(_WORD *)v36 = v34;
      do
      {
        v40 = *(_QWORD *)(v4 + 4824);
        v41 = *(_BYTE *)(v39 + v40);
        if ( v41 != -1 )
        {
          v63 = 0;
          if ( v37 )
          {
            while ( v36[v63 + 4] != *(_BYTE *)((v34 << 6) + v38 + v40) )
            {
              if ( ++v63 >= v37 )
                goto LABEL_87;
            }
          }
          else
          {
LABEL_87:
            v36[v37 + 4] = v41;
            ++*((_WORD *)v36 + 1);
            ++v37;
          }
        }
        ++v38;
        ++v39;
      }
      while ( v38 < 0x40 );
      v33 = (char *)P;
      v35 = v31;
      ++v34;
    }
    while ( v34 < *(_WORD *)(v4 + 4806) );
    v5 = v87;
    v28 = Sizeb;
  }
  v42 = 0;
  if ( KeQueryHighestNodeNumber() != -1 )
  {
    v43 = (struct _GROUP_AFFINITY *)(v29 + 132);
    v5 = 0;
    do
    {
      memset(v29, 0, v28);
      KeQueryNodeActiveAffinity(v42, v43, v29);
      LOWORD(v44) = *v29;
      if ( *v29 )
      {
        Mask = v43->Mask;
        v46 = 0;
        v47 = 0;
        v48 = 0;
        if ( v43->Mask )
        {
          do
          {
            v49 = Mask;
            if ( (Mask & 1) != 0 )
            {
              v50 = v46++;
              *(_DWORD *)&v29[2 * v50 + 2] = v48;
            }
            ++v48;
            Mask >>= 1;
          }
          while ( v49 >= 2 );
          LOWORD(v44) = *v29;
        }
        v51 = 0;
        if ( (_WORD)v44 )
        {
          do
          {
            v52 = 0;
            v53 = *(_QWORD *)(v4 + 4824);
            v54 = (unsigned __int16)v29[136] << 6;
            v55 = *(_BYTE *)((unsigned int)(v54 + *(_DWORD *)&v29[2 * v51 + 2]) + v53);
            if ( v55 == -1 )
            {
              ++v47;
            }
            else
            {
              v64 = *((unsigned int *)v29 + 65);
              v65 = 0;
              if ( !(_DWORD)v64 )
                goto LABEL_88;
              v66 = *(_BYTE *)((unsigned int)(v54 + *(_DWORD *)&v29[2 * v51 + 2]) + v53);
              do
              {
                if ( v66 == *((_BYTE *)v29 + v65 + 280) )
                  v52 = 1;
                ++v65;
              }
              while ( v65 < (unsigned int)v64 );
              if ( !v52 )
              {
LABEL_88:
                *((_BYTE *)v29 + v64 + 280) = v55;
                ++*((_DWORD *)v29 + 65);
              }
            }
            v44 = (unsigned __int16)*v29;
            ++v51;
          }
          while ( v51 < v44 );
          v28 = Sizeb;
        }
        v56 = *((_DWORD *)v29 + 65);
        LOWORD(v57) = 0;
        if ( v56 )
        {
          if ( v47 )
          {
            v58 = 0;
            v59 = (v47 + v56 - 1) / v56;
            v60 = 0;
            if ( (_WORD)v44 )
            {
              do
              {
                v61 = *(_QWORD *)(v4 + 4824);
                v62 = ((unsigned __int16)v29[136] << 6) + *(_DWORD *)&v29[2 * v60 + 2];
                if ( *(_BYTE *)(v62 + v61) == 0xFF )
                {
                  ++v58;
                  *(_BYTE *)(v62 + v61) = *((_BYTE *)v29 + (unsigned __int16)v57 + 280);
                  if ( v58 == v59 )
                  {
                    v58 = 0;
                    v57 = ((unsigned int)(unsigned __int16)v57 + 1) % *((_DWORD *)v29 + 65);
                  }
                }
                ++v60;
              }
              while ( v60 < (unsigned __int16)*v29 );
              v43 = (struct _GROUP_AFFINITY *)(v29 + 132);
            }
          }
        }
      }
      ++v42;
    }
    while ( v42 < (unsigned int)KeQueryHighestNodeNumber() + 1 );
    v33 = (char *)P;
  }
  ExFreePoolWithTag(v29, 0x72446152u);
  v15 = 0;
  Sizea = 0;
  if ( *(_WORD *)(v4 + 4806) )
  {
    v16 = v98;
    do
    {
      v17 = &v33[v15 * v16];
      if ( *((_WORD *)v17 + 1) )
      {
        v18 = *((unsigned __int16 *)v17 + 1);
        v19 = (v18 + KeQueryActiveProcessorCountEx(v15) - 1) / v18;
        if ( v19 != 1 )
        {
          LOWORD(v20) = 0;
          v21 = v15 << 6;
          v22 = 0;
          for ( i = 0; i < 0x40; ++i )
          {
            v24 = *(_QWORD *)(v4 + 4824);
            if ( *(_BYTE *)(v21 + i + v24) == 0xFF )
            {
              ++v22;
              *(_BYTE *)(v21 + i + v24) = v17[(unsigned __int16)v20 + 4];
              if ( v22 == v19 - 1 )
              {
                v22 = 0;
                v20 = ((unsigned int)(unsigned __int16)v20 + 1) % *((unsigned __int16 *)v17 + 1);
              }
            }
          }
          v16 = v98;
        }
      }
      else
      {
        LOWORD(v74) = 0;
        v75 = KeQueryActiveProcessorCountEx(v15);
        v76 = 0;
        v77 = 0;
        v78 = (char *)P;
        v79 = (v89 + v75 - 1) / v89;
        v90 = v79;
        v80 = (char *)P;
        v81 = v15 << 6;
        for ( j = 0; j < 0x40; ++j )
        {
          v83 = *(_QWORD *)(v4 + 4824);
          if ( *(_BYTE *)(v81 + j + v83) == 0xFF )
          {
            if ( !*((_WORD *)v80 + 1) )
            {
              v84 = (unsigned __int16)v74;
              do
              {
                v85 = (v84 + 1) % (unsigned int)*(unsigned __int16 *)(v4 + 4806);
                v84 = (unsigned __int16)v85;
                LOWORD(v74) = v85;
                v80 = (char *)P + v98 * (unsigned __int16)v85;
              }
              while ( !*((_WORD *)v80 + 1) );
              v4 = a1;
              v78 = (char *)P;
              v16 = v98;
              v79 = v90;
            }
            ++v77;
            *(_BYTE *)(v81 + j + v83) = v80[v76 + 4];
            if ( v77 == v79 )
            {
              ++v76;
              v77 = 0;
              if ( v76 == *((_WORD *)v80 + 1) )
              {
                v74 = ((unsigned int)(unsigned __int16)v74 + 1) % *(unsigned __int16 *)(v4 + 4806);
                v80 = &v78[v16 * v74];
                v76 = 0;
              }
            }
          }
        }
        v15 = Sizea;
        v33 = (char *)P;
      }
      Sizea = ++v15;
    }
    while ( v15 < *(_WORD *)(v4 + 4806) );
    v5 = v87;
  }
  ExFreePoolWithTag(v33, 0x72446152u);
  *(_WORD *)(v4 + 4804) = v97 | *(_WORD *)(v4 + 4804) & 0xFC03 | 2;
  return v5;
}
