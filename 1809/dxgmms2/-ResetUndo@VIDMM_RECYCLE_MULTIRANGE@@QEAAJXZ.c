/*
 * XREFs of ?ResetUndo@VIDMM_RECYCLE_MULTIRANGE@@QEAAJXZ @ 0x1C00B85D8
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00B8540 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C00B7A84 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C00B87AC (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

__int64 __fastcall VIDMM_RECYCLE_MULTIRANGE::ResetUndo(VIDMM_RECYCLE_MULTIRANGE *this)
{
  int v1; // ebp
  const GUID *v2; // r8
  __int64 v3; // rdi
  VIDMM_RECYCLE_MULTIRANGE *v4; // rbx
  ULONG Protect; // esi
  int v6; // edx
  int v7; // eax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (const GUID *)(*((_QWORD *)this + 5) - *((_QWORD *)this + 6));
  LODWORD(v3) = 0;
  v4 = this;
  BaseAddress = 0LL;
  RegionSize = (ULONG_PTR)v2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = this;
    v2 = (const GUID *)RegionSize;
  }
  if ( *((_BYTE *)v4 + 153) )
  {
    LODWORD(v3) = -1071775472;
LABEL_19:
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q((__int64)this, &EventPerformanceWarning, v2, 18);
    goto LABEL_22;
  }
  Protect = 1028;
  this = *(VIDMM_RECYCLE_MULTIRANGE **)(*((_QWORD *)v4 + 10) + 32LL);
  v6 = *(_DWORD *)this;
  if ( (unsigned int)(*(_DWORD *)this - 3) > 3 )
  {
    BaseAddress = (PVOID)*((_QWORD *)v4 + 6);
    v7 = 4;
    if ( v6 != 2 )
      v7 = 1028;
    Protect = v7;
  }
  else
  {
    if ( v6 != 3 )
      Protect = 4;
    VIDMM_RECYCLE_MULTIRANGE::Map(v4, 0LL, (unsigned __int64)v2, 1u);
    if ( *((_BYTE *)v4 + 152) && (this = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v4 + 20)) != 0LL )
    {
      this = (VIDMM_RECYCLE_MULTIRANGE *)((char *)this + *((_QWORD *)v4 + 21));
      v1 = 1;
      BaseAddress = this;
    }
    else
    {
      LODWORD(v3) = -1071775472;
    }
  }
  if ( (int)v3 >= 0 )
  {
    v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000000u, Protect);
    v3 = v8;
    if ( v8 < 0 )
    {
      v10 = WdLogNewEntry5_WdEvent(this, v9);
      *(_QWORD *)(v10 + 24) = v3;
      WdLogEvent5_WdEvent(v10);
    }
  }
  if ( (_DWORD)v3 == -1071775472 )
    goto LABEL_19;
LABEL_22:
  if ( v1 )
    VIDMM_RECYCLE_MULTIRANGE::Unmap(v4);
  return (unsigned int)v3;
}
