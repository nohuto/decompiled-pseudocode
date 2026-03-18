/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0080DD0
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0080D00 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00597EC (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005A9F8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DCEC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DE1C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C0081038 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        __int64 a2,
        int a3,
        struct _MDL *a4,
        SIZE_T Size,
        NTSTATUS (__stdcall *CopyFunction)(PMDL DestinationMdl, PMDL SourceMdl, PVOID Context),
        PVOID Context,
        char a8)
{
  char v8; // r15
  __int64 v9; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v10; // r14
  int v11; // r12d
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  void *v15; // r10
  ULONG_PTR v16; // r12
  char v17; // si
  struct _MDL *v18; // rcx
  unsigned __int64 v19; // rbx
  struct _EPROCESS *v20; // rax
  HANDLE v22; // rax
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  _QWORD *v25; // rax
  __int64 v26; // rdx
  const GUID *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  ULONG_PTR v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v36; // rax
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned int v42; // edx
  __int64 v43; // r9
  __int64 *QuadPart; // r8
  __int64 v45; // rsi
  __int64 v46; // rdx
  PHYSICAL_ADDRESS v47; // rdi
  union _LARGE_INTEGER v48; // r14
  PHYSICAL_ADDRESS v49; // rbx
  SIZE_T v50; // r13
  _QWORD *v51; // rax
  __int64 CurrentProcess; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  ULONG_PTR v56; // [rsp+30h] [rbp-48h] BYREF
  union _LARGE_INTEGER v57; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v58; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v59; // [rsp+48h] [rbp-30h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-20h] BYREF
  union _LARGE_INTEGER v62; // [rsp+60h] [rbp-18h] BYREF
  char *VirtualAddress; // [rsp+C8h] [rbp+50h]
  unsigned __int64 v67; // [rsp+100h] [rbp+88h]

  v8 = 0;
  v9 = a3;
  v10 = a1;
  v11 = 0;
  if ( *((_DWORD *)a1 + 54) == 4 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v25[3] = 270LL;
    v25[4] = 52LL;
    v25[5] = 11LL;
    v25[6] = v9;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v10 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(a1, i);
      v11 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, v26, v27);
      if ( v11 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28);
        v30[3] = i;
        v30[4] = v10;
        v30[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v30);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)v10 + 10) + 32LL) + 8LL),
          i);
        return (unsigned int)v11;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)v10 + 9) )
      break;
  }
  VirtualAddress = (char *)*((_QWORD *)v10 + 6);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((struct VIDMM_RECYCLE_RANGE **)v10) )
  {
    if ( (int)v9 >= 0 )
    {
      if ( (int)v9 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v9 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v14, v13);
        v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53);
        v55[3] = 270LL;
        v55[4] = 1LL;
        v55[5] = CurrentProcess;
        v55[6] = v10;
        v55[7] = v9;
        WdLogEvent5_WdCriticalError(v55);
      }
    }
    return (unsigned int)v11;
  }
  if ( (unsigned int)v9 > 1 )
  {
    v16 = *((_QWORD *)v10 + 17);
    v67 = v16;
    goto LABEL_9;
  }
  v16 = Size;
  v67 = Size;
  if ( *((_QWORD *)v10 + 24) )
  {
LABEL_9:
    v17 = a8;
    if ( (_DWORD)v9 == 2 )
    {
      Interval.QuadPart = -10000LL;
      v32 = v16;
      while ( 1 )
      {
        v56 = v32;
        v11 = MmRotatePhysicalView(v15, &v56, a4, MmToRegularMemory, CopyFunction, Context);
        if ( v11 != 1073741849 )
          break;
        v33 = WdLogNewEntry5_WdWarning(v18, v13);
        WdLogEvent5_WdWarning(v33);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v34, &EventPerformanceWarning, v35, 12);
        v32 -= v56;
        VirtualAddress += v56;
        KeDelayExecutionThread(0, 0, &Interval);
        v15 = VirtualAddress;
      }
    }
    else if ( (_DWORD)v9 == 3 )
    {
      v57.QuadPart = -10000LL;
      v58 = v16;
      while ( 1 )
      {
        v24 = MmRotatePhysicalView(v15, &v58, a4, MmToRegularMemoryNoCopy, CopyFunction, Context);
        v11 = v24;
        if ( (a8 & 1) == 0 || v24 != 1073741849 )
          break;
        v36 = WdLogNewEntry5_WdWarning(v18, v13);
        WdLogEvent5_WdWarning(v36);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v37, &EventPerformanceWarning, v38, 12);
        while ( MmRotatePhysicalView(
                  VirtualAddress,
                  &v58,
                  *((PMDL *)v10 + 18),
                  MmToFrameBufferNoCopy,
                  CopyFunction,
                  Context) < 0 )
          KeDelayExecutionThread(0, 0, &v57);
        KeDelayExecutionThread(0, 0, &v57);
        v17 = a8;
        v15 = VirtualAddress;
        LODWORD(v9) = a3;
      }
    }
    else
    {
      if ( (a8 & 2) != 0 )
      {
        v18 = (struct _MDL *)*((_QWORD *)v10 + 18);
        a4 = v18;
      }
      else
      {
        v18 = a4;
      }
      NumberOfBytes = v16;
      if ( g_bInjectRotateFailure )
      {
        v11 = -1073741823;
      }
      else
      {
        v11 = MmRotatePhysicalView(v15, &NumberOfBytes, v18, (MM_ROTATE_DIRECTION)v9, CopyFunction, Context);
        if ( v11 >= 0 )
          goto LABEL_15;
      }
      if ( (a8 & 2) != 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v10 + 18), 0);
        *((_QWORD *)v10 + 18) = 0LL;
      }
    }
    if ( v11 < 0 )
    {
      if ( v11 == -1073741558 && (unsigned int)(v9 - 2) <= 1 )
      {
        v39 = *((_QWORD *)v10 + 18);
        if ( v39 )
        {
          v40 = 1LL;
          v41 = *(_QWORD *)(v39 + 48);
          v42 = *(_DWORD *)(v39 + 40) >> 12;
          v43 = v41;
          if ( v42 > 1 )
          {
            QuadPart = (__int64 *)(v39 + 56);
            v57.QuadPart = v39 + 56;
            v45 = v42 - 1;
            do
            {
              v46 = *QuadPart;
              if ( *QuadPart == v43 + 1 )
              {
                ++v40;
              }
              else
              {
                v47.QuadPart = v41 << 12;
                v62.QuadPart = v40 << 12;
                v41 = v46;
                if ( MmIsIoSpaceActive(v47, v40 << 12) )
                {
                  v48 = v62;
                  do
                  {
                    v62.QuadPart = -10000LL;
                    KeDelayExecutionThread(0, 0, &v62);
                  }
                  while ( MmIsIoSpaceActive(v47, v48.QuadPart) );
                }
                QuadPart = (__int64 *)v57.QuadPart;
                v46 = v41;
                v40 = 1LL;
              }
              ++QuadPart;
              v43 = v46;
              v57.QuadPart = (LONGLONG)QuadPart;
              --v45;
            }
            while ( v45 );
            v17 = a8;
            v10 = a1;
            LODWORD(v9) = a3;
          }
          v58 = v40 << 12;
          v49.QuadPart = v41 << 12;
          if ( MmIsIoSpaceActive(v49, v40 << 12) )
          {
            v50 = v58;
            do
            {
              v59.QuadPart = -10000LL;
              KeDelayExecutionThread(0, 0, &v59);
            }
            while ( MmIsIoSpaceActive(v49, v50) );
          }
          if ( (v17 & 2) == 0 )
          {
            ExFreePoolWithTag(*((PVOID *)v10 + 18), 0);
            *((_QWORD *)v10 + 18) = 0LL;
          }
          *((_BYTE *)v10 + 130) = 0;
        }
        else
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v13);
          v51[3] = 270LL;
          v51[4] = 4LL;
          v51[5] = v10;
          v51[6] = -1073741558LL;
          v51[7] = 0LL;
          WdLogEvent5_WdCriticalError(v51);
        }
      }
      v18 = (struct _MDL *)*((_QWORD *)v10 + 24);
      if ( v18 )
      {
        MmUnsecureVirtualMemory(v18);
        *((_QWORD *)v10 + 24) = 0LL;
      }
      v19 = v67;
      goto LABEL_21;
    }
