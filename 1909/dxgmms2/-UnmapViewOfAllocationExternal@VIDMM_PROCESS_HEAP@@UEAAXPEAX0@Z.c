/*
 * XREFs of ?UnmapViewOfAllocationExternal@VIDMM_PROCESS_HEAP@@UEAAXPEAX0@Z @ 0x1C00C7B30
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069D3C (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::UnmapViewOfAllocationExternal(VIDMM_PROCESS_HEAP *this, PVOID *a2, void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  void *CurrentProcess; // rax
  __int64 v10; // rax

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
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    CurrentProcess = (void *)PsGetCurrentProcess(v7, v6);
    VidMmUnmapViewAsync(CurrentProcess, a2[4], a3);
  }
  else
  {
    v10 = PsGetCurrentProcess(v7, v6);
    MmUnmapViewOfSection(v10, a3);
  }
}
