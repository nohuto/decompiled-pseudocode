/*
 * XREFs of PfSnCheckActionsNeeded @ 0x140668FFC
 * Callers:
 *     PfSnBeginScenario @ 0x140668444 (PfSnBeginScenario.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     MmQueryMemoryListInformation @ 0x1400A8910 (MmQueryMemoryListInformation.c)
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     MmGetDefaultPagePriority @ 0x1400E221C (MmGetDefaultPagePriority.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PfpGetPageListCount @ 0x1406635C0 (PfpGetPageListCount.c)
 *     PfSnPrefetchCacheEntryGet @ 0x1406692F8 (PfSnPrefetchCacheEntryGet.c)
 */

__int64 __fastcall PfSnCheckActionsNeeded(unsigned __int8 *a1, __int64 a2, __int64 a3, int *a4, int *a5)
{
  int v5; // edi
  int v7; // esi
  unsigned int v8; // ebx
  unsigned int DefaultPagePriority; // eax
  unsigned int v10; // edx
  int v11; // r8d
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  unsigned __int8 *v14; // r8
  __int64 v15; // rbp
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  unsigned int v19; // r8d
  unsigned __int64 v20; // r15
  unsigned int v21; // r8d
  __int64 PageListCount; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  _DWORD *v26; // rcx
  unsigned int v27; // r8d
  unsigned int v28; // eax
  unsigned int v29; // edx
  int v31; // eax
  int v32; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-120h]
  __int64 v34; // [rsp+40h] [rbp-118h] BYREF
  int *v35; // [rsp+48h] [rbp-110h]
  int *v36; // [rsp+50h] [rbp-108h]
  __int128 v37[6]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v38[72]; // [rsp+C8h] [rbp-90h] BYREF

  v5 = 3;
  v36 = a5;
  v35 = a4;
  v7 = 23;
  v8 = 3;
  if ( (dword_14043D130 & 8) != 0 )
  {
    v7 = 22;
    v5 = 22;
  }
  else
  {
    PsGetPagePriorityThread(a3);
    DefaultPagePriority = MmGetDefaultPagePriority();
    v12 = DefaultPagePriority;
    v13 = DefaultPagePriority - 1;
    if ( v10 > DefaultPagePriority - 1 )
      v10 = DefaultPagePriority;
    if ( v10 <= v13 )
    {
      v5 = 2;
      v7 = 2;
    }
    else
    {
      if ( (dword_14043D3D0 & 0x10) != 0 && !v11 )
      {
        v8 = 1;
        v7 = 14;
      }
      v14 = a1;
      v15 = 314159LL;
      v16 = 8LL;
      do
      {
        v17 = *v14;
        v14 += 8;
        v15 = *(v14 - 1)
            + 37
            * (*(v14 - 2)
             + 37
             * (*(v14 - 3)
              + 37 * (*(v14 - 4) + 37 * (*(v14 - 5) + 37 * (*(v14 - 6) + 37 * (*(v14 - 7) + 37 * (v17 + 37 * v15)))))));
        --v16;
      }
      while ( v16 );
      v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, v37, 0xB0u, 0LL, &v34);
      v18 = (unsigned __int64)(PfpGetPageListCount((__int64)v38, 0, 7u) << 12) >> 18;
      v20 = (unsigned __int64)(PfpGetPageListCount((__int64)v38, v12, v19) << 12) >> 18;
      PageListCount = PfpGetPageListCount((__int64)v38, v13, v21);
      CurrentThread = KeGetCurrentThread();
      v24 = (unsigned __int64)(PageListCount << 12) >> 18;
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&stru_14043D360, 1u);
      v25 = PfSnPrefetchCacheEntryGet(&unk_14043D338, a1, v15, &v32);
      v26 = (_DWORD *)v25;
      if ( v25 )
      {
        if ( v32 )
        {
          v5 = 13;
          if ( v8 >= 2 )
            v7 = 13;
        }
        else
        {
          v27 = v33 - *(_DWORD *)(v25 + 108);
          v28 = *(_DWORD *)(v25 + 112);
          v29 = v8 & 0xFFFFFFFE;
          v5 = (v27 < v28) + 4;
          if ( v27 >= v28 )
            v29 = v8;
          v8 = v29;
          if ( v29 >= 2 )
          {
            v7 = 4;
            if ( v27 >= v26[29] )
            {
              if ( (dword_14043D130 & 2) == 0 )
              {
                if ( v27 >= 0x1B7740 )
                {
                  if ( v27 >= 0x36EE80 )
                    v31 = v18 - v26[26];
                  else
                    v31 = v24 - v26[25];
                }
                else
                {
                  v31 = v20 - v26[24];
                }
                if ( !v31 )
                {
                  v8 = v29 & 0xFFFFFFFD;
                  v7 = 7;
                }
              }
            }
            else
            {
              v8 = v29 & 0xFFFFFFFD;
              v7 = 6;
            }
          }
        }
        v26[27] = v33;
        v26[24] = v20;
        v26[25] = v24;
        v26[26] = v18;
      }
      else
      {
        v7 = 3;
      }
      ExReleaseResourceLite(&stru_14043D360);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
  }
  *v35 = v5;
  *v36 = v7;
  return v8;
}
