/*
 * XREFs of ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800821B4
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180081B80 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800842DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18014C734 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014CA0C (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CAnimationTracking::UpdateLongtermStatistics(
        CAnimationTracking *this,
        const struct _GUID *a2,
        const unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  const unsigned __int16 *v10; // r12
  const struct _GUID *v11; // rbp
  __int64 v13; // r14
  __int64 v14; // r9
  __int64 v15; // rdi
  unsigned __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r9d
  int v20; // r9d
  const struct _GUID *v21; // r8
  __int64 v22; // r9
  __int64 Data1_low; // rax
  __int64 v24; // rbx
  __int64 v25; // r10
  char *v26; // rax
  signed __int64 v27; // r8
  int v28; // ecx
  int v29; // edx
  bool v30; // zf
  unsigned int v31; // eax
  __int64 v32; // rax
  int v33; // r9d
  int v34; // r9d
  int v35; // r9d
  int v36; // r9d
  _DWORD *v37; // rax
  unsigned __int64 v38; // r14
  unsigned __int16 *v39; // rax
  unsigned int v40; // r8d
  char v41; // al
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  struct _GUID v44; // xmm0
  void *retaddr; // [rsp+48h] [rbp+0h]

  v10 = a3;
  v11 = a2;
  v13 = 0LL;
  if ( !a3 )
  {
    v21 = a2;
    v15 = 314159LL;
    v22 = 2LL;
    do
    {
      Data1_low = LOBYTE(v21->Data1);
      v21 = (const struct _GUID *)((char *)v21 + 8);
      v15 = v21[-1].Data4[7]
          + 37
          * (v21[-1].Data4[6]
           + 37
           * (v21[-1].Data4[5]
            + 37
            * (v21[-1].Data4[4]
             + 37 * (v21[-1].Data4[3] + 37 * (v21[-1].Data4[2] + 37 * (v21[-1].Data4[1] + 37 * (Data1_low + 37 * v15)))))));
      --v22;
    }
    while ( v22 );
    goto LABEL_15;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( a3[v13] );
  v14 = 2 * v13;
  v15 = 314159LL;
  if ( 2 * v13 >= 8 )
  {
    v16 = (unsigned __int64)v14 >> 3;
    v14 -= 8 * ((unsigned __int64)v14 >> 3);
    do
    {
      v17 = *((unsigned __int8 *)a3 + 6)
          + 37
          * (*((unsigned __int8 *)a3 + 5)
           + 37
           * (*((unsigned __int8 *)a3 + 4)
            + 37
            * (*((unsigned __int8 *)a3 + 3)
             + 37
             * (*((unsigned __int8 *)a3 + 2)
              + 37 * (*((unsigned __int8 *)a3 + 1) + 37 * (*(unsigned __int8 *)a3 + 37 * v15))))));
      v18 = *((unsigned __int8 *)a3 + 7);
      a3 += 4;
      v15 = v18 + 37 * v17;
      --v16;
    }
    while ( v16 );
  }
  if ( v14 < 1 || v14 > 7 )
    goto LABEL_15;
  v19 = v14 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v33 = v20 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 != 1 )
                goto LABEL_15;
              v15 = *(unsigned __int8 *)a3 + 37 * v15;
              a3 = (const unsigned __int16 *)((char *)a3 + 1);
            }
            v15 = *(unsigned __int8 *)a3 + 37 * v15;
            a3 = (const unsigned __int16 *)((char *)a3 + 1);
          }
          v15 = *(unsigned __int8 *)a3 + 37 * v15;
          a3 = (const unsigned __int16 *)((char *)a3 + 1);
        }
        v15 = *(unsigned __int8 *)a3 + 37 * v15;
        a3 = (const unsigned __int16 *)((char *)a3 + 1);
      }
      v15 = *(unsigned __int8 *)a3 + 37 * v15;
      a3 = (const unsigned __int16 *)((char *)a3 + 1);
    }
    v15 = *(unsigned __int8 *)a3 + 37 * v15;
    a3 = (const unsigned __int16 *)((char *)a3 + 1);
  }
  v15 = *(unsigned __int8 *)a3 + 37 * v15;
LABEL_15:
  v24 = 0LL;
  v25 = v15 & (-1LL << (*((_BYTE *)this + 548) & 0x1F));
  while ( 1 )
  {
    if ( v24 )
      goto LABEL_19;
    if ( *((_DWORD *)this + 137) < 0x20u )
      break;
    v24 = *((_QWORD *)this + 69)
        + 8LL
        * ((37
          * (BYTE6(v25)
           + 37
           * (BYTE5(v25)
            + 37
            * (BYTE4(v25)
             + 37 * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
          + HIBYTE(v25)) & (unsigned int)((*((_DWORD *)this + 137) >> 5) - 1));
LABEL_19:
    while ( 1 )
    {
      v24 = *(_QWORD *)v24;
      if ( (v24 & 1) != 0 )
        break;
      if ( v25 == ((-1LL << (*((_BYTE *)this + 548) & 0x1F)) & *(_QWORD *)(v24 + 8)) )
        goto LABEL_21;
    }
    v24 = 0LL;
LABEL_21:
    if ( !v24 )
      break;
    if ( v11 )
    {
      v32 = *(_QWORD *)(v24 + 32) - *(_QWORD *)&v11->Data1;
      if ( !v32 )
        v32 = *(_QWORD *)(v24 + 40) - *(_QWORD *)v11->Data4;
      v30 = v32 == 0;
      goto LABEL_28;
    }
    if ( *(_QWORD *)(v24 + 24) == v13 )
    {
      v26 = *(char **)(v24 + 16);
      v27 = (char *)v10 - v26;
      do
      {
        v28 = *(unsigned __int16 *)&v26[v27];
        v29 = *(unsigned __int16 *)v26 - v28;
        if ( v29 )
          break;
        v26 += 2;
      }
      while ( v28 );
      v30 = v29 == 0;
LABEL_28:
      if ( v30 )
        goto LABEL_29;
    }
  }
  if ( *((_DWORD *)this + 136) < 0x40u )
  {
    v37 = WPF::ProcessHeapImpl::AllocClear(0x98uLL);
    v24 = (__int64)v37;
    if ( !v37 )
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    v37[30] = -1;
    *((_QWORD *)v37 + 6) = v15;
    if ( v11 )
    {
      v44 = *v11;
      LODWORD(v11) = 0;
      *((struct _GUID *)v37 + 2) = v44;
    }
    else
    {
      *((_QWORD *)v37 + 3) = v13;
      v38 = v13 + 1;
      v39 = (unsigned __int16 *)operator new(saturated_mul(v38, 2uLL));
      *(_QWORD *)(v24 + 16) = v39;
      if ( v39 )
        StringCchCopyW(v39, v38, v10);
      else
        LODWORD(v11) = -2147024882;
    }
    *(_QWORD *)(v24 + 8) = v15;
    v40 = *((_DWORD *)this + 137);
    v41 = v40 & 0x1F;
    v42 = *((_QWORD *)this + 69);
    v43 = (((v15 & (unsigned __int64)(-1LL << v41)) >> 56)
         + 37
         * ((unsigned __int8)((v15 & (unsigned __int64)(-1LL << v41)) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v15 & (unsigned __int64)(-1LL << v41)) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v15 & (unsigned __int64)(-1LL << v41)) >> 32)
            + 37
            * ((((unsigned int)v15 & (-1 << v41)) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v15 & (-1 << v41)) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(v15 & (-1 << v41)) >> 8)
               + 37 * ((unsigned __int8)(v15 & (-1 << v41)) + 11623883)))))))) & ((v40 >> 5) - 1);
    *(_QWORD *)v24 = *(_QWORD *)(v42 + 8 * v43);
    *(_QWORD *)(v42 + 8 * v43) = v24;
    ++*((_DWORD *)this + 136);
    if ( (int)v11 < 0 )
    {
      CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        (CAnimationTracking::AnimationScenarioLongtermStatistics *)v24,
        v43);
      v24 = 0LL;
    }
    if ( v24 )
    {
LABEL_29:
      ++*(_DWORD *)(v24 + 56);
      if ( a5 < *(_DWORD *)(v24 + 120) )
        *(_DWORD *)(v24 + 120) = a5;
      if ( a5 > *(_DWORD *)(v24 + 124) )
        *(_DWORD *)(v24 + 124) = a5;
      *(_QWORD *)(v24 + 128) += a6;
      *(_QWORD *)(v24 + 136) += a9;
      *(_QWORD *)(v24 + 144) += a7;
      if ( a4 )
      {
        if ( a4 <= 5 )
        {
          ++*(_DWORD *)(v24 + 100);
        }
        else if ( a4 <= 0xA )
        {
          ++*(_DWORD *)(v24 + 104);
        }
        else if ( a4 <= 0xF )
        {
          ++*(_DWORD *)(v24 + 108);
        }
        else if ( a4 <= 0x19 )
        {
          ++*(_DWORD *)(v24 + 112);
        }
        else if ( a4 <= 0x32 )
        {
          ++*(_DWORD *)(v24 + 116);
        }
      }
      else
      {
        ++*(_DWORD *)(v24 + 96);
      }
      if ( a7 < 0x32 )
      {
        ++*(_DWORD *)(v24 + 68);
      }
      else if ( a7 < 0x64 )
      {
        ++*(_DWORD *)(v24 + 72);
      }
      else if ( a7 < 0xC8 )
      {
        ++*(_DWORD *)(v24 + 76);
      }
      else if ( a7 < 0x1F4 )
      {
        ++*(_DWORD *)(v24 + 80);
      }
      if ( a8 < 0xC8 )
      {
        ++*(_DWORD *)(v24 + 84);
      }
      else if ( a8 < 0x1F4 )
      {
        ++*(_DWORD *)(v24 + 88);
      }
      else if ( a8 < 0x7D0 )
      {
        ++*(_DWORD *)(v24 + 92);
      }
      v31 = 1000 * a9 / a5;
      if ( v31 >= 0x32 )
      {
        if ( v31 >= 0x96 )
          ++*(_DWORD *)(v24 + 64);
        else
          ++*(_DWORD *)(v24 + 60);
      }
    }
  }
  if ( GetTickCount64() >= *((_QWORD *)this + 70) )
    CAnimationTracking::SendLongtermStatistics(this);
}
