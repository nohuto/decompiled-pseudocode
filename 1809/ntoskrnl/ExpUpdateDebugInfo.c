/*
 * XREFs of ExpUpdateDebugInfo @ 0x1408CF6A8
 * Callers:
 *     ExHandleLogBadReference @ 0x14031A004 (ExHandleLogBadReference.c)
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObCloseHandleTableEntry @ 0x1405E7360 (ObCloseHandleTableEntry.c)
 *     ExDestroyHandle @ 0x1405FC318 (ExDestroyHandle.c)
 *     ExDupHandleTable @ 0x140697740 (ExDupHandleTable.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     RtlWalkFrameChain @ 0x1400CCC50 (RtlWalkFrameChain.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CEED4 (ExDereferenceHandleDebugInfo.c)
 *     ExReferenceHandleDebugInfo @ 0x1408CF318 (ExReferenceHandleDebugInfo.c)
 */

void __fastcall ExpUpdateDebugInfo(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // rbx
  char v10; // si
  int v11; // eax
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // r10d
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rdx
  volatile signed __int32 *v20; // rax
  unsigned int v21; // edx
  int v22; // eax
  volatile signed __int32 *v23; // r14
  ULONG v24; // edi
  ULONG v25; // edi
  ULONG v26; // eax

  v8 = ExReferenceHandleDebugInfo(a1);
  v9 = v8;
  if ( v8 )
  {
    v10 = 0;
    v11 = *((_DWORD *)v8 + 2);
    if ( (v11 & 3) != 0 )
    {
      ExAcquireFastMutex((PFAST_MUTEX)(v9 + 4));
      v10 = 1;
      v11 = *((_DWORD *)v9 + 2);
    }
    if ( (v11 & 1) != 0 )
    {
      *((_DWORD *)v9 + 2) = v11 & 0x3FFFFFFE | 0x80000000;
      *((_DWORD *)v9 + 18) = 0;
      memset((void *)(v9 + 20), 0, 160LL * *((unsigned int *)v9 + 1) + 80);
      v11 = *((_DWORD *)v9 + 2);
    }
    if ( (v11 & 2) != 0 && a4 == 2 )
    {
      v12 = *((_DWORD *)v9 + 18);
      v13 = v12;
      if ( (v11 & 0x40000000) != 0 )
        v13 = *((_DWORD *)v9 + 1);
      v14 = 1;
      if ( v13 )
      {
        v15 = *((_DWORD *)v9 + 1);
        while ( 1 )
        {
          v16 = v14 % v15;
          if ( v9[40 * (unsigned int)v16 + 26] == 1 && *(_QWORD *)&v9[40 * v16 + 24] == a3 )
            break;
          if ( ++v14 > v13 )
            goto LABEL_25;
        }
        *((_DWORD *)v9 + 18) = v12 - 1;
        v17 = (v12 - 1) % v15;
        if ( (_DWORD)v17 )
        {
          v18 = 40 * v17;
          v19 = &v9[40 * (v14 % v15)];
          v20 = &v9[v18];
          *((_OWORD *)v19 + 5) = *((_OWORD *)v20 + 5);
          *((_OWORD *)v19 + 6) = *((_OWORD *)v20 + 6);
          *((_OWORD *)v19 + 7) = *((_OWORD *)v20 + 7);
          *((_OWORD *)v19 + 8) = *((_OWORD *)v20 + 8);
          *((_OWORD *)v19 + 9) = *((_OWORD *)v20 + 9);
          *((_OWORD *)v19 + 10) = *((_OWORD *)v20 + 10);
          *((_OWORD *)v19 + 11) = *((_OWORD *)v20 + 11);
          *((_OWORD *)v19 + 12) = *((_OWORD *)v20 + 12);
          *((_OWORD *)v19 + 13) = *((_OWORD *)v20 + 13);
          *((_OWORD *)v19 + 14) = *((_OWORD *)v20 + 14);
        }
      }
    }
    else
    {
      v21 = (unsigned int)_InterlockedIncrement(v9 + 18) % *((_DWORD *)v9 + 1);
      if ( !v21 )
      {
        v22 = *((_DWORD *)v9 + 2) | 0x40000000;
        *((_DWORD *)v9 + 2) = v22;
        if ( (v22 & 4) != 0 )
          __debugbreak();
      }
      v23 = &v9[40 * v21 + 20];
      *(_OWORD *)v23 = *(_OWORD *)(a2 + 1592);
      *((_QWORD *)v23 + 2) = a3;
      *((_DWORD *)v23 + 6) = a4;
      v24 = RtlWalkFrameChain((PVOID *)v23 + 4, 0x10u, 0x300u);
      if ( v24 <= 3 )
        v25 = 0;
      else
        v25 = v24 - 3;
      v26 = RtlWalkFrameChain((PVOID *)&v23[2 * v25 + 8], 16 - v25, 1u);
      memset((void *)&v23[2 * v26 + 8 + 2 * v25], 0, 8LL * (16 - (v26 + v25)));
    }
LABEL_25:
    if ( v10 )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v9 + 4));
    ExDereferenceHandleDebugInfo(a1, v9);
  }
}
