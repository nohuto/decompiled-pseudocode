/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B4D2C
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B3DA8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800B2BA4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18018C044 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18018C2E4 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  size_t *v10; // r13
  __int64 v13; // r14
  const struct _GUID *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 Data1_low; // rax
  __int64 v18; // rbx
  __int64 v19; // r10
  __int64 v20; // rax
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rax
  char *v27; // rax
  signed __int64 v28; // r8
  int v29; // ecx
  int v30; // edx
  struct _GUID *v31; // rax
  __int64 v32; // r8
  int v33; // ebp
  unsigned __int64 v34; // r14
  unsigned __int16 *v35; // rax
  unsigned int v36; // r8d
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r9d
  int v40; // r9d
  int v41; // r9d
  int v42; // r9d
  int v43; // r9d
  int v44; // r9d
  void *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v47; // [rsp+60h] [rbp+18h]

  v10 = (size_t *)a3;
  v13 = 0LL;
  if ( !a3 )
  {
    v14 = a2;
    v15 = 2LL;
    v16 = 314159LL;
    do
    {
      Data1_low = LOBYTE(v14->Data1);
      v14 = (const struct _GUID *)((char *)v14 + 8);
      v16 = v14[-1].Data4[7]
          + 37
          * (v14[-1].Data4[6]
           + 37
           * (v14[-1].Data4[5]
            + 37
            * (v14[-1].Data4[4]
             + 37 * (v14[-1].Data4[3] + 37 * (v14[-1].Data4[2] + 37 * (v14[-1].Data4[1] + 37 * (Data1_low + 37 * v16)))))));
      --v15;
    }
    while ( v15 );
    goto LABEL_4;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v23 = 2 * v13;
  v16 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v24 = (unsigned __int64)v23 >> 3;
    v23 -= 8 * ((unsigned __int64)v23 >> 3);
    do
    {
      v25 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v16))))));
      v26 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v16 = v26 + 37 * v25;
      --v24;
    }
    while ( v24 );
  }
  if ( v23 < 1 || v23 > 7 )
    goto LABEL_4;
  v39 = v23 - 1;
  if ( v39 )
  {
    v40 = v39 - 1;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( v43 )
          {
            v44 = v43 - 1;
            if ( v44 )
            {
              if ( v44 != 1 )
                goto LABEL_4;
              v16 = *(unsigned __int8 *)a3 + 37 * v16;
              a3 = (unsigned __int16 *)((char *)a3 + 1);
            }
            v16 = *(unsigned __int8 *)a3 + 37 * v16;
            a3 = (unsigned __int16 *)((char *)a3 + 1);
          }
          v16 = *(unsigned __int8 *)a3 + 37 * v16;
          a3 = (unsigned __int16 *)((char *)a3 + 1);
        }
        v16 = *(unsigned __int8 *)a3 + 37 * v16;
        a3 = (unsigned __int16 *)((char *)a3 + 1);
      }
      v16 = *(unsigned __int8 *)a3 + 37 * v16;
      a3 = (unsigned __int16 *)((char *)a3 + 1);
    }
    v16 = *(unsigned __int8 *)a3 + 37 * v16;
    a3 = (unsigned __int16 *)((char *)a3 + 1);
  }
  v16 = *(unsigned __int8 *)a3 + 37 * v16;