LABEL_15:
    if ( (unsigned int)v9 <= 1 )
    {
      v19 = v67;
      v8 = 1;
      *((_QWORD *)v10 + 17) = v67;
      *((_QWORD *)v10 + 18) = a4;
    }
    else
    {
      if ( (v17 & 2) == 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v10 + 18), 0);
        v18 = (struct _MDL *)*((_QWORD *)v10 + 24);
        *((_QWORD *)v10 + 18) = 0LL;
        if ( v18 )
        {
          MmUnsecureVirtualMemory(v18);
          *((_QWORD *)v10 + 24) = 0LL;
        }
      }
      v19 = v67;
    }
    *((_BYTE *)v10 + 130) = v8;
LABEL_21:
    v20 = (struct _EPROCESS *)PsGetCurrentProcess(v18, v13);
    VIDMM_GLOBAL::RecordRotation(v20, VirtualAddress, v19, a4, (enum _MM_ROTATE_DIRECTION)v9, v11);
    return (unsigned int)v11;
  }
  v22 = MmSecureVirtualMemory(v15, Size, 4u);
  *((_QWORD *)v10 + 24) = v22;
  if ( v22 )
  {
    v15 = VirtualAddress;
    goto LABEL_9;
  }
  _InterlockedAdd(&dword_1C004D690, 1u);
  v31 = WdLogNewEntry5_WdLowResource(v23);
  *(_QWORD *)(v31 + 24) = 3239LL;
  WdLogEvent5_WdLowResource(v31);
  return 3221225495LL;
}
