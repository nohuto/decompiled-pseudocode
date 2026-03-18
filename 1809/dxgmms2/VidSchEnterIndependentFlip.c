/*
 * XREFs of VidSchEnterIndependentFlip @ 0x1C0016E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C00174EC (--0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     McTemplateK0txqqqtxtx @ 0x1C0031CA0 (McTemplateK0txqqqtxtx.c)
 */

_QWORD *__fastcall VidSchEnterIndependentFlip(
        __int64 a1,
        unsigned int a2,
        struct _LUID *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _QWORD *a8)
{
  _QWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r11
  unsigned int v14; // r15d
  unsigned int v15; // ebx
  __int64 v16; // rdi
  unsigned int v17; // r8d
  unsigned int v18; // r9d
  unsigned int i; // r10d
  unsigned int v20; // r13d
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r13d
  int v24; // r12d
  int v25; // r8d
  __int64 v26; // r9
  unsigned int v27; // edx
  int v28; // r9d
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // r12
  __int64 v32; // rbx
  int v33; // r9d
  unsigned int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  bool v39; // zf
  int v40; // edx
  int v41; // r8d
  _QWORD *v42; // r9
  __int64 v43; // r14
  unsigned int v44; // edi
  char v45; // si
  unsigned int v46; // ebx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  unsigned int v49; // [rsp+68h] [rbp-59h]
  struct _LUID DestinationLuid; // [rsp+70h] [rbp-51h] BYREF
  unsigned int v51; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v52; // [rsp+7Ch] [rbp-45h]
  unsigned int v53; // [rsp+80h] [rbp-41h]
  __int64 v54; // [rsp+88h] [rbp-39h]
  unsigned int v55; // [rsp+90h] [rbp-31h] BYREF
  int v56; // [rsp+94h] [rbp-2Dh]
  unsigned int v57; // [rsp+98h] [rbp-29h]
  __int64 v58; // [rsp+A0h] [rbp-21h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-19h] BYREF
  unsigned int v60; // [rsp+108h] [rbp+47h]

