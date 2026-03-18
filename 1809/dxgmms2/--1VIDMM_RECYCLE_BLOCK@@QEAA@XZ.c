/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C00598BC
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C00012D0 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateK0pxqqt @ 0x1C00281E8 (McTemplateK0pxqqt.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C005F3E4 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B28D8 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this)
{
  PVOID *v2; // rsi
  unsigned __int64 v3; // rcx
  const GUID *v4; // r8
  unsigned __int64 v5; // r9
  void *Data1; // rdx
  NTSTATUS v7; // eax
  __int64 v8; // rdi
  PVOID v9; // r9
  __int64 v10; // rax
  VIDMM_RECYCLE_BLOCK **v11; // rdx
  VIDMM_RECYCLE_BLOCK **v12; // rcx
  void *v13; // rcx
  _QWORD *v14; // rax
  ULONG_PTR v15; // [rsp+50h] [rbp+8h] BYREF

  v2 = (PVOID *)((char *)this + 40);
  v3 = *((_QWORD *)this + 5);
  v4 = (const GUID *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 6) - v3;
  v15 = v5;
  Data1 = (void *)v4->Data1;
  if ( (unsigned int)((_DWORD)Data1 - 9) <= 1 )
  {
    Data1 = (void *)*((_QWORD *)this + 14);
    if ( Data1 )
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(
        *(VIDMM_PROCESS **)(*(_QWORD *)v4->Data4 + 8LL),
        Data1,
        *((_QWORD *)this + 15),
        v5,
        1);
  }
  else
  {
    if ( (unsigned int)((_DWORD)Data1 - 3) <= 3 )
    {
      if ( (unsigned int)((_DWORD)Data1 - 5) <= 1 && v3 )
        MmUnmapViewInSystemSpace((PVOID)v3);
      v13 = (void *)*((_QWORD *)this + 7);
      if ( !v13 || *((_QWORD *)this + 8) )
      {
        v3 = *((_QWORD *)this + 8);
        if ( !v3 )
          goto LABEL_5;
        ObCloseHandle((HANDLE)v3, (v3 & 0xFFFFFFFF80000000uLL) == 0);
        v13 = (void *)*((_QWORD *)this + 7);
      }
      VidMmDereferenceObjectAsync(v13);
      goto LABEL_5;
    }
    if ( v3 )
    {
      v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2, &v15, 0x8000u);
      v8 = v7;
      v3 = v7 + 0x80000000;
      if ( (v3 & 0x80000000) == 0LL && v7 != -1073741558 )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v3, Data1);
        v14[3] = *v2;
        v14[4] = this;
        v14[5] = v8;
        v14[6] = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL);
        WdLogEvent5_WdAssertion(v14);
      }
    }
  }
LABEL_5:
  if ( bTracingEnabled )
  {
    v3 = *((_QWORD *)this + 4);
    Data1 = (void *)*(unsigned int *)v3;
    v9 = (unsigned int)((_DWORD)Data1 - 3) <= 3 ? (PVOID)*((_QWORD *)this + 7) : *v2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pxqqt(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL),
        &EventDestroyProcessAllocation,
        v4,
        v9,
        v15,
        (_DWORD)Data1,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 8LL) + 8LL),
        1);
  }
  v10 = WdLogNewEntry5_WdEvent(v3, Data1);
  *(_QWORD *)(v10 + 24) = this;
  WdLogEvent5_WdEvent(v10);
  v11 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v11[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v12 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v12 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v12 = (VIDMM_RECYCLE_BLOCK *)v11;
  v11[1] = (VIDMM_RECYCLE_BLOCK *)v12;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
