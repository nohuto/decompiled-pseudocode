/*
 * XREFs of ?MapViewOfAllocation@VIDMM_PROCESS_HEAP@@UEAAPEAXPEAX_K1H@Z @ 0x1C00C4000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall VIDMM_PROCESS_HEAP::MapViewOfAllocation(
        VIDMM_PROCESS_HEAP *this,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  void *v14; // r12
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  ULONG_PTR v20; // rax
  __int64 v21; // rbx
  __int64 CurrentProcess; // rax
  char *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rcx
  char *v26; // rdi
  __int64 v27; // rax
  ULONG_PTR ViewSize[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+58h] BYREF

  v32 = a4;
  v5 = (__int64 *)*((_QWORD *)this + 1);
  v6 = 0LL;
  MappedBase = 0LL;
  v9 = *v5;
  if ( PsGetCurrentProcess(this, a2) != v9 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
    v12[3] = 270LL;
    v12[4] = 30LL;
    v12[5] = 0LL;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v13 = a3;
    v14 = (void *)a2[4];
    v15 = ((*((_DWORD *)a2 + 6) - 4) & 0xFFFFFFFD) != 0 ? 1028 : 4;
  }
  else
  {
    v11 = a2[1];
    v15 = 4;
    v13 = a3 + a2[2];
    v14 = *(void **)(v11 + 88);
    if ( ((*(_DWORD *)(v11 + 80) - 4) & 0xFFFFFFFD) != 0 )
      v15 = 1028;
  }
  v31 = v13;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    _InterlockedIncrement(&dword_1C004D6B4);
    v16 = WdLogNewEntry5_WdLowResource(v11);
    *(_QWORD *)(v16 + 24) = 2365LL;
    WdLogEvent5_WdLowResource(v16);
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v11, v10);
    if ( (int)MmMapViewOfSection(v14, CurrentProcess, &MappedBase, 0LL, v32, &v31, &v32, 2, 0, v15) >= 0 )
    {
      v23 = (char *)MappedBase;
      *(_DWORD *)a2 |= 2u;
      v24 = v13 - v31;
      a2[11] = v23;
      return &v23[v24];
    }
  }
  _InterlockedIncrement(&dword_1C004D6B4);
  v18 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v18 + 24) = a5;
  WdLogEvent5_WdLowResource(v18);
  if ( a5 )
    return (char *)MappedBase;
  v19 = *(_DWORD *)a2;
  ViewSize[0] = 0LL;
  if ( (v19 & 1) != 0 )
  {
    v20 = a2[7];
    v21 = 0LL;
  }
  else
  {
    v21 = a2[2];
    v20 = *(_QWORD *)(a2[1] + 40LL);
  }
  ViewSize[0] = v20;
  if ( MmMapViewInSystemSpace(v14, &MappedBase, ViewSize) < 0 )
  {
    _InterlockedIncrement(&dword_1C004D6B4);
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = 2461LL;
    WdLogEvent5_WdLowResource(v27);
  }
  else
  {
    v26 = (char *)MappedBase;
    *(_DWORD *)a2 |= 4u;
    a2[11] = v26;
    return &v26[v21 + a3];
  }
  return (char *)v6;
}
