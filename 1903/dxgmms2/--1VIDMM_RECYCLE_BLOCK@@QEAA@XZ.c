/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1C00800C0
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C001452C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     McTemplateK0pxqqt @ 0x1C0028D24 (McTemplateK0pxqqt.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C008024C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1C00B5D38 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this)
{
  PVOID *v2; // rsi
  void *v3; // rcx
  unsigned int *v4; // r8
  ULONG_PTR v5; // r9
  void *v6; // rdx
  void *v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int *v10; // rcx
  PVOID v11; // r9
  __int64 v12; // rax
  VIDMM_RECYCLE_BLOCK **v13; // rdx
  VIDMM_RECYCLE_BLOCK **v14; // rcx
  NTSTATUS v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rcx
  _QWORD *v18; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+8h] BYREF

  v2 = (PVOID *)((char *)this + 40);
  v3 = (void *)*((_QWORD *)this + 5);
  v4 = (unsigned int *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 6) - (_QWORD)v3;
  RegionSize = v5;
  v6 = (void *)*v4;
  if ( (unsigned int)((_DWORD)v6 - 9) <= 1 )
  {
    v6 = (void *)*((_QWORD *)this + 14);
    if ( v6 )
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(
        *(VIDMM_PROCESS **)(*((_QWORD *)v4 + 1) + 8LL),
        v6,
        *((_QWORD *)this + 15),
        v5,
        1);
  }
  else if ( (unsigned int)((_DWORD)v6 - 3) > 3 )
  {
    if ( v3 )
    {
      v15 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v2, &RegionSize, 0x8000u);
      v16 = v15;
      v17 = v15 + 0x80000000;
      if ( (int)v17 >= 0 && v15 != -1073741558 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v17, v6);
        v18[3] = *v2;
        v18[4] = this;
        v18[5] = v16;
        v18[6] = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 8LL);
        WdLogEvent5_WdAssertion(v18);
      }
    }
  }
  else
  {
    if ( (unsigned int)((_DWORD)v6 - 5) <= 1 && v3 )
      MmUnmapViewInSystemSpace(v3);
    v7 = (void *)*((_QWORD *)this + 7);
    if ( !v7 || *((_QWORD *)this + 8) )
    {
      v8 = *((_QWORD *)this + 8);
      if ( !v8 )
        goto LABEL_11;
      ObCloseHandle((HANDLE)v8, (v8 & 0xFFFFFFFF80000000uLL) == 0);
      v7 = (void *)*((_QWORD *)this + 7);
    }
    VidMmDereferenceObjectAsync(v7);
  }
LABEL_11:
  v9 = *((_QWORD *)this + 17);
  if ( v9 )
  {
    operator delete(*(void **)v9);
    operator delete(*((void **)this + 17));
  }
  if ( bTracingEnabled )
  {
    v10 = (unsigned int *)*((_QWORD *)this + 4);
    v6 = (void *)*v10;
    v11 = (unsigned int)((_DWORD)v6 - 3) <= 3 ? (PVOID)*((_QWORD *)this + 7) : *v2;
    v9 = *(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0pxqqt(
        v9,
        &EventDestroyProcessAllocation,
        *(const GUID **)(v9 + 8),
        v11,
        RegionSize,
        (_DWORD)v6,
        *(_QWORD *)(v9 + 8),
        1);
  }
  v12 = WdLogNewEntry5_WdEvent(v9, v6);
  *(_QWORD *)(v12 + 24) = this;
  WdLogEvent5_WdEvent(v12);
  v13 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v13[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v14 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v14 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v14 = (VIDMM_RECYCLE_BLOCK *)v13;
  v13[1] = (VIDMM_RECYCLE_BLOCK *)v14;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
