/*
 * XREFs of ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0085290
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00851C0 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0064ED8 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z @ 0x1C006600C (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJAEA_N@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00693D0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00694F0 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C007FC3C (-IsRotateVAD@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00854F4 (-RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::Rotate(
        VIDMM_RECYCLE_HEAP_MGR *a1,
        _QWORD *a2,
        int a3,
        struct _MDL *a4,
        SIZE_T Size,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context,
        char a8,
        PVOID VirtualAddress)
{
  char v9; // r15
  __int64 v10; // rdi
  VIDMM_RECYCLE_HEAP_MGR *v11; // r14
  int v12; // r12d
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  PVOID v16; // r10
  SIZE_T v17; // r12
  char v18; // si
  struct _MDL *v19; // rcx
  unsigned __int64 v20; // rbx
  struct _EPROCESS *v21; // rax
  HANDLE v23; // rax
  __int64 v24; // rcx
  int v25; // ebx
  NTSTATUS v26; // eax
  PMDL v27; // rax
  _QWORD *v28; // rax
  const GUID *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rax
  ULONG_PTR v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  const GUID *v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  const GUID *v40; // r8
  PVOID v41; // rdi
  NTSTATUS (__stdcall *v42)(PMDL, PMDL, PVOID); // rsi
  PVOID v43; // r12
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rbx
  unsigned int v47; // edx
  __int64 v48; // r9
  _QWORD *v49; // r8
  __int64 v50; // rsi
  __int64 v51; // rdx
  PHYSICAL_ADDRESS v52; // rdi
  union _LARGE_INTEGER v53; // r14
  PHYSICAL_ADDRESS v54; // rbx
  SIZE_T v55; // r13
  _QWORD *v56; // rax
  __int64 CurrentProcess; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  SIZE_T v61; // [rsp+30h] [rbp-48h]
  ULONG_PTR v62; // [rsp+38h] [rbp-40h] BYREF
  ULONG_PTR v63; // [rsp+40h] [rbp-38h] BYREF
  union _LARGE_INTEGER v64; // [rsp+48h] [rbp-30h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR NumberOfBytes; // [rsp+58h] [rbp-20h] BYREF
  union _LARGE_INTEGER v67; // [rsp+60h] [rbp-18h] BYREF
  union _LARGE_INTEGER v68; // [rsp+68h] [rbp-10h] BYREF
  _QWORD *v70; // [rsp+C8h] [rbp+50h] BYREF
  int v71; // [rsp+D0h] [rbp+58h]
  PMDL NewMdl; // [rsp+D8h] [rbp+60h]

  NewMdl = a4;
  v71 = a3;
  v70 = a2;
  v9 = 0;
  v10 = a3;
  v11 = a1;
  v12 = 0;
  if ( *((_DWORD *)a1 + 54) == 4 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v28[3] = 270LL;
    v28[4] = 52LL;
    v28[5] = 11LL;
    v28[6] = v10;
    v28[7] = 0LL;
    WdLogEvent5_WdCriticalError(v28);
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)v11 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    if ( *((_DWORD *)i + 16) == 3 )
    {
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(a1, i);
      LOBYTE(v70) = 0;
      v12 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(i, (bool *)&v70, v29);
      if ( v12 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30);
        v32[3] = i;
        v32[4] = v11;
        v32[5] = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 10) + 32LL) + 8LL) + 8LL);
        WdLogEvent5_WdWarning(v32);
        VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(
          *(VIDMM_RECYCLE_HEAP_MGR **)(*(_QWORD *)(*((_QWORD *)v11 + 10) + 32LL) + 8LL),
          i);
        return (unsigned int)v12;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)v11 + 9) )
      break;
  }
  VirtualAddress = (PVOID)*((_QWORD *)v11 + 6);
  if ( !VIDMM_RECYCLE_MULTIRANGE::IsRotateVAD((struct VIDMM_RECYCLE_RANGE **)v11) )
  {
    if ( (int)v10 >= 0 )
    {
      if ( (int)v10 <= 1 )
      {
        return (unsigned int)-1073741823;
      }
      else if ( (int)v10 <= 3 )
      {
        CurrentProcess = PsGetCurrentProcess(v15, v14);
        v60 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v59, v58);
        v60[3] = 270LL;
        v60[4] = 1LL;
        v60[5] = CurrentProcess;
        v60[6] = v11;
        v60[7] = v10;
        WdLogEvent5_WdCriticalError(v60);
      }
    }
    return (unsigned int)v12;
  }
  if ( (unsigned int)v10 > 1 )
  {
    v17 = *((_QWORD *)v11 + 17);
    v61 = v17;
    goto LABEL_9;
  }
  v17 = Size;
  v61 = Size;
  if ( *((_QWORD *)v11 + 24) )
  {
LABEL_9:
    v18 = a8;
    if ( (_DWORD)v10 == 2 )
    {
      Interval.QuadPart = -10000LL;
      v34 = v17;
      while ( 1 )
      {
        v62 = v34;
        v12 = MmRotatePhysicalView(v16, &v62, NewMdl, MmToRegularMemory, CopyFunction, Context);
        if ( v12 != 1073741849 )
          break;
        v35 = WdLogNewEntry5_WdWarning(v19, v14);
        WdLogEvent5_WdWarning(v35);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v36, &EventPerformanceWarning, v37, 12);
        v34 -= v62;
        VirtualAddress = (char *)VirtualAddress + v62;
        KeDelayExecutionThread(0, 0, &Interval);
        v16 = VirtualAddress;
      }
    }
    else if ( (_DWORD)v10 == 3 )
    {
      v64.QuadPart = -10000LL;
      v25 = a8 & 1;
      v63 = v17;
      while ( 1 )
      {
        v26 = MmRotatePhysicalView(v16, &v63, NewMdl, MmToRegularMemoryNoCopy, CopyFunction, Context);
        v12 = v26;
        if ( !v25 || v26 != 1073741849 )
          break;
        v38 = WdLogNewEntry5_WdWarning(v19, v14);
        WdLogEvent5_WdWarning(v38);
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v39, &EventPerformanceWarning, v40, 12);
        v41 = Context;
        v42 = CopyFunction;
        v43 = VirtualAddress;
        while ( MmRotatePhysicalView(v43, &v63, *((PMDL *)v11 + 18), MmToFrameBufferNoCopy, v42, v41) < 0 )
          KeDelayExecutionThread(0, 0, &v64);
        KeDelayExecutionThread(0, 0, &v64);
        v18 = a8;
        v16 = v43;
        LODWORD(v10) = v71;
      }
    }
    else
    {
      if ( (a8 & 2) != 0 )
      {
        v19 = (struct _MDL *)*((_QWORD *)v11 + 18);
        NewMdl = v19;
      }
      else
      {
        v19 = NewMdl;
      }
      NumberOfBytes = v17;
      if ( g_bInjectRotateFailure )
      {
        v12 = -1073741823;
      }
      else
      {
        v12 = MmRotatePhysicalView(v16, &NumberOfBytes, v19, (MM_ROTATE_DIRECTION)v10, CopyFunction, Context);
        if ( v12 >= 0 )
          goto LABEL_15;
      }
      if ( (v18 & 2) != 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
        *((_QWORD *)v11 + 18) = 0LL;
      }
    }
    if ( v12 < 0 )
    {
      if ( v12 == -1073741558 && (unsigned int)(v10 - 2) <= 1 )
      {
        v44 = *((_QWORD *)v11 + 18);
        if ( v44 )
        {
          v45 = 1LL;
          v46 = *(_QWORD *)(v44 + 48);
          v47 = *(_DWORD *)(v44 + 40) >> 12;
          v48 = v46;
          if ( v47 > 1 )
          {
            v49 = (_QWORD *)(v44 + 56);
            v70 = (_QWORD *)(v44 + 56);
            v50 = v47 - 1;
            do
            {
              v51 = *v49;
              if ( *v49 == v48 + 1 )
              {
                ++v45;
              }
              else
              {
                v52.QuadPart = v46 << 12;
                v67.QuadPart = v45 << 12;
                v46 = v51;
                if ( MmIsIoSpaceActive(v52, v45 << 12) )
                {
                  v53 = v67;
                  do
                  {
                    v67.QuadPart = -10000LL;
                    KeDelayExecutionThread(0, 0, &v67);
                  }
                  while ( MmIsIoSpaceActive(v52, v53.QuadPart) );
                }
                v49 = v70;
                v51 = v46;
                v45 = 1LL;
              }
              ++v49;
              v48 = v51;
              v70 = v49;
              --v50;
            }
            while ( v50 );
            v18 = a8;
            v11 = a1;
            LODWORD(v10) = v71;
          }
          v63 = v45 << 12;
          v54.QuadPart = v46 << 12;
          if ( MmIsIoSpaceActive(v54, v45 << 12) )
          {
            v55 = v63;
            do
            {
              v68.QuadPart = -10000LL;
              KeDelayExecutionThread(0, 0, &v68);
            }
            while ( MmIsIoSpaceActive(v54, v55) );
          }
          if ( (v18 & 2) == 0 )
          {
            ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
            *((_QWORD *)v11 + 18) = 0LL;
          }
          *((_BYTE *)v11 + 130) = 0;
        }
        else
        {
          v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v14);
          v56[3] = 270LL;
          v56[4] = 4LL;
          v56[5] = v11;
          v56[6] = -1073741558LL;
          v56[7] = 0LL;
          WdLogEvent5_WdCriticalError(v56);
        }
      }
      v19 = (struct _MDL *)*((_QWORD *)v11 + 24);
      if ( v19 )
      {
        MmUnsecureVirtualMemory(v19);
        *((_QWORD *)v11 + 24) = 0LL;
      }
      v20 = v61;
      goto LABEL_21;
    }
LABEL_15:
    if ( (unsigned int)v10 <= 1 )
    {
      v20 = v61;
      v9 = 1;
      v27 = NewMdl;
      *((_QWORD *)v11 + 17) = v61;
      *((_QWORD *)v11 + 18) = v27;
    }
    else
    {
      if ( (v18 & 2) == 0 )
      {
        ExFreePoolWithTag(*((PVOID *)v11 + 18), 0);
        v19 = (struct _MDL *)*((_QWORD *)v11 + 24);
        *((_QWORD *)v11 + 18) = 0LL;
        if ( v19 )
        {
          MmUnsecureVirtualMemory(v19);
          *((_QWORD *)v11 + 24) = 0LL;
        }
      }
      v20 = v61;
    }
    *((_BYTE *)v11 + 130) = v9;
LABEL_21:
    v21 = (struct _EPROCESS *)PsGetCurrentProcess(v19, v14);
    VIDMM_GLOBAL::RecordRotation(v21, VirtualAddress, v20, NewMdl, (enum _MM_ROTATE_DIRECTION)v10, v12);
    return (unsigned int)v12;
  }
  v23 = MmSecureVirtualMemory(v16, Size, 4u);
  *((_QWORD *)v11 + 24) = v23;
  if ( v23 )
  {
    v16 = VirtualAddress;
    goto LABEL_9;
  }
  _InterlockedAdd(&dword_1C004E6B0, 1u);
  v33 = WdLogNewEntry5_WdLowResource(v24);
  *(_QWORD *)(v33 + 24) = 3444LL;
  WdLogEvent5_WdLowResource(v33);
  return 3221225495LL;
}
