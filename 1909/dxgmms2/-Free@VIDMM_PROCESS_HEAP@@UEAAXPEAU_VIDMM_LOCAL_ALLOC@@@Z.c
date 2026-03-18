/*
 * XREFs of ?Free@VIDMM_PROCESS_HEAP@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C6400
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C0027840 (ExFreeToPagedLookasideList.c)
 *     McTemplateK0pxqqt @ 0x1C0028D24 (McTemplateK0pxqqt.c)
 *     McTemplateK0qpxp @ 0x1C0028DCC (McTemplateK0qpxp.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C008137C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00C67D4 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::Free(VIDMM_PROCESS_HEAP *this, struct _VIDMM_LOCAL_ALLOC *a2)
{
  _DWORD *v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  int v9; // ecx
  int v10; // eax
  _QWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-20h]
  __int64 v18; // [rsp+30h] [rbp-18h]

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
      VidMmDereferenceObjectAsync(*((struct _LIST_ENTRY **)v3 + 4));
    }
    *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) -= *((_QWORD *)v3 + 7);
    *(_QWORD *)(*((_QWORD *)this + 1) + 128LL) -= *((_QWORD *)v3 + 7);
    --*(_DWORD *)(*((_QWORD *)this + 1) + 148LL);
    v10 = v3[6];
    v11 = (_QWORD *)*((_QWORD *)this + 1);
    if ( v10 == 1 )
    {
      v11[19] -= *((_QWORD *)v3 + 7);
      *(_QWORD *)(*((_QWORD *)this + 1) + 160LL) -= *((_QWORD *)v3 + 7);
    }
    else
    {
      v12 = v10 == 2;
      v13 = *((_QWORD *)v3 + 7);
      if ( v12 )
      {
        v11[21] -= v13;
        *(_QWORD *)(*((_QWORD *)this + 1) + 176LL) -= *((_QWORD *)v3 + 7);
      }
      else
      {
        v11[23] -= v13;
        *(_QWORD *)(*((_QWORD *)this + 1) + 192LL) -= *((_QWORD *)v3 + 7);
      }
    }
    if ( bTracingEnabled )
    {
      if ( (unsigned int)(v3[6] - 3) > 3 )
        v14 = *((_QWORD *)v3 + 1);
      else
        v14 = *((_QWORD *)v3 + 4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        McTemplateK0qpxp(
          v14,
          &EventDestroyProcessAllocationDetails,
          *((const GUID **)v3 + 7),
          *(_QWORD *)(*((_QWORD *)this + 1) + 8LL),
          (char)v3,
          *((_QWORD *)v3 + 7),
          v14);
      if ( bTracingEnabled )
      {
        v15 = (unsigned int)v3[6];
        if ( (unsigned int)(v15 - 3) > 3 )
          v16 = *((_QWORD *)v3 + 1);
        else
          v16 = *((_QWORD *)v3 + 4);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        {
          LODWORD(v18) = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL);
          LODWORD(v17) = v3[6];
          McTemplateK0pxqqt(
            v15,
            &EventDestroyProcessAllocation,
            *((const GUID **)v3 + 7),
            v16,
            *((_QWORD *)v3 + 7),
            v17,
            v18,
            0);
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