LABEL_4:
  v18 = 0LL;
  v19 = v16 & (-1LL << (*((_BYTE *)this + 548) & 0x1F));
  while ( 1 )
  {
    if ( v18 )
      goto LABEL_8;
    if ( *((_DWORD *)this + 137) < 0x20u )
      break;
    v18 = *((_QWORD *)this + 69)
        + 8LL
        * ((37
          * (BYTE6(v19)
           + 37
           * (BYTE5(v19)
            + 37
            * (BYTE4(v19)
             + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
          + HIBYTE(v19)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1));
LABEL_8:
    while ( 1 )
    {
      v18 = *(_QWORD *)v18;
      if ( (v18 & 1) != 0 )
        break;
      if ( v19 == ((-1LL << (*((_BYTE *)this + 548) & 0x1F)) & *(_QWORD *)(v18 + 8)) )
        goto LABEL_10;
    }
    v18 = 0LL;
LABEL_10:
    if ( !v18 )
      break;
    if ( a2 )
    {
      v20 = *(_QWORD *)(v18 + 32) - *(_QWORD *)&a2->Data1;
      if ( !v20 )
        v20 = *(_QWORD *)(v18 + 40) - *(_QWORD *)a2->Data4;
      v21 = v20 == 0;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v18 + 24) == v13 )
    {
      v27 = *(char **)(v18 + 16);
      v28 = (char *)v10 - v27;
      do
      {
        v29 = *(unsigned __int16 *)&v27[v28];
        v30 = *(unsigned __int16 *)v27 - v29;
        if ( v30 )
          break;
        v27 += 2;
      }
      while ( v29 );
      v21 = v30 == 0;
LABEL_15:
      if ( v21 )
        goto LABEL_16;
    }
  }
  if ( *((_DWORD *)this + 136) < 0x40u )
  {
    v31 = (struct _GUID *)DefaultHeap::AllocClear(0x98uLL);
    v18 = (__int64)v31;
    if ( !v31 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr, v32);
    *(_DWORD *)v31[7].Data4 = -1;
    v33 = 0;
    *(_QWORD *)&v31[3].Data1 = v16;
    if ( a2 )
    {
      v31[2] = *a2;
    }
    else
    {
      *(_QWORD *)v31[1].Data4 = v13;
      v34 = v13 + 1;
      v35 = (unsigned __int16 *)operator new(saturated_mul(v34, 2uLL));
      *(_QWORD *)(v18 + 16) = v35;
      if ( v35 )
        StringCchCopyW(v35, v34, v10);
      else
        v33 = -2147024882;
    }
    *(_QWORD *)(v18 + 8) = v16;
    v36 = *((_DWORD *)this + 137);
    v47 = v16 & (-1LL << (v36 & 0x1F));
    v37 = *((_QWORD *)this + 69);
    v38 = (37
         * (BYTE6(v47)
          + 37
          * (BYTE5(v47)
           + 37
           * (BYTE4(v47)
            + 37
            * ((((unsigned int)v16 & (-1 << (v36 & 0x1F))) >> 24)
             + 37 * (BYTE2(v47) + 37 * (BYTE1(v47) + 37 * ((unsigned __int8)v47 + 11623883)))))))
         + HIBYTE(v47)) & ((v36 >> 5) - 1);
    *(_QWORD *)v18 = *(_QWORD *)(v37 + 8 * v38);
    *(_QWORD *)(v37 + 8 * v38) = v18;
    ++*((_DWORD *)this + 136);
    if ( v33 < 0 )
    {
      CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        (CAnimationTracking::AnimationScenarioLongtermStatistics *)v18,
        v38);
      v18 = 0LL;
    }
    if ( v18 )
    {
LABEL_16:
      ++*(_DWORD *)(v18 + 56);
      if ( a5 < *(_DWORD *)(v18 + 120) )
        *(_DWORD *)(v18 + 120) = a5;
      if ( a5 > *(_DWORD *)(v18 + 124) )
        *(_DWORD *)(v18 + 124) = a5;
      *(_QWORD *)(v18 + 128) += a6;
      *(_QWORD *)(v18 + 136) += a9;
      *(_QWORD *)(v18 + 144) += a7;
      if ( a4 )
      {
        if ( a4 <= 5 )
        {
          ++*(_DWORD *)(v18 + 100);
        }
        else if ( a4 <= 0xA )
        {
          ++*(_DWORD *)(v18 + 104);
        }
        else if ( a4 <= 0xF )
        {
          ++*(_DWORD *)(v18 + 108);
        }
        else if ( a4 <= 0x19 )
        {
          ++*(_DWORD *)(v18 + 112);
        }
        else if ( a4 <= 0x32 )
        {
          ++*(_DWORD *)(v18 + 116);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 96);
      }
      if ( a7 >= 0x32 )
      {
        if ( a7 < 0x64 )
        {
          ++*(_DWORD *)(v18 + 72);
        }
        else if ( a7 < 0xC8 )
        {
          ++*(_DWORD *)(v18 + 76);
        }
        else if ( a7 < 0x1F4 )
        {
          ++*(_DWORD *)(v18 + 80);
        }
      }
      else
      {
        ++*(_DWORD *)(v18 + 68);
      }
      if ( a8 < 0xC8 )
      {
        ++*(_DWORD *)(v18 + 84);
      }
      else if ( a8 < 0x1F4 )
      {
        ++*(_DWORD *)(v18 + 88);
      }
      else if ( a8 < 0x7D0 )
      {
        ++*(_DWORD *)(v18 + 92);
      }
      v22 = 1000 * a9 / a5;
      if ( v22 >= 0x32 )
      {
        if ( v22 >= 0x96 )
          ++*(_DWORD *)(v18 + 64);
        else
          ++*(_DWORD *)(v18 + 60);
      }
    }
  }
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
