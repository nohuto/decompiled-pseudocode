/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C3750
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0027D3C (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt @ 0x1C00281E8 (McTemplateK0pxqqt.c)
 *     McTemplateK0qpxp @ 0x1C0028290 (McTemplateK0qpxp.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C005F3E4 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C3B20 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  _DWORD *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // ecx
  __int64 v10; // rdx
  const GUID *v11; // r8
  const GUID *v12; // r8
  int v13; // eax
  _QWORD *v14; // rcx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]

  v3 = (_DWORD *)*((_QWORD *)a2 + 3);
  v5 = **((_QWORD **)this + 1);
  if ( PsGetCurrentProcess(this, a2) != v5 )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
    v8[5] = 0LL;
    v8[6] = 0LL;
    v8[7] = 0LL;
    v8[3] = 270LL;
    v8[4] = 30LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( (*v3 & 1) != 0 )
  {
    v9 = v3[6];
    if ( (unsigned int)(v9 - 3) > 3 )
    {
      MmUnsecureVirtualMemory(*((HANDLE *)v3 + 6));
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v3 + 1, (PSIZE_T)v3 + 7, 0x8000u);
    }
    else
    {
      if ( (unsigned int)(v9 - 5) <= 1 )
        MmUnmapViewInSystemSpace(*((PVOID *)v3 + 1));
      ObCloseHandle(*((HANDLE *)v3 + 5), (*((_QWORD *)v3 + 5) & 0xFFFFFFFF80000000uLL) == 0);
      VidMmDereferenceObjectAsync(*((PVOID *)v3 + 4), v10, v11);
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)v3 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 128LL) -= *((_QWORD *)v3 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 148LL);
    v13 = v3[6];
    v14 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v13 == 1 )
    {
      v14[19] -= *((_QWORD *)v3 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 160LL) -= *((_QWORD *)v3 + 7);
    }
    else
    {
      v15 = v13 == 2;
      v16 = *((_QWORD *)v3 + 7);
      if ( v15 )
      {
        v14[21] -= v16;
        *(_QWORD *)(*((_QWORD *)this + 1) + 176LL) -= *((_QWORD *)v3 + 7);
      }
      else
      {
        v14[23] -= v16;
        *(_QWORD *)(*((_QWORD *)this + 1) + 192LL) -= *((_QWORD *)v3 + 7);
      }
    }
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v3[6] - 3) > 3 )
        v17 = *((_QWORD *)v3 + 1);
      else
        v17 = *((_QWORD *)v3 + 4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          *((_QWORD *)this + 1),
          &EventDestroyProcessAllocationDetails,
          v12,
          *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v3,
          *((_QWORD *)v3 + 7),
          v17);
      if ( bTracingEnabled )
      {
        v18 = (unsigned int)v3[6];
        if ( (unsigned int)(v18 - 3) > 3 )
          v19 = *((_QWORD *)v3 + 1);
        else
          v19 = *((_QWORD *)v3 + 4);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v21) = *(_DWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v20) = v3[6];
          McTemplateK0pxqqt(v18, &EventDestroyProcessAllocation, v12, v19, *((_QWORD *)v3 + 7), v20, v21, 0);
        }
      }
    }
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 64), v3);
  }
  else
  {
    VIDMM_PROCESS_HEAP::FreeSmallAllocation(this, a2);
  }
}