  *a7 = 0;
  result = a8;
  *a8 = 0LL;
  if ( *(_BYTE *)(a1 + 47) )
  {
    RtlCopyLuid(&DestinationLuid, a3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
    v12 = 1LL;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0LL;
    v17 = a2;
    v18 = 0;
    for ( i = 0; v17; v17 >>= 1 )
    {
      if ( (v17 & 1) != 0 )
        break;
      ++v18;
    }
    while ( 1 )
    {
      v20 = v17;
      if ( !v17 )
        break;
      v11 = 216LL * *(unsigned int *)(a5 + 4LL * i);
      v21 = *(int *)(v11 + *(_QWORD *)(a1 + 8LL * v18 + 2576) + 164);
      if ( (int)v21 > -1 )
        v16 = *(_QWORD *)(a1 + 2704) + 136 * v21;
      else
        v16 = 0LL;
      v12 = 1LL;
      if ( v16 )
        v13 = 1;
      else
        ++v15;
      v22 = v14 + 1;
      if ( !v16 )
        v22 = v14;
      v17 >>= 1;
      v14 = v22;
      if ( v20 >= 2 )
      {
        do
        {
          if ( (v17 & 1) != 0 )
            break;
          ++v18;
          v17 >>= 1;
        }
        while ( v17 );
      }
      ++i;
    }
    v23 = 0;
    v24 = 0;
    if ( v15 && v14 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(1LL, v11);
      v47[5] = v14;
      v47[6] = v15;
      v47[3] = 281LL;
      v47[4] = 0x8000LL;
      v47[7] = a1;
      WdLogEvent5_WdCriticalError(v47);
      __debugbreak();
      goto LABEL_55;
    }
    if ( !v13 )
    {
      v25 = *(_DWORD *)(a1 + 2848);
      if ( v25 > 0 )
      {
        v26 = *(_QWORD *)(a1 + 2704);
        v11 = v26;
        while ( *(_QWORD *)v11 )
        {
LABEL_55:
          ++v24;
          v11 += 136LL;
          if ( v24 >= v25 )
            goto LABEL_23;
        }
        v16 = v26 + 136LL * v24;
        if ( v24 > *(_DWORD *)(a1 + 2864) )
          *(_DWORD *)(a1 + 2864) = v24;
      }
    }
LABEL_23:
    if ( !v16 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11);
      v48[3] = 281LL;
      v48[4] = 0x2000LL;
      v48[5] = *(unsigned int *)(a1 + 2848);
      v48[6] = *(int *)(a1 + 2864);
      v48[7] = a1;
      WdLogEvent5_WdCriticalError(v48);
      __debugbreak();
      goto LABEL_58;
    }
    if ( v13 )
    {
      v31 = a4;
    }
    else
    {
      *(_DWORD *)(v16 + 16) = a2;
      memset((void *)(v16 + 20), 0, 0x40uLL);
      v27 = 0;
      v14 = 0;
      v28 = 1;
      if ( a2 )
      {
        while ( ((unsigned __int8)a2 & (unsigned __int8)v28) == 0 )
        {
LABEL_58:
          v14 += v28;
          a2 >>= 1;
          if ( !a2 )
            break;
        }
      }
      while ( 1 )
      {
        v60 = a2;
        if ( !a2 )
          break;
        v49 = v28 + v27;
        *(_DWORD *)(v16 + 4LL * v27 + 20) = *(_DWORD *)(a5 + 4LL * v23);
        v29 = 216LL * *(unsigned int *)(a5 + 4LL * v23);
        *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v14 + 2576) + v29 + 164) = v24;
        v30 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v29, v14);
        v30[3] = *a3;
        v30[4] = a4;
        v30[5] = *(unsigned int *)(a5 + 4LL * v23);
        WdLogEvent5_WdPresentTokenEvent(v30);
        a2 >>= 1;
        v28 = 1;
        if ( v60 >= 2 )
        {
          do
          {
            if ( (a2 & 1) != 0 )
              break;
            ++v14;
            a2 >>= 1;
          }
          while ( a2 );
        }
        v27 = v49;
        ++v23;
      }
      v31 = a4;
      *(_QWORD *)(v16 + 112) = 1LL;
      *(struct _LUID *)v16 = DestinationLuid;
      *(_QWORD *)(v16 + 8) = a4;
      *(_WORD *)(v16 + 96) = 0;
      *(_BYTE *)(v16 + 98) = 0;
    }
    *(_DWORD *)(v16 + 100) = a6;
    v32 = *(_QWORD *)(a1 + 2856);
    *(_QWORD *)(v16 + 88) = v32;
    VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
      (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v51,
      (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v16);
    v34 = v51;
    v35 = v53;
    while ( v34 )
    {
      v36 = 216LL * *(unsigned int *)(v54 + 4 * v35) + *(_QWORD *)(a1 + 8LL * v52 + 2576) + 128LL;
      v37 = *(_QWORD *)(v16 + 88);
      v38 = 5LL * *(unsigned int *)(v36 + 208);
      *(_QWORD *)(v36 + 8 * v38 + 80) = MEMORY[0xFFFFF78000000320];
      *(_WORD *)(v36 + 8 * v38 + 48) = 257;
      *(struct _LUID *)(v36 + 8 * v38 + 52) = DestinationLuid;
      *(_QWORD *)(v36 + 8 * v38 + 64) = v31;
      *(_QWORD *)(v36 + 8 * v38 + 72) = v37;
      *(_DWORD *)(v36 + 208) = ((_BYTE)v33 + (unsigned __int8)*(_DWORD *)(v36 + 208)) & 3;
      v39 = v51 >> 1 == 0;
      v34 = v51 >> 1;
      v51 >>= 1;
      if ( !v39 )
      {
        do
        {
          if ( ((unsigned __int8)v34 & (unsigned __int8)v33) != 0 )
            break;
          v52 += v33;
          v34 >>= 1;
        }
        while ( v34 );
        v51 = v34;
      }
      v35 = v33 + v53;
      v53 += v33;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v39 = bTracingEnabled == 0;
    *a8 = v32;
    if ( !v39 )
    {
      VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        (VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *)&v55,
        (struct _VIDSCH_INDEPENDENT_FLIP_STATE *)v16);
      v43 = v58;
      v44 = v57;
      v45 = v56;
      v46 = v55;
      while ( v46 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        {
          McTemplateK0txqqqtxtx(
            v44,
            v40,
            v41,
            1,
            DestinationLuid.LowPart,
            v45,
            *(_DWORD *)(v43 + 4LL * v44),
            a6,
            0,
            v31,
            1,
            *v42);
          v42 = a8;
        }
        while ( 1 )
        {
          v46 >>= 1;
          if ( !v46 || (v46 & 1) != 0 )
            break;
          ++v45;
        }
        ++v44;
      }
    }
    result = a7;
    *a7 = 1;
  }
  return result;
}
